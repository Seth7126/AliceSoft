// 函数: sub_544a70
// 地址: 0x544a70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_4 = 0
char* var_8 = arg3
void* eax = sub_4f4e40(data_7fcba4 + 0x124, arg2)

if (eax != 0)
    void* edi = *(eax + 0x44)
    sub_555e00(edi, 0x1a, arg5)
    sub_403360(arg3, sub_4dcee0(*(edi + (arg5 << 2) + 0x7c) + 0x40, arg4))
    return arg3

*(arg3 + 0x10) = eax
*(arg3 + 0x14) = 0xf
*arg3 = eax.b
return arg3
