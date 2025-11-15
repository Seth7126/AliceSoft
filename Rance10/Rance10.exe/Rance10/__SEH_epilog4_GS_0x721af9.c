// 函数: __SEH_epilog4_GS
// 地址: 0x721af9
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

@__security_check_cookie@4(arg1[-7] ^ arg1)
TEB* fsbase
fsbase->NtTib.ExceptionList = arg1[-4]
*arg1
*arg1 = __return_addr
