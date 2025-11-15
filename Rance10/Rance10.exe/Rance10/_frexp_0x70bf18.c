// 函数: _frexp
// 地址: 0x70bf18
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
int32_t edi
int32_t var_10 = edi

if (arg2 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return float.t(0)

int32_t eax_1
int16_t x87control
int16_t x87control_1
eax_1, x87control_1 = __ctrlfp(x87control, 0x133f, 0xffff)
long double x87_r7_1 = fconvert.t(arg1)
int32_t ecx_2 = zx.d(arg1:6.w) & 0x7ff0
int32_t var_34_1
int32_t var_2c
int32_t var_24

if (ecx_2.w != 0x7ff0)
    long double x87_r6_3 = float.t(0)
    x87_r6_3 - x87_r7_1
    int32_t eax_2
    eax_2.w = (x87_r6_3 < x87_r7_1 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_3, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_3 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (p_1)
        goto label_70bff3
    
    int16_t var_20_3 = ecx_2.w
    
    if (sub_71830b((fconvert.d(x87_r7_1)).w) == 0)
        x87_r7_1 = fconvert.t(arg1)
    label_70bff3:
        int32_t var_20_4 = ecx_2
        int32_t var_24_1 = ecx_2
        var_24_1.q = fconvert.d(x87_r7_1)
        var_c.q = fconvert.d(__decomp(eax_1, var_24_1, arg2))
        __ctrlfp(x87control_1, eax_1.w, 0xffff)
        return fconvert.t(var_c.q)
    
    *arg2 = 0
    int32_t var_1c_4 = eax_1
    var_24.q = fconvert.d(fconvert.t(-0.0))
    var_2c.q = fconvert.d(fconvert.t(arg1))
    int32_t var_30_2 = 0x17
    var_34_1 = 0
else
    *arg2 = 0xffffffff
    int32_t var_20_1 = ecx_2
    var_20_1.q = fconvert.d(x87_r7_1)
    int32_t eax_3 = __sptype(var_20_1, ecx_2)
    
    if (eax_3 == 1 || eax_3 == 2 || eax_3 == 3)
        __ctrlfp(x87control_1, eax_1.w, 0xffff)
        return fconvert.t(arg1)
    
    long double x87_r7_2 = fconvert.t(arg1)
    int32_t var_1c_2 = eax_1
    var_24.q = fconvert.d(fconvert.t(1.0) + x87_r7_2)
    var_2c.q = fconvert.d(x87_r7_2)
    int32_t var_30_1 = 0x17
    var_34_1 = 8
return sub_71834f(var_34_1, 0x17, var_2c)
