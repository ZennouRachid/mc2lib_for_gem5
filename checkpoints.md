 # Checkpoint creation:
 ##  Attempt 1 (using paper parameters and cpu-type=timing):
```rachid@ubuntu:~/Documents/gem5-e1$ ./build/X86/gem5.opt configs/example/fs.py --disk-image=/home/rachid/gem5/full_system_images/disks/linux-x86.img --kernel=/home/rachid/gem5/full_system_images/binaries/x86_64-vmlinux-2.6.22.9.smp --cpu-type=timing --mem-size=512MB --cpu-clock=2GHz --ruby --caches --l2cache --num-cpus=8 --l1d_size=32kB --l1i_size=32kB --cacheline_size=64 --l1i_assoc=4 --l1d_assoc=4 --num-l2caches=8 --l2_size=128kB --l2_assoc=4 --topology=Mesh --mesh-rows=2 --num-dirs=8 --garnet-network=fixed```
  ### Telnet interface:
(none) / # ```m5 checkpoint```

m5 checkpoint

Connection closed by foreign host.

  ### Gem5 terminal:
 ```console
 **** REAL SIMULATION ****
info: Entering event queue @ 0.  Starting simulation...
warn: Replacement policy updates recently became the responsibility of SLICC state machines. Make sure to setMRU() near callbacks in .sm files!
warn: Don't know what interrupt to clear for console.
13107966000: system.pc.com_1.terminal: attach terminal 0
warn: x86 cpuid: unknown family 0x8086
warn: instruction 'wbinvd' unimplemented
warn: instruction 'wbinvd' unimplemented
warn: x86 cpuid: unknown family 0x8086
warn: x86 cpuid: unknown family 0x8086
warn: x86 cpuid: unknown family 0x8086
warn: x86 cpuid: unknown family 0x8086
warn: x86 cpuid: unknown family 0x8086
warn: x86 cpuid: unknown family 0x8086
warn: x86 cpuid: unknown family 0x8086
hack: Assuming logical destinations are 1 << id.
warn: Tried to clear PCI interrupt 14
warn: Unknown mouse command 0xe1.
info: Entering event queue @ 7443521102000.  Starting simulation...
info: Entering event queue @ 7443521443250.  Starting simulation...
panic: Runtime Error at MI_example-cache.sm:127: Invalid RubyRequestType.
 @ tick 7443521444000
[mandatory_request_type_to_event:build/X86/mem/protocol/L1Cache_Controller.cc, line 846]
Memory Usage: 2138968 KBytes
Program aborted at tick 7443521444000
--- BEGIN LIBC BACKTRACE ---
./build/X86/gem5.opt(_Z15print_backtracev+0x15)[0x72fd85]
./build/X86/gem5.opt(_Z12abortHandleri+0x36)[0x7442d6]
/lib/x86_64-linux-gnu/libpthread.so.0(+0x12890)[0x7f388c913890]
/lib/x86_64-linux-gnu/libc.so.6(gsignal+0xc7)[0x7f388b57ae97]
/lib/x86_64-linux-gnu/libc.so.6(abort+0x141)[0x7f388b57c801]
./build/X86/gem5.opt(_Z15__exit_epilogueiPKcS0_iS0_+0x1ec)[0x8f238c]
./build/X86/gem5.opt[0x83264c]
./build/X86/gem5.opt(_ZN18L1Cache_Controller6wakeupEv+0x276)[0x837866]
./build/X86/gem5.opt(_ZN10EventQueue10serviceOneEv+0xb1)[0x73a671]
./build/X86/gem5.opt(_Z9doSimLoopP10EventQueue+0x38)[0x764eb8]
./build/X86/gem5.opt(_Z8simulatem+0x1fb)[0x76543b]
./build/X86/gem5.opt(_ZN10RubySystem12memWritebackEv+0x17a)[0x899bea]
./build/X86/gem5.opt[0xf4182b]
/usr/lib/x86_64-linux-gnu/libpython2.7.so.1.0(PyEval_EvalFrameEx+0x8010)[0x7f388cbcf1d0]
/usr/lib/x86_64-linux-gnu/libpython2.7.so.1.0(PyEval_EvalFrameEx+0x8b5b)[0x7f388cbcfd1b]
/usr/lib/x86_64-linux-gnu/libpython2.7.so.1.0(PyEval_EvalFrameEx+0x8b5b)[0x7f388cbcfd1b]
/usr/lib/x86_64-linux-gnu/libpython2.7.so.1.0(PyEval_EvalFrameEx+0x8b5b)[0x7f388cbcfd1b]
/usr/lib/x86_64-linux-gnu/libpython2.7.so.1.0(PyEval_EvalFrameEx+0x8b5b)[0x7f388cbcfd1b]
/usr/lib/x86_64-linux-gnu/libpython2.7.so.1.0(PyEval_EvalFrameEx+0x8b5b)[0x7f388cbcfd1b]
/usr/lib/x86_64-linux-gnu/libpython2.7.so.1.0(PyEval_EvalCodeEx+0x7d8)[0x7f388ccff278]
/usr/lib/x86_64-linux-gnu/libpython2.7.so.1.0(PyEval_EvalCode+0x19)[0x7f388cbc7029]
/usr/lib/x86_64-linux-gnu/libpython2.7.so.1.0(PyEval_EvalFrameEx+0x6ac0)[0x7f388cbcdc80]
/usr/lib/x86_64-linux-gnu/libpython2.7.so.1.0(PyEval_EvalCodeEx+0x7d8)[0x7f388ccff278]
/usr/lib/x86_64-linux-gnu/libpython2.7.so.1.0(PyEval_EvalFrameEx+0x5bf6)[0x7f388cbccdb6]
/usr/lib/x86_64-linux-gnu/libpython2.7.so.1.0(PyEval_EvalCodeEx+0x7d8)[0x7f388ccff278]
/usr/lib/x86_64-linux-gnu/libpython2.7.so.1.0(PyEval_EvalCode+0x19)[0x7f388cbc7029]
/usr/lib/x86_64-linux-gnu/libpython2.7.so.1.0(PyRun_StringFlags+0x76)[0x7f388cc6a546]
./build/X86/gem5.opt(_Z6m5MainiPPc+0x5f)[0x7428ef]
./build/X86/gem5.opt(main+0x33)[0x70b8c3]
/lib/x86_64-linux-gnu/libc.so.6(__libc_start_main+0xe7)[0x7f388b55db97]
./build/X86/gem5.opt(_start+0x2a)[0x72fbda]
--- END LIBC BACKTRACE ---
Abandon (core dumped)
```

-----------------------------------------------------------------
## Attempt 2 (using paper parameters but with 4 cpus instead 8 and cpu-type=timing):

rachid@ubuntu:~/Documents/gem5-e1$ ```./build/X86/gem5.opt configs/example/fs.py --disk-image=/home/rachid/gem5/full_system_images/disks/linux-x86.img --kernel=/home/rachid/gem5/full_system_images/binaries/x86_64-vmlinux-2.6.22.9.smp --cpu-type=timing --mem-size=512MB --cpu-clock=2GHz --ruby --caches --l2cache --num-cpus=4 --l1d_size=32kB --l1i_size=32kB --cacheline_size=64 --l1i_assoc=4 --l1d_assoc=4 --num-l2caches=8 --l2_size=128kB --l2_assoc=4 --topology=Mesh --mesh-rows=2 --num-dirs=8 --garnet-network=fixed```
  ### Telnet Interface:
  
(none) / #``` m5 checkpoint```

m5 checkpoint

Connection closed by foreign host.
  ### Gem5 terminal:
  ```console
**** REAL SIMULATION ****
info: Entering event queue @ 0.  Starting simulation...
warn: Replacement policy updates recently became the responsibility of SLICC state machines. Make sure to setMRU() near callbacks in .sm files!
warn: Don't know what interrupt to clear for console.
4574154500: system.pc.com_1.terminal: attach terminal 0
warn: x86 cpuid: unknown family 0x8086
warn: instruction 'wbinvd' unimplemented
warn: instruction 'wbinvd' unimplemented
warn: x86 cpuid: unknown family 0x8086
warn: x86 cpuid: unknown family 0x8086
warn: x86 cpuid: unknown family 0x8086
hack: Assuming logical destinations are 1 << id.
warn: Tried to clear PCI interrupt 14
warn: Unknown mouse command 0xe1.
info: Entering event queue @ 14448885961000.  Starting simulation...
info: Entering event queue @ 14448886216000.  Starting simulation...
panic: Runtime Error at MI_example-cache.sm:127: Invalid RubyRequestType.
 @ tick 14448886216500
[mandatory_request_type_to_event:build/X86/mem/protocol/L1Cache_Controller.cc, line 846]
Memory Usage: 1771096 KBytes
Program aborted at tick 14448886216500
--- BEGIN LIBC BACKTRACE ---
./build/X86/gem5.opt(_Z15print_backtracev+0x15)[0x72fd85]
./build/X86/gem5.opt(_Z12abortHandleri+0x36)[0x7442d6]
/lib/x86_64-linux-gnu/libpthread.so.0(+0x12890)[0x7f95b9f50890]
/lib/x86_64-linux-gnu/libc.so.6(gsignal+0xc7)[0x7f95b8bb7e97]
/lib/x86_64-linux-gnu/libc.so.6(abort+0x141)[0x7f95b8bb9801]
./build/X86/gem5.opt(_Z15__exit_epilogueiPKcS0_iS0_+0x1ec)[0x8f238c]
./build/X86/gem5.opt[0x83264c]
./build/X86/gem5.opt(_ZN18L1Cache_Controller6wakeupEv+0x276)[0x837866]
./build/X86/gem5.opt(_ZN10EventQueue10serviceOneEv+0xb1)[0x73a671]
./build/X86/gem5.opt(_Z9doSimLoopP10EventQueue+0x38)[0x764eb8]
./build/X86/gem5.opt(_Z8simulatem+0x1fb)[0x76543b]
./build/X86/gem5.opt(_ZN10RubySystem12memWritebackEv+0x17a)[0x899bea]
./build/X86/gem5.opt[0xf4182b]
/usr/lib/x86_64-linux-gnu/libpython2.7.so.1.0(PyEval_EvalFrameEx+0x8010)[0x7f95ba20c1d0]
/usr/lib/x86_64-linux-gnu/libpython2.7.so.1.0(PyEval_EvalFrameEx+0x8b5b)[0x7f95ba20cd1b]
/usr/lib/x86_64-linux-gnu/libpython2.7.so.1.0(PyEval_EvalFrameEx+0x8b5b)[0x7f95ba20cd1b]
/usr/lib/x86_64-linux-gnu/libpython2.7.so.1.0(PyEval_EvalFrameEx+0x8b5b)[0x7f95ba20cd1b]
/usr/lib/x86_64-linux-gnu/libpython2.7.so.1.0(PyEval_EvalFrameEx+0x8b5b)[0x7f95ba20cd1b]
/usr/lib/x86_64-linux-gnu/libpython2.7.so.1.0(PyEval_EvalFrameEx+0x8b5b)[0x7f95ba20cd1b]
/usr/lib/x86_64-linux-gnu/libpython2.7.so.1.0(PyEval_EvalCodeEx+0x7d8)[0x7f95ba33c278]
/usr/lib/x86_64-linux-gnu/libpython2.7.so.1.0(PyEval_EvalCode+0x19)[0x7f95ba204029]
/usr/lib/x86_64-linux-gnu/libpython2.7.so.1.0(PyEval_EvalFrameEx+0x6ac0)[0x7f95ba20ac80]
/usr/lib/x86_64-linux-gnu/libpython2.7.so.1.0(PyEval_EvalCodeEx+0x7d8)[0x7f95ba33c278]
/usr/lib/x86_64-linux-gnu/libpython2.7.so.1.0(PyEval_EvalFrameEx+0x5bf6)[0x7f95ba209db6]
/usr/lib/x86_64-linux-gnu/libpython2.7.so.1.0(PyEval_EvalCodeEx+0x7d8)[0x7f95ba33c278]
/usr/lib/x86_64-linux-gnu/libpython2.7.so.1.0(PyEval_EvalCode+0x19)[0x7f95ba204029]
/usr/lib/x86_64-linux-gnu/libpython2.7.so.1.0(PyRun_StringFlags+0x76)[0x7f95ba2a7546]
./build/X86/gem5.opt(_Z6m5MainiPPc+0x5f)[0x7428ef]
./build/X86/gem5.opt(main+0x33)[0x70b8c3]
/lib/x86_64-linux-gnu/libc.so.6(__libc_start_main+0xe7)[0x7f95b8b9ab97]
./build/X86/gem5.opt(_start+0x2a)[0x72fbda]
--- END LIBC BACKTRACE ---
Abandon (core dumped)
```

-----------------------------------------------------------
## Attempt 3 (only with cpu-type=timing as parameter):
 
rachid@ubuntu:~/Documents/gem5-e1$ ```./build/X86/gem5.opt configs/example/fs.py --disk-image=/home/rachid/gem5/full_system_images/disks/linux-x86.img --kernel=/home/rachid/gem5/full_system_images/binaries/x86_64-vmlinux-2.6.22.9.smp --cpu-type=timing``` 
   
   ### Telnet interface:
    
(none) / # ```m5 checkpoint```

m5 checkpoint

(none) / # 
    
   ### Gem5 terminal:
    
```console
**** REAL SIMULATION ****
info: Entering event queue @ 0.  Starting simulation...
warn: Don't know what interrupt to clear for console.
138271279000: system.pc.com_1.terminal: attach terminal 0
warn: x86 cpuid: unknown family 0x8086
warn: instruction 'wbinvd' unimplemented
warn: Tried to clear PCI interrupt 14
warn: Unknown mouse command 0xe1.
info: Entering event queue @ 123532433773000.  Starting simulation...
Writing checkpoint
```

   
# Restore checkpoint with cpu-type=detailed:
## Using paper parameters:
rachid@ubuntu:~/Documents/gem5-e1$ ``` ./build/X86/gem5.opt configs/example/fs.py -r 1  --disk-image=/home/rachid/gem5/full_system_images/disks/linux-x86.img --kernel=/home/rachid/gem5/full_system_images/binaries/x86_64-vmlinux-2.6.22.9.smp --cpu-type=detailed --mem-size=512MB --cpu-clock=2GHz --ruby --caches --l2cache --num-cpus=4 --l1d_size=32kB --l1i_size=32kB --cacheline_size=64 --l1i_assoc=4 --l1d_assoc=4 --num-l2caches=8 --l2_size=128kB --l2_assoc=4 --topology=Mesh --mesh-rows=2 --num-dirs=8 --garnet-network=fixed```

### Gem5 terminal:
```console
gem5 Simulator System.  http://gem5.org
gem5 is copyrighted software; use the --copyright option for details.

gem5 compiled Nov 30 2018 02:16:46
gem5 started Dec 11 2018 06:02:19
gem5 executing on ubuntu, pid 10727
command line: ./build/X86/gem5.opt configs/example/fs.py -r 1 --disk-image=/home/rachid/gem5/full_system_images/disks/linux-x86.img --kernel=/home/rachid/gem5/full_system_images/binaries/x86_64-vmlinux-2.6.22.9.smp --cpu-type=detailed --mem-size=512MB --cpu-clock=2GHz --ruby --caches --l2cache --num-cpus=4 --l1d_size=32kB --l1i_size=32kB --cacheline_size=64 --l1i_assoc=4 --l1d_assoc=4 --num-l2caches=8 --l2_size=128kB --l2_assoc=4 --topology=Mesh --mesh-rows=2 --num-dirs=8 --garnet-network=fixed

warn: add_child('cls'): child 'credit_links0 credit_links1' already has parent
warn: add_child('cls'): child 'credit_links0 credit_links1' already has parent
warn: add_child('cls'): child 'credit_links0 credit_links1' already has parent
warn: add_child('cls'): child 'credit_links0 credit_links1' already has parent
warn: add_child('cls'): child 'credit_links0 credit_links1' already has parent
warn: add_child('cls'): child 'credit_links0 credit_links1' already has parent
warn: add_child('cls'): child 'credit_links0 credit_links1' already has parent
warn: add_child('cls'): child 'credit_links0 credit_links1' already has parent
warn: add_child('cls'): child 'credit_links0 credit_links1' already has parent
warn: add_child('cls'): child 'credit_links0 credit_links1' already has parent
warn: add_child('cls'): child 'credit_links0 credit_links1' already has parent
warn: add_child('cls'): child 'credit_links0 credit_links1' already has parent
warn: add_child('cls'): child 'credit_links0 credit_links1' already has parent
warn: add_child('cls'): child 'credit_links0 credit_links1' already has parent
warn: add_child('cls'): child 'credit_links0 credit_links1' already has parent
warn: add_child('cls'): child 'credit_links0 credit_links1' already has parent
warn: add_child('cls'): child 'credit_links0 credit_links1' already has parent
warn: add_child('cls'): child 'credit_links0 credit_links1' already has parent
Global frequency set at 1000000000000 ticks per second
warn: DRAM device capacity (8192 Mbytes) does not match the address range assigned (64 Mbytes)
warn: DRAM device capacity (8192 Mbytes) does not match the address range assigned (64 Mbytes)
warn: DRAM device capacity (8192 Mbytes) does not match the address range assigned (64 Mbytes)
warn: DRAM device capacity (8192 Mbytes) does not match the address range assigned (64 Mbytes)
warn: DRAM device capacity (8192 Mbytes) does not match the address range assigned (64 Mbytes)
warn: DRAM device capacity (8192 Mbytes) does not match the address range assigned (64 Mbytes)
warn: DRAM device capacity (8192 Mbytes) does not match the address range assigned (64 Mbytes)
warn: DRAM device capacity (8192 Mbytes) does not match the address range assigned (64 Mbytes)
info: kernel located at: /home/rachid/gem5/full_system_images/binaries/x86_64-vmlinux-2.6.22.9.smp
Listening for com_1 connection on port 3456
      0: rtc: Real-time clock set to Sun Jan  1 00:00:00 2012
0: system.remote_gdb.listener: listening for remote gdb #0 on port 7000
0: system.remote_gdb.listener: listening for remote gdb #1 on port 7001
0: system.remote_gdb.listener: listening for remote gdb #2 on port 7002
0: system.remote_gdb.listener: listening for remote gdb #3 on port 7003
warn: Reading current count from inactive timer.
Switch at curTick count:10000
info: Entering event queue @ 123532433950500.  Starting simulation...
Switched CPUS @ tick 123532433960500
switching cpus
**** REAL SIMULATION ****
info: Entering event queue @ 123532433960500.  Starting simulation...
124523880531750: system.pc.com_1.terminal: attach terminal 0
```

### Telnet:
rachid@ubuntu:~/Documents/gem5-e1$ ```telnet localhost 3456```

```console
Trying 127.0.0.1...
Connected to localhost.
Escape character is '^]'.
==== m5 slave terminal: Terminal 0 ====
```

**It remains like this for long time without any progress.**

## Restore checkpoint with only cpu-type=detailed as parameter (and cache) from checkpoint taken at attempt 3 (with only cpu-type=timing parameter):
rachid@ubuntu:~/Documents/gem5-e1$ ```./build/X86/gem5.opt configs/example/fs.py -r 1  --disk-image=/home/rachid/gem5/full_system_images/disks/linux-x86.img --kernel=/home/rachid/gem5/full_system_images/binaries/x86_64-vmlinux-2.6.22.9.smp --cpu-type=detailed --caches```

### Gem5 terminal:

```console:
gem5 Simulator System.  http://gem5.org
gem5 is copyrighted software; use the --copyright option for details.

gem5 compiled Nov 30 2018 02:16:46
gem5 started Dec 11 2018 06:55:08
gem5 executing on ubuntu, pid 11373
command line: ./build/X86/gem5.opt configs/example/fs.py -r 1 --disk-image=/home/rachid/gem5/full_system_images/disks/linux-x86.img --kernel=/home/rachid/gem5/full_system_images/binaries/x86_64-vmlinux-2.6.22.9.smp --cpu-type=detailed --caches

Global frequency set at 1000000000000 ticks per second
warn: DRAM device capacity (8192 Mbytes) does not match the address range assigned (512 Mbytes)
info: kernel located at: /home/rachid/gem5/full_system_images/binaries/x86_64-vmlinux-2.6.22.9.smp
Listening for com_1 connection on port 3456
      0: rtc: Real-time clock set to Sun Jan  1 00:00:00 2012
0: system.remote_gdb.listener: listening for remote gdb #0 on port 7000
warn: Reading current count from inactive timer.
Switch at curTick count:10000
info: Entering event queue @ 123532433950500.  Starting simulation...
Switched CPUS @ tick 123532433960500
switching cpus
info: Entering event queue @ 123532433960500.  Starting simulation...
**** REAL SIMULATION ****
info: Entering event queue @ 123532433961500.  Starting simulation...
warn: Don't know what interrupt to clear for console.
```

### Telnet:
```console
rachid@ubuntu:~/Documents/gem5-e1$ telnet localhost 3456
Trying 127.0.0.1...
Connected to localhost.
Escape character is '^]'.
==== m5 slave terminal: Terminal 0 ====
(none) / # 
(none) / # 
```
**It works Well**
