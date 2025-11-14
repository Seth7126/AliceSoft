// 函数: sub_619040
// 地址: 0x619040
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &graphengined3d11::CSurface::`vftable'{for `ISurface'}
int32_t eax = arg1[8]

if (eax != 0)
    j__free(eax)
    arg1[8] = 0
    arg1[9] = 0
    arg1[0xa] = 0

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
