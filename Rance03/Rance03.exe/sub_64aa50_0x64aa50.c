// 函数: sub_64aa50
// 地址: 0x64aa50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &encodecg::CBMPInfo::`vftable'
int32_t eax = arg1[1]

if (eax != 0)
    j__free(eax)
    arg1[1] = 0
    arg1[2] = 0
    arg1[3] = 0

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
