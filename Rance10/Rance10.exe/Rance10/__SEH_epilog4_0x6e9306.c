// 函数: __SEH_epilog4
// 地址: 0x6e9306
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

TEB* fsbase
fsbase->NtTib.ExceptionList = arg1[-4]
*arg1
*arg1 = __return_addr
