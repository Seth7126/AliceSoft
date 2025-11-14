// 函数: sub_599fc0
// 地址: 0x599fc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = arg1[4]
*arg1 = &sealengine::CSphere::`vftable'{for `sealengine::CDrawInstance'}

if (ecx != 0)
    (*(*ecx + 4))()
    arg1[4] = 0

int32_t* ecx_1 = arg1[3]

if (ecx_1 != 0)
    (*(*ecx_1 + 4))()
    arg1[3] = 0

arg1[5].b = 0

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
