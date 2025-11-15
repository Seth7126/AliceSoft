// 函数: __fload
// 地址: 0x71eaf9
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx
ebx.w = arg2

if ((arg2 & 0x7ff0) != 0x7ff0)
    return fconvert.t(arg1)

ebx.w |= 0x7fff
int16_t var_6_1 = ebx.w
int32_t ebx_1 = arg1.d
int32_t var_a_1 = arg1:4.d << 0xb | ebx_1 u>> 0xffffffeb
return ebx_1.t
