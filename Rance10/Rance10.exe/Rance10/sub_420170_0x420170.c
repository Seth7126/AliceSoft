// 函数: sub_420170
// 地址: 0x420170
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
char* eax_1 = (*(**(arg1 + 0xc) + 4))(arg3)

if (eax_1 != 0)
    sub_403360(arg2, eax_1)
    return arg2

char* esi = arg2
*(esi + 0x14) = 0xf
*(esi + 0x10) = eax_1
*esi = eax_1.b
sub_403590(esi, arg4, eax_1, 0xffffffff)
return esi
