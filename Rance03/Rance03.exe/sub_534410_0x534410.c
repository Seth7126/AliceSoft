// 函数: sub_534410
// 地址: 0x534410
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &sealengine::CDrawInstanceList::`vftable'
int32_t eax = arg1[1]
arg1[2] = eax

if (eax != 0)
    j__free(eax)
    arg1[1] = 0
    arg1[2] = 0
    arg1[3] = 0

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
