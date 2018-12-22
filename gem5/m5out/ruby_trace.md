
Write Seq:
```console    
    241: global: Seq write: index 0 data 0x7b check 0x7b address 0x57ec
    241: global: initiating action - successful
    241: global: status before action update: Idle
    241: global: Check 22508, State=Action_Pending
    241: global: status after action update: Action_Pending
    250: system.cpu: completed request for proc: 3 addr: 0x429, size: 1, data: 77 
    250: global: Looking for check by address: 1065
    250: global: RubyTester Callback
    250: global: [0x428, value: 76, status: Action_Pending, initiating node: 1, store_count: 1]
    250: global: Action callback write value: 77, currently 77
    250: global: Check 1064, State=Idle store_count: 2
    250: global: Action callback return data now 77
    250: global: proc: 3, Address: 0x400
    250: global: Callback done
    250: global: [0x428, value: 76, status: Idle, initiating node: 1, store_count: 2]
    251: global: initiating
    251: global: [0x414, value: 149, status: Idle, initiating node: 3, store_count: 0]
    251: global: initiating Action
    251: global: Seq write: index 1 data 0x95 check 0x95 address 0x414
    251: global: initiating action - successful
    251: global: status before action update: Idle
    251: global: Check 1044, State=Action_Pending
    251: global: status after action update: Action_Pending
    253: system.cpu: completed request for proc: 2 addr: 0x8e8, size: 1, data: 177 
    253: global: Looking for check by address: 2280
    253: global: RubyTester Callback
    253: global: [0x8e8, value: 177, status: Action_Pending, initiating node: 3, store_count: 0]
    253: global: Action callback write value: 177, currently 177
    253: global: Check 2280, State=Idle store_count: 1
    253: global: Action callback return data now 177
    253: global: proc: 2, Address: 0x8c0
    253: global: Callback done
    253: global: [0x8e8, value: 177, status: Idle, initiating node: 3, store_count: 1]
    261: global: initiating
    261: global: [0x34ec, value: 131, status: Idle, initiating node: 3, store_count: 0]
    261: global: initiating Action
    261: global: Seq write: index 1 data 0x83 check 0x83 address 0x34ec
```
Seq read:
```console
   2531: global: Seq read: index 1 data 0x18 address 0x46ec
   2531: global: initiating check - successful
   2531: global: status before check update: Ready
   2531: global: Check 18156, State=Check_Pending
   2531: global: status after check update: Check_Pending
   2533: system.cpu: completed request for proc: 1 addr: 0x9ee, size: 1, data: 150 
   2533: global: Looking for check by address: 2542
   2533: global: RubyTester Callback
   2533: global: [0x9ec, value: 148, status: Action_Pending, initiating node: 0, store_count: 2]
   2533: global: Action callback write value: 150, currently 150
   2533: global: Check 2540, State=Idle store_count: 3
   2533: global: Action callback return data now 150
   
   
   4261: global: Initiating Check
   4261: global: Seq read: index 2 data 0x10 address 0x36e8
   4261: global: initiating check - successful
   4261: global: status before check update: Ready
   4261: global: Check 14056, State=Check_Pending
   4261: global: status after check update: Check_Pending
   ```
