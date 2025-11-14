// 函数: sub_6a62f9
// 地址: 0x6a62f9
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

arg2[-7] = arg1
arg2[-1] = 0xfffffffe
TEB* fsbase
fsbase->NtTib.ExceptionList = arg2[-4]
*arg2
*arg2 = &data_6a6308
*arg2
