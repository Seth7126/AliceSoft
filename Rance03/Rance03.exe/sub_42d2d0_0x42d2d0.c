// 函数: sub_42d2d0
// 地址: 0x42d2d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
char* eax_1 = (*(**(arg1 + 0xc) + 4))(arg3)

if (eax_1 != 0)
    sub_401f60(arg2, eax_1)
    return arg2

char* esi = arg2
*(esi + 0x14) = 0xf
*(esi + 0x10) = eax_1
*esi = eax_1.b
sub_401ff0(esi, arg4, eax_1, 0xffffffff)
return esi
