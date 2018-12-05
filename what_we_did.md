We used a Virtual machine with the following parameters :

Memory : 4096MB

Number of cores : 4

Processor : Intel® Core™ i5-5200U CPU @ 2.20GHz × 4

Hard disk : 250 GB

OS : Ubuntu 18.04.1 LTS 64-bit

# Run X86 full system
rachid@ubuntu:~/gem5$ ```./build/X86/gem5.opt configs/example/fs.py --disk-image=/home/rachid/gem5/full_system_images/disks/linux-x86.img --kernel=/home/rachid/gem5/full_system_images/binaries/x86_64-vmlinux-2.6.22.9.smp --mem-size=512MB --cpu-type=detailed --cpu-clock=2GHz --ruby --num-cpus=4 --l1d_size=32kB --l1i_size=32kB --cacheline_size=64 --l1i_assoc=4 --l1d_assoc=4 --num-l2caches=8 --l2_size=128kB --l2_assoc=4  --topology=Mesh --mesh-rows=2  --num-l2caches=16 --num-dirs=16 --garnet-network=fixed ```

gem5 Simulator System.  http://gem5.org

gem5 is copyrighted software; use the --copyright option for details.

gem5 compiled Nov 30 2018 02:16:46

gem5 started Dec  5 2018 00:57:58

gem5 executing on ubuntu, pid 27508

command line: ./build/X86/gem5.opt configs/example/fs.py --disk-image=/home/rachid/gem5/full_system_images/disks/linux-x86.img --kernel=/home/rachid/gem5/full_system_images/binaries/x86_64-vmlinux-2.6.22.9.smp --mem-size=512MB --cpu-type=detailed --cpu-clock=2GHz --ruby --num-cpus=4 --l1d_size=32kB --l1i_size=32kB --cacheline_size=64 --l1i_assoc=4 --l1d_assoc=4 --num-l2caches=8 --l2_size=128kB --l2_assoc=4 --topology=Mesh --mesh-rows=2 --num-l2caches=16 --num-dirs=16 --garnet-network=fixed

warn: add_child('cls'): child 'credit_links0 credit_links1' already has parent

warn: add_child('cls'): child 'credit_links0 credit_links1' already has parent

warn: add_child('cls'): child 'credit_links0 credit_links1' already has parent

warn: add_child('cls'): child 'credit_links0 credit_links1' already has parent

warn: add_child('cls'): child 'credit_links0 credit_links1' already has parent

warn: add_child('cls'): child 'credit_links0 credit_links1' already has parent

Global frequency set at 1000000000000 ticks per second

warn: DRAM device capacity (8192 Mbytes) does not match the address range assigned (32 Mbytes)

warn: DRAM device capacity (8192 Mbytes) does not match the address range assigned (32 Mbytes)

warn: DRAM device capacity (8192 Mbytes) does not match the address range assigned (32 Mbytes)

warn: DRAM device capacity (8192 Mbytes) does not match the address range assigned (32 Mbytes)

warn: DRAM device capacity (8192 Mbytes) does not match the address range assigned (32 Mbytes)

warn: DRAM device capacity (8192 Mbytes) does not match the address range assigned (32 Mbytes)

warn: DRAM device capacity (8192 Mbytes) does not match the address range assigned (32 Mbytes)

warn: DRAM device capacity (8192 Mbytes) does not match the address range assigned (32 Mbytes)

info: kernel located at: /home/rachid/gem5/full_system_images/binaries/x86_64-vmlinux-2.6.22.9.smp

Listening for com_1 connection on port 3456

   0: rtc: Real-time clock set to Sun Jan  1 00:00:00 2012
      
0: system.remote_gdb.listener: listening for remote gdb #0 on port 7000

0: system.remote_gdb.listener: listening for remote gdb #1 on port 7001

0: system.remote_gdb.listener: listening for remote gdb #2 on port 7002

0: system.remote_gdb.listener: listening for remote gdb #3 on port 7003

warn: Reading current count from inactive timer.

**** REAL SIMULATION ****

info: Entering event queue @ 0.  Starting simulation...

warn: Replacement policy updates recently became the responsibility of SLICC state machines. Make sure to setMRU() near callbacks in .sm files!

warn: Don't know what interrupt to clear for console.

5477138000: system.pc.com_1.terminal: attach terminal 0

warn: x86 cpuid: unknown family 0x8086

warn: x86 cpuid: unknown family 0x8086

warn: x86 cpuid: unknown family 0x8086

warn: x86 cpuid: unknown family 0x8082

warn: instruction 'wbinvd' unimplemented

warn: Address 0x100000000 is outside of physical memory, stopping fetch

warn: Address 0x100000000 is outside of physical memory, stopping fetch

warn: instruction 'wbinvd' unimplemented

warn: x86 cpuid: unknown family 0x8086

warn: x86 cpuid: unknown family 0x8086

warn: x86 cpuid: unknown family 0x8086

warn: Address 0x100000000 is outside of physical memory, stopping fetch

warn: Address 0x100000000 is outside of physical memory, stopping fetch

warn: x86 cpuid: unknown family 0x8086

warn: x86 cpuid: unknown family 0x8086

warn: x86 cpuid: unknown family 0x8086

warn: Address 0x100000000 is outside of physical memory, stopping fetch

warn: Address 0x100000000 is outside of physical memory, stopping fetch

warn: x86 cpuid: unknown family 0x8086

warn: x86 cpuid: unknown family 0x8086

warn: x86 cpuid: unknown family 0x8086

hack: Assuming logical destinations are 1 << id.

# Run Mcversi Guest Workload under X86 full system:
   # Using 4 threads:
(none) movefile # ```./guest_workload.x86-64 4 0xf00200 0x09140010 0x100000000```

./guest_workload.x86-64 4 0xf00200 0x09140010 0x100000000

Threads: 4

Test iterations: 15729152

Test memory: 152305680 bytes (stride=0x100000000) @ 0x2b41eb3e9010

Spawning threads ...

Running tests ...

guest_workload.[833]: segfault at 0000000000000000 rip 00002aaaaaabb000 rsp 00000000410010e8 error 4

guest_workload.[832]: segfault at 0000000000000000 rip 00002aaaaaaab000 rsp 00000000408000e8 error 4

guest_workload.[831]: segfault at 0000000000000000 rip 00002aaaaaadb000 rsp 00007fffbfe38268 error 4

guest_workload.[834]: segfault at 0000000000000000 rip 00002aaaaaacb000 rsp 00000000418020e8 error 4

Segmentation fault
  # Using 10 threads:
(none) movefile # ```./guest_workload.x86-64 10 0xf00200 0x09140010 0x100000000```

./guest_workload.x86-64 10 0xf00200 0x09140010 0x100000000

Threads: 10 

Test iterations: 15729152

Test memory: 152305680 bytes (stride=0x100000000) @ 0x2ae62f8f8010

Spawning threads ...

guest_workload.x86-64: guest_workload.c:223: spawn_threads: Assertion `!rc' failed.

Aborted

