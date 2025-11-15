// 函数: sub_4e2050
// 地址: 0x4e2050
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* eax = arg2
int32_t var_10 = 0
bool cond:0 = eax[5] u< 0x10
uint32_t var_14 = 0

if (not(cond:0))
    eax = *eax

sub_44c5f0(eax, &var_10, &var_14)
int32_t var_8 = 0
int32_t var_c = 0
sub_4e1b90(arg1, var_10, var_14, arg3, arg4, &var_8, &var_c)
void* eax_1 = sub_4efcc0(*(arg1 + 0xa0))
void* esi = *(eax_1 + 0x44)
sub_555e00(esi, 0x18, arg5)
sub_54b920(*(esi + (arg5 << 2) + 0x7c), arg2)
sub_518280(eax_1, var_8, var_c, arg3, arg4, *(arg1 + 0x200), *(arg1 + 0x204), arg5)
void* esi_1 = *(eax_1 + 0x44)
sub_555e00(esi_1, 0x18, arg5)
return sub_54c110(*(esi_1 + (arg5 << 2) + 0x7c))
