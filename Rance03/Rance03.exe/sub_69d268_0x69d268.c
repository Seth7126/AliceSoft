// 函数: sub_69d268
// 地址: 0x69d268
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t var_1c = 0xffff
int32_t var_20 = 0x133f
int32_t eax
int16_t x87control
int16_t x87control_1
eax, x87control_1 = sub_69f534(x87control, 0x133f, 0xffff)
long double x87_r7 = fconvert.t(arg2)
int32_t ecx_2 = zx.d(arg2:6.w) & 0x7ff0
int32_t var_3c_1
double var_34_1
int32_t var_2c_2
int64_t var_34

if (ecx_2.w != 0x7ff0)
    long double x87_r6_5 = float.t(0)
    x87_r6_5 - x87_r7
    int32_t eax_1
    eax_1.w = (x87_r6_5 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_5, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6_5 == x87_r7 ? 1 : 0) << 0xe | 0x3800
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (not(p_1))
    label_69d2d9:
        int32_t var_1c_3 = 0xffff
        sub_69f534(x87control_1, eax.w, 0xffff)
        return fconvert.t(arg2)
    
    int32_t var_24_1 = ecx_2
    var_24_1.q = fconvert.d(x87_r7)
    int32_t var_8
    long double st0_2 = sub_69eb1a(eax, var_24_1, &var_8)
    int32_t edx_1 = var_8
    long double x87_r7_12
    
    if (arg3 s>= 0)
        if (edx_1 s<= 0x7fffffff - arg3)
        label_69d35c:
            int32_t eax_5 = edx_1 + arg3
            
            if (eax_5 s> 0xa00)
                goto label_69d418
            
            if (eax_5 s> 0x400)
                int32_t var_20_4 = arg3
                int32_t var_24_2 = arg3
                var_24_2.q = fconvert.d(st0_2)
                int32_t var_1c_7 = eax
                var_24_2.q = fconvert.d(sub_69ebec(var_24_2, eax_5.w - 0x600, arg1))
                var_2c_2 = (fconvert.d(fconvert.t(fconvert.d(float.t(arg3))))).d
                goto label_69d43f
            
            if (eax_5 s< 0xfffff603)
                goto label_69d3a9
            
            if (eax_5 s< 0xfffffc03)
                int32_t var_20_5 = arg3
                int32_t var_24_3 = arg3
                var_24_3.q = fconvert.d(st0_2)
                int32_t var_1c_10 = eax
                var_24_3.q = fconvert.d(sub_69ebec(var_24_3, eax_5.w + 0x600, arg1))
                x87_r7_12 = fconvert.t(fconvert.d(float.t(arg3)))
                goto label_69d3ba
            
            int32_t var_20_6 = arg3
            int32_t var_24_4 = arg3
            var_24_4.q = fconvert.d(st0_2)
            int64_t var_2c
            var_2c:4.d = 0xffff
            var_2c.d = eax
            arg2 = fconvert.d(sub_69ebec(var_24_4, eax_5.w, arg1))
            sub_69f534(x87control_1, var_2c)
            return fconvert.t(arg2)
        
    label_69d418:
        var_24_1.q = fconvert.d(st0_2)
        var_24_1.q =
            fconvert.d(__copysign(fconvert.d(fconvert.t(data_74a428)), var_24_1, ecx_2, eax))
        var_2c_2 = (fconvert.d(fconvert.t(fconvert.d(float.t(arg3))))).d
        var_34:4.d = arg3
        var_34.d = arg3
    label_69d43f:
        var_34_1 = fconvert.d(fconvert.t(arg2))
        int32_t var_38_3 = 0x19
        var_3c_1 = 0x11
    else
        if (edx_1 s>= 0x80000000 - arg3)
            goto label_69d35c
        
    label_69d3a9:
        int32_t var_1c_8 = eax
        var_24_1.q = fconvert.d(st0_2 * float.t(0))
        x87_r7_12 = fconvert.t(fconvert.d(float.t(arg3)))
    label_69d3ba:
        var_2c_2 = (fconvert.d(x87_r7_12)).d
        var_34_1 = fconvert.d(fconvert.t(arg2))
        int32_t var_38_2 = 0x19
        var_3c_1 = 0x12
else
    int32_t var_20_1 = ecx_2
    var_20_1.q = fconvert.d(x87_r7)
    int32_t eax_2 = __sptype(var_20_1, ecx_2)
    int32_t var_24
    
    if (eax_2 s> 0)
        if (eax_2 s<= 2)
            goto label_69d2d9
        
        if (eax_2 != 3)
            goto label_69d2ea
        
        int32_t var_1c_2 = eax
        var_24.q = fconvert.d(fconvert.t(fconvert.d(float.t(arg3))))
        double var_2c_1 = fconvert.d(fconvert.t(arg2))
        var_34:4.d = 0x19
        return sub_69f07a()
    
label_69d2ea:
    long double x87_r7_5 = fconvert.t(arg2)
    int32_t var_1c_4 = eax
    var_24.q = fconvert.d(fconvert.t(1.0) + x87_r7_5)
    var_2c_2 = (fconvert.d(fconvert.t(fconvert.d(float.t(arg3))))).d
    var_34_1 = fconvert.d(x87_r7_5)
    int32_t var_38_1 = 0x19
    var_3c_1 = 8
return __except2(var_3c_1, 0x19, var_34_1, var_2c_2)
