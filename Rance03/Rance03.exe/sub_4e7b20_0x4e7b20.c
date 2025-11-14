// 函数: sub_4e7b20
// 地址: 0x4e7b20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &partsengine::CPartsNumberManager::`vftable'
int32_t eax = arg1[4]
arg1[5] = eax

if (eax != 0)
    j__free(eax)
    arg1[4] = 0
    arg1[5] = 0
    arg1[6] = 0

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
