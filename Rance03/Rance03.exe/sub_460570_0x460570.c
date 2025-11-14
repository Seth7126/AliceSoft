// 函数: sub_460570
// 地址: 0x460570
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = arg2

if (esi s< 0xc)
    sub_64b530(0x6dcb58)
    return 0

if (*arg1 != 0x48 || arg1[1] != 0x45 || arg1[2] != 0x41 || arg1[3] != 0x44)
    arg2.b = 0
else
    arg2.b = 1

char eax

if (arg1[8] != 0x45 || arg1[9] != 0x58 || arg1[0xa] != 0x54 || arg1[0xb] != 0x46)
    eax = 0
else
    eax = 1

if (arg2.b != 0 && eax != 0)
    return sub_4602d0(arg1, esi) __tailcall

return sub_4604c0(arg1, esi) __tailcall
