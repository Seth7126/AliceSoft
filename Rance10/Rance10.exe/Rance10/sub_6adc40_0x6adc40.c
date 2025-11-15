// 函数: sub_6adc40
// 地址: 0x6adc40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_54
int32_t eax_1 = __security_cookie ^ &var_54
char eax_2 = (*(arg3 + 0x74)).b

if ((eax_2 & 1) == 0)
    sub_6a7750(arg3, "missing IHDR")
    noreturn

uint32_t eax_3

if ((eax_2 & 6) != 0)
    sub_6ace40(arg3, arg4)
    eax_3 = sub_6a77d0(arg3, "out of place")
else if (arg4 == 0x20)
    int32_t eax_4 = *(arg3 + 0x5c)
    
    if (eax_4 == 0)
        sub_6a7500(arg3, "Call to NULL read function")
        noreturn
    
    char var_30
    sub_6a4030(eax_4(arg3, &var_30, 0x20), &var_30, arg3, 0x20)
    eax_3 = sub_6ace40(arg3, nullptr)
    
    if (eax_3 == 0)
        uint32_t esi_1 = 0xffffffff
        char var_2f
        char var_2e
        char var_2d
        uint32_t ecx_11 =
            (((((zx.d(var_30) << 8) + zx.d(var_2f)) << 8) + zx.d(var_2e)) << 8) + zx.d(var_2d)
        
        if (ecx_11 u<= 0x7fffffff)
            esi_1 = ecx_11
        
        int32_t var_29
        int16_t ecx_12 = var_29.w
        uint32_t var_38_1 = esi_1
        char var_2c
        char var_2b
        char var_2a
        uint32_t edx_9 =
            (((((zx.d(var_2c) << 8) + zx.d(var_2b)) << 8) + zx.d(var_2a)) << 8) + zx.d(ecx_12.b)
        uint32_t eax_12 = 0xffffffff
        
        if (edx_9 u<= 0x7fffffff)
            eax_12 = edx_9
        
        int32_t var_25
        int16_t ecx_13 = var_25.w
        uint32_t edx_16 = (((((zx.d(ecx_12:1.b) << 8) + zx.d(var_29:2.b)) << 8) + zx.d(var_29:3.b))
            << 8) + zx.d(ecx_13.b)
        uint32_t eax_16 = 0xffffffff
        
        if (edx_16 u<= 0x7fffffff)
            eax_16 = edx_16
        
        int32_t var_21
        int16_t ecx_14 = var_21.w
        uint32_t var_50 = eax_16
        uint32_t edx_23 = (((((zx.d(ecx_13:1.b) << 8) + zx.d(var_25:2.b)) << 8) + zx.d(var_25:3.b))
            << 8) + zx.d(ecx_14.b)
        uint32_t eax_20 = 0xffffffff
        
        if (edx_23 u<= 0x7fffffff)
            eax_20 = edx_23
        
        int32_t var_1d
        int16_t ecx_15 = var_1d.w
        uint32_t edx_30 = (((((zx.d(ecx_14:1.b) << 8) + zx.d(var_21:2.b)) << 8) + zx.d(var_21:3.b))
            << 8) + zx.d(ecx_15.b)
        uint32_t eax_24 = 0xffffffff
        
        if (edx_30 u<= 0x7fffffff)
            eax_24 = edx_30
        
        int32_t var_19
        int16_t ecx_16 = var_19.w
        uint32_t edx_37 = (((((zx.d(ecx_15:1.b) << 8) + zx.d(var_1d:2.b)) << 8) + zx.d(var_1d:3.b))
            << 8) + zx.d(ecx_16.b)
        uint32_t eax_28 = 0xffffffff
        
        if (edx_37 u<= 0x7fffffff)
            eax_28 = edx_37
        
        int32_t var_15
        int16_t ecx_17 = var_15.w
        uint32_t edx_44 = (((((zx.d(ecx_16:1.b) << 8) + zx.d(var_19:2.b)) << 8) + zx.d(var_19:3.b))
            << 8) + zx.d(ecx_17.b)
        uint32_t eax_32 = 0xffffffff
        
        if (edx_44 u<= 0x7fffffff)
            eax_32 = edx_44
        
        char var_11
        uint32_t ecx_24 = (((((zx.d(ecx_17:1.b) << 8) + zx.d(var_15:2.b)) << 8) + zx.d(var_15:3.b))
            << 8) + zx.d(var_11)
        uint32_t eax_36 = 0xffffffff
        
        if (ecx_24 u<= 0x7fffffff)
            eax_36 = ecx_24
        
        uint32_t var_3c_1 = eax_36
        
        if (esi_1 == 0xffffffff || eax_12 == 0xffffffff || var_50 == 0xffffffff
                || eax_20 == 0xffffffff || eax_24 == 0xffffffff || eax_28 == 0xffffffff
                || eax_32 == 0xffffffff || eax_36 == 0xffffffff)
            eax_3 = sub_6a77d0(arg3, "invalid values")
        else
            eax_3 = zx.d(*(arg3 + 0x326))
            
            if (eax_3.w s>= 0)
                if ((eax_3.b & 0x10) == 0)
                    *(arg3 + 0x326) = eax_3.w | 0x10
                    eax_3 = sub_6a5540(&var_50, arg3 + 0x2dc, arg3, &var_50, 1)
                    
                    if (arg2 != 0)
                        int32_t eax_41 = *(arg3 + 0x324)
                        *(arg2 + 0x28) = *(arg3 + 0x2dc)
                        *(arg2 + 0x38) = *(arg3 + 0x2ec)
                        *(arg2 + 0x48) = *(arg3 + 0x2fc)
                        *(arg2 + 0x58) = *(arg3 + 0x30c)
                        *(arg2 + 0x68) = *(arg3 + 0x31c)
                        *(arg2 + 0x70) = eax_41
                        uint32_t eax_42 = sub_6a4da0(arg3, arg2)
                        @__security_check_cookie@4(eax_1 ^ &var_54)
                        return eax_42
                else
                    *(arg3 + 0x326) = eax_3.w | 0x8000
                    
                    if (arg2 != 0)
                        int32_t eax_38 = *(arg3 + 0x324)
                        *(arg2 + 0x28) = *(arg3 + 0x2dc)
                        *(arg2 + 0x38) = *(arg3 + 0x2ec)
                        *(arg2 + 0x48) = *(arg3 + 0x2fc)
                        *(arg2 + 0x58) = *(arg3 + 0x30c)
                        *(arg2 + 0x68) = *(arg3 + 0x31c)
                        *(arg2 + 0x70) = eax_38
                        sub_6a4da0(arg3, arg2)
                    
                    eax_3 = sub_6a77d0(arg3, "duplicate")
else
    sub_6ace40(arg3, arg4)
    eax_3 = sub_6a77d0(arg3, "invalid")

@__security_check_cookie@4(eax_1 ^ &var_54)
return eax_3
