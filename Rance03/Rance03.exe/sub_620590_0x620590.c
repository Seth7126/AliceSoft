// 函数: sub_620590
// 地址: 0x620590
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &surfacefactory::CSurface::`vftable'{for `ISurface'}
int32_t eax = arg1[0xa]

if (eax != 0)
    j__free(eax)
    arg1[0xa] = 0
    arg1[0xb] = 0
    arg1[0xc] = 0

int32_t* ecx = arg1[3]
arg1[2] = &thread::CCriticalSection::`vftable'

if (ecx != 0)
    (**ecx)(1)

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
