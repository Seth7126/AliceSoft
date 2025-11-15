// 函数: sub_703489
// 地址: 0x703489
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

arg2[-7] = arg1
arg2[-1] = 0xfffffffe
TEB* fsbase
fsbase->NtTib.ExceptionList = arg2[-4]
*arg2
*arg2 = &data_703498
*arg2
