// 函数: sub_64ee80
// 地址: 0x64ee80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &dplogviewer::CSurface::`vftable'{for `ISurface'}
arg1[0xa] = arg1[9]
int32_t eax_1 = arg1[0xc]
arg1[0xd] = eax_1
arg1[0xf] = 0
arg1[0x10] = 0
__builtin_memset(&arg1[2], 0, 0x14)
arg1[8].w = 0

if (eax_1 != 0)
    j__free(eax_1)
    arg1[0xc] = 0
    arg1[0xd] = 0
    arg1[0xe] = 0

int32_t result = arg1[9]

if (result != 0)
    result = j__free(result)
    arg1[9] = 0
    arg1[0xa] = 0
    arg1[0xb] = 0

return result
