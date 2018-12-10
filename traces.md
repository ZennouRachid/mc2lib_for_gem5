# Getting elastic traces from Gem5.

We want to get traces from gem5 simulated executions. Here we collect some experiments.


## HowTo

In order to get traces from executions, we need to pass the appropriate flags to gem5:

   1. Using System emulation mode (SE):
   
```./build/X86/gem5.opt --debug-flags=MMU --debug-file=mmu_trace.log ./configs/example/se.py --cpu-type=TimingSimpleCPU --caches --l2cache -c tests/test-progs/hello/bin/x86/linux/hello ```

   2. Using the full system mode (FS):

```./build/X86/gem5.opt --debug-flags=TLB --debug-file=tlb_trace.log ./configs/example/fs.py –cpu-type=TimingSimpleCPU --caches --l2cache```

## Examples

### Ruby Random Memory tests:

We run the ruby random test script (configs/example/ruby_random_test.py) with the Flag MemoryAccess:

``` ./build/X86/gem5.opt --debug-flags=MemoryAccess --debug-file=ruby_random_test.trace ./configs/example/ruby_random_test.py –num-cpu=4 --caches --ruby ```

Here is a snippet of the (much larger) output:

     54: global: Read from .ruby.dir_cntrl0 of size 64 on address 0x3fc0 C
     54: global: 00000000  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00                   
     54: global: 00000010  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00                   
     54: global: 00000020  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00                   
     54: global: 00000030  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00                   
    184: global: Read from .ruby.dir_cntrl0 of size 64 on address 0x58c0 C
    184: global: 00000000  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00                   
    184: global: 00000010  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00                   
    184: global: 00000020  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00                   
    184: global: 00000030  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00                   
    200: global: Read from .ruby.dir_cntrl0 of size 64 on address 0x34c0 C
    200: global: 00000000  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00                   
    200: global: 00000010  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00                   
    200: global: 00000020  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00                   
    200: global: 00000030  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00                   
    205: global: Read from .ruby.dir_cntrl0 of size 64 on address 0x33c0 C
    205: global: 00000000  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00                   
    205: global: 00000010  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00                   
    205: global: 00000020  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00                   
    205: global: 00000030  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00                   
    422: system.mem_ctrls: access wrote 64 bytes to address 3fc0
    422: global: Write from .ruby.dir_cntrl0 of size 64 on address 0x3fc0 C
    422: global: 00000000  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00                   
    422: global: 00000010  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00                   
    422: global: 00000020  00 00 00 00 00 00 00 00  00 00 00 00 31 00 00 00               1   
    422: global: 00000030  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00                   
    451: global: Read from .ruby.dir_cntrl0 of size 64 on address 0x400 C
    451: global: 00000000  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00                   
    451: global: 00000010  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00                   
    451: global: 00000020  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00                   
    451: global: 00000030  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00                   
    456: global: Read from .ruby.dir_cntrl0 of size 64 on address 0x57c0 C
    456: global: 00000000  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00                   
    456: global: 00000010  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00                   
    456: global: 00000020  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00                   
    456: global: 00000030  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00    
