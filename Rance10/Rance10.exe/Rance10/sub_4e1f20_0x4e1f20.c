// 函数: sub_4e1f20
// 地址: 0x4e1f20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg7 == 0 || arg3 s<= 0 || arg4 s<= 0)
    return 

int32_t var_c = 0
int32_t var_8 = 0
sub_4e1b90(arg1, arg3, arg4, arg2, arg5, &var_c, &var_8)
int32_t ebx_2
int32_t ebp_2

if (arg8 != 3 || arg6 == 0)
    ebx_2 = var_c
    ebp_2 = var_8
else
    ebx_2 = var_c + 1
    ebp_2 = var_8 + 1

void* eax_1 = sub_4efcc0(*(arg1 + 0xa0))
void* esi_1 = *(eax_1 + 0x44)
sub_555e00(esi_1, 0x18, arg8)
sub_54b7a0(*(esi_1 + (arg8 << 2) + 0x7c))
void* esi_2 = *(eax_1 + 0x44)
sub_555e00(esi_2, 0x18, arg8)
sub_54b880(*(esi_2 + (arg8 << 2) + 0x7c), arg3, arg4)
(**arg7)(*(eax_1 + 0x44), arg3, arg4, arg8)
sub_518280(eax_1, ebx_2, ebp_2, arg2, arg5, *(arg1 + 0x200), *(arg1 + 0x204), arg8)
void* esi_4 = *(eax_1 + 0x44)
sub_555e00(esi_4, 0x18, arg8)
sub_54c110(*(esi_4 + (arg8 << 2) + 0x7c))
