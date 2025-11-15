// 函数: sub_542470
// 地址: 0x542470
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_4 = 0
char* var_8 = arg3
void* eax = sub_4f4e40(data_7fcba4 + 0x124, arg2)

if (eax == 0)
    *(arg3 + 0x10) = eax
    *(arg3 + 0x14) = 0xf
    *arg3 = eax.b
    return arg3

void* edi = *(eax + 0x44)
sub_555e00(edi, 0x13, arg4)
void** eax_3 = *(edi + (arg4 << 2) + 0x7c) + 0xd8
*(arg3 + 0x14) = 0xf
*(arg3 + 0x10) = 0
*arg3 = 0
sub_403590(arg3, eax_3, 0, 0xffffffff)
return arg3
