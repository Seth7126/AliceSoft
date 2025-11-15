// 函数: _feholdexcept
// 地址: 0x721154
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = arg3
int32_t var_c = arg3
var_c = 0
int32_t var_8_1 = 0
_fegetenv(&var_c)
int32_t edx = var_c
arg4[1] = var_8_1
*arg4 = edx
int32_t edx_1 = edx | 0x1f
var_c = edx_1
int32_t eax_2
int32_t mxcsr_1
eax_2, mxcsr_1 = _fesetenv(&var_c, edx_1, arg4, &var_c)

if (eax_2 != 0)
    return 1

__clearfp(mxcsr_1)
return 0
