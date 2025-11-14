// 函数: sub_5e96b0
// 地址: 0x5e96b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &sys40::CSetCallback::`vftable'{for `ISetCallback'}
int32_t eax = arg1[1]

if (eax != 0)
    j__free(eax)
    arg1[1] = 0
    arg1[2] = 0
    arg1[3] = 0

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
