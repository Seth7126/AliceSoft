// 函数: sub_635fe0
// 地址: 0x635fe0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int16_t* ecx = arg8
*arg3 = arg5

if ((ecx & 0x100) != 0)
    *arg3 = *sub_637550(arg5, arg2, &arg8, arg4, arg5, arg6, arg7, arg2)
    return arg3

int16_t** ecx_2 = &arg8

if ((ecx & 0x800) == 0)
    int32_t var_8_2 = arg5
    *arg3 = *sub_637630(arg5, arg2, ecx_2, arg4, arg5, arg6, arg7)
    return arg3

void* var_8_1 = arg2
*arg3 = *sub_6375d0(arg5, arg2, ecx_2, arg4, arg5, arg6, arg7)
return arg3
