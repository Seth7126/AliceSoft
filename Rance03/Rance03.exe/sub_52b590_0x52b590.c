// 函数: sub_52b590
// 地址: 0x52b590
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &sealengine::CBoneCollisionShape::`vftable'
int32_t eax = arg1[0xb]

if (eax != 0)
    j__free(eax)
    arg1[0xb] = 0
    arg1[0xc] = 0
    arg1[0xd] = 0

arg1[1] = &sealengine::CCollisionShape::`vftable'

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
