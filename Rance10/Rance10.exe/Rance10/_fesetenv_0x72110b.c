// 函数: _fesetenv
// 地址: 0x72110b
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = arg3
int32_t var_c = arg3
var_c = 0
int32_t var_8_1 = 0
int32_t mxcsr
__setfpstatusword(__setfpcontrolword(mxcsr, *arg4), arg4[1])
_fegetenv(&var_c)

if (*arg4 == var_c && arg4[1] == var_8_1)
    return 0

return 1
