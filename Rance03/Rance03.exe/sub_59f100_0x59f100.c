// 函数: sub_59f100
// 地址: 0x59f100
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0x10) = &sealengine::CWriteVertex::`vftable'
int32_t eax = *(arg1 + 0x18)

if (eax != 0)
    j__free(eax)
    *(arg1 + 0x18) = 0
    *(arg1 + 0x1c) = 0
    *(arg1 + 0x20) = 0

return j__free(arg1)
