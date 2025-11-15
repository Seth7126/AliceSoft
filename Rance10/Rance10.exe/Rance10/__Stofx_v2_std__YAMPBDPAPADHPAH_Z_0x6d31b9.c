// 函数: ?_Stofx_v2@std@@YAMPBDPAPADHPAH@Z
// 地址: 0x6d31b9
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
int32_t* eax = __errno()
int32_t esi = *eax
*eax = 0
long double st0 = __Cnd_wait(arg2, arg3)
int32_t* result = arg5
*result = *eax
*eax = esi

if (arg4 != 0)
    int32_t mxcsr
    int16_t x87control
    result = sub_70dca0(mxcsr, x87control, fconvert.t(fconvert.s(float.t(arg4))), fconvert.t(10.0))
    float var_8_2 = fconvert.s(fconvert.t(fconvert.s(arg1)) * fconvert.t(fconvert.s(st0)))

unimplemented  {fld st0, dword [ebp-0x4]}
return result
