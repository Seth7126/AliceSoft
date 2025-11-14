// 函数: __SEH_epilog4
// 地址: 0x10004601
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

TEB* fsbase
fsbase->NtTib.ExceptionList = arg1[-4]
*arg1
*arg1 = __return_addr
