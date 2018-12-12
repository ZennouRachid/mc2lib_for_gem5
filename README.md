# mc2lib_for_gem5

## Cloning the REPO

We use gitHub's [git-lfs](https://git-lfs.github.com/) support to store several large binary files. After cloning the repo, please do a lfs fetch update from the repository root folder to retrieve them.

```(console)
git lfs fetch
```

## Install GEM5 instructions:
 - To build gem5, we need to install the following softwares:```sudo apt-get install mercurial scons swig gcc m4 python python-dev libgoogle-perftools-dev g++ zlib-dev zlib1g-dev```
 - Note that for g++ we used the version 4.8. 
 - Get gem5 from [gem5 website](http://repo.gem5.org/gem5/rev/e18a6c55bec0)  
 - Get the patch from this [link](http://homepages.inf.ed.ac.uk/s0787712/res/mcversi_gem5.patch)
 - Patch gem5 with Mcversi patch : ```cd gem5 ```,  ```patch < mcversi_gem5.patch```
 - Note that we copy the files generated in the gem5 directory (mcversi.* files) after patching the gem5 to the gem5/src/sim directory in order to fix some errors we got, In addition we load the mc2lib directory from [mc2lib](https://github.com/melver/mc2lib/tree/master/include/mc2lib) to the gem5/src/sim directory.
 - Modify some files to set Mcversi paper parameters (the system parameters in the [paper](https://www.marcoelver.com/res/hpca2016-mcversi.pdf) ): 
 1. ROB entries = 40: modify the default value of ROBEntries in src/cpu/o3/O3CPU.py. The default value is 192; we modify it to 40.
 2. LSQ entries = 32: modify the default value of LQEntries and SQEntries in src/cpu/o3/O3CPU.py. Since gem5 has a separate queue for loads and stores, we set each variable to 16 so that the aggregated size becomes 32.
3. L1 and L2 hit latency: modify the default value of hit_latency in the L1Cache class and L2Cache class in configs/common/Caches.py. 
4. We still need to know how to set the Memory latency, so we supposed that we use the default value.

## Build the X86 Architecture:
- Build the arch x86 : ```scons build/X86/gem5.opt -j8``` with –j is the number of cores to create.
- To use full system: 
  - Create full_system_images directory: ```mkdir full_system_images```, ```cd full_system_images```,``` wget http://www.m5sim.org/dist/current/x86/x86-system.tar.bz2 ```and ```wget http://www.m5sim.org/dist/current/x86/config-x86.tar.bz2 ```(source : http://gem5.org/Download)
  - Modify :  gem5/configs/common/SysPaths.py to set: path = [ ’/dist/m5/system’, ’<complete path to your disks and binaries directory>’ ]
. Our case: path = [ '/dist/m5/system', '/home/rachid/gem5/full_system_images/']
  - AND gem5/configs/common/Benchmarks.py. There we specify the name of our linux image: return env.get(’LINUX_IMAGE’, disk(’linux-parsec-2-1-m5.img’))
 - Add alpha disk image and binaries to full_system_images/: [Alpha](http://www.m5sim.org/dist/current/m5_system_2.0b3.tar.bz2) (to avoid some errors we get: can't find linux-bigswap2.img error)
 # McVerSi Guest Workload:
  - In order to run mcversi under x86 we need to copy the guest workload ( we used a [pre-compiled guest workload](https://www.marcoelver.com/res/mcversi_guest_workload_gem5.tar.gz), file: guest_workload.x86-64) to x86 image following this steps:
    1. Extract the file from mcversi_guest_workload_gem5.tar.gz
    2. Make a directory called mount inside full_system_images directory: mkdir mount
    3. Mount the image, type from full_system_images directory: ```sudo mount -o loop,offset=32256 disks/linux-x86.img ./mount```
    4. cd mount, sudo mkdir movefile
    5. copy the file to image: sudo ```cp /path_to_file_guest_workload.x86-64 /movefile```
    6. Type whether successful by cd movefile and ls
    7. Unmount the image by typing: ```sudo umount mount``` from full_system_images directory.

## Taking a checkpoint and restoring it:

- Start up the architecture with ```cpu-type=timing``` :  ```./build/X86/gem5.opt configs/example/fs.py --disk-image=/home/rachid/gem5/full_system_images/disks/linux-x86.img --kernel=/home/rachid/gem5/full_system_images/binaries/x86_64-vmlinux-2.6.22.9.smp --mem-size=512MB --cpu-type=timing --num-cpus=8 --cpu-clock=2GHz --ruby  --caches --l1d_size=32kB --l1i_size=32kB --cacheline_size=64 --l1i_assoc=4 --l1d_assoc=4 --num-l2caches=8 --l2_size=128kB --l2_assoc=4  --garnet-network=fixed --topology=Mesh --mesh-rows=2 ```

- Take a checkpoint ```m5 checkpoint```

- Restore the checkpoint: ```./build/X86/gem5.opt configs/example/fs.py -r N ``` OR ```./build/X86/gem5.opt configs/example/fs.py --checkpoint-restore=N ```, The number N is integer that represents checkpoint number which usually starts from 1 then increases incrementally to 2,3,4...

- Restore the checkpoint with specific CPU type (for instance wpu type: detailed): ```./build/X86/gem5.opt configs/example/fs.py -r N --restore-with-cpu=detailed```

Note: By default, gem5 assumes that the checkpoint is to be restored using Atomic CPUs. This may not work if the checkpoint was recorded using Timing / Detailed / Inorder CPU. One can mention the option --restore-with-cpu <CPU Type> on the command line. The cpu type supplied with this option is then used for restoring from the checkpoint.

## Run McVerSi Guest Workload under X86 architecture:
  - Start up the full system with the paper parameters: ```./build/X86/gem5.opt configs/example/fs.py --disk-image=/home/rachid/gem5/full_system_images/disks/linux-x86.img --kernel=/home/rachid/gem5/full_system_images/binaries/x86_64-vmlinux-2.6.22.9.smp --mem-size=512MB --cpu-type=detailed --cpu-clock=2GHz --ruby --num-cpus=4 --l1d_size=32kB --l1i_size=32kB --cacheline_size=64 --l1i_assoc=4 --l1d_assoc=4 --num-l2caches=8 --l2_size=128kB --l2_assoc=4  --topology=Mesh --mesh-rows=2  --num-l2caches=16 --num-dirs=16 --garnet-network=fixed ```
  - Use telnet to access to the console: telnet localhost 3456
  - cd movefile :
  - Run the pre-compiled McVerSi Guest Workload using provided parameters in this [link](https://github.com/melver/mc2lib/blob/master/contrib/mcversi/run-10-8KB.sh) with 4 threads instead 10 for the first time: ``` ./guest_workload 4  0xf00200 0x09140010 0x100000000 ```
  - Run McVerSi Guest Workload with 10 threads: ``` ./guest_workload 10 0xf00200 0x09140010 0x100000000 ```
