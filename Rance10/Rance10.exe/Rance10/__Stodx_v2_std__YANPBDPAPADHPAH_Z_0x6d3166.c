// 函数: ?_Stodx_v2@std@@YANPBDPAPADHPAH@Z
// 地址: 0x6d3166
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* eax = __errno()
int32_t esi = *eax
*eax = 0
int32_t* result = arg4
double var_14 = fconvert.d(__execvp(arg1, arg2))
*result = *eax
*eax = esi
int32_t mxcsr
int16_t x87control

if (arg3 != 0)
    result = sub_70dca0(mxcsr, x87control, fconvert.t(fconvert.d(float.t(arg3))), fconvert.t(10.0))
return result
