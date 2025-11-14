// 函数: sub_543680
// 地址: 0x543680
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ecx = *(arg1 + 0x1c0)
int32_t var_4 = 0

if (ecx != 0)
    sub_582a80(ecx + 0x30, arg2)
    return arg2

char* eax = arg2
*(eax + 0x14) = 0xf
*(eax + 0x10) = ecx
*eax = ecx.b
return eax
