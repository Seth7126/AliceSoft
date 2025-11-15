// 函数: __EH_epilog3_catch_GS
// 地址: 0x6e8cac
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

@__security_check_cookie@4(arg1[-5] ^ arg1)
TEB* fsbase
fsbase->NtTib.ExceptionList = arg1[-3]
*arg1
*arg1 = __return_addr
