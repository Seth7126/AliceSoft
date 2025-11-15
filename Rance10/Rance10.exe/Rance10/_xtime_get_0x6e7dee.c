// 函数: _xtime_get
// 地址: 0x6e7dee
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx

if (arg2 != 1 || arg1 == 0)
    return 0

int32_t ebx
int32_t var_18_1 = ebx
int32_t eax_1
uint32_t edx_1
eax_1, edx_1 = __Xtime_get_ticks(ecx)
int32_t var_1c_1 = ebx
uint32_t eax_2
int32_t ecx_1
int32_t edx_2
eax_2, ecx_1, edx_2 = __aulldvrm(eax_1, edx_1, 0x989680, 0)
int32_t var_8_1 = ebx
*arg1 = eax_2
arg1[1] = edx_2
arg1[2] = ecx_1 * 0x64
return arg2
