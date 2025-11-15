// 函数: sub_6afab0
// 地址: 0x6afab0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int16_t var_1c
int32_t eax_1 = __security_cookie ^ &var_1c
int32_t eax_2 = *(arg3 + 0x74)

if ((eax_2.b & 1) == 0)
    sub_6a7750(arg3, "missing IHDR")
    noreturn

uint32_t eax_3

if (arg2 == 0 || (*(arg2 + 8) & 0x200) == 0)
    if ((eax_2.b & 4) != 0)
        *(arg3 + 0x74) = eax_2 | 8
    
    if (arg4 == 7)
        int32_t eax_5 = *(arg3 + 0x5c)
        
        if (eax_5 == 0)
            sub_6a7500(arg3, "Call to NULL read function")
            noreturn
        
        char var_14
        sub_6a4030(eax_5(arg3, &var_14, 7), &var_14, arg3, 7)
        int16_t edx_4
        eax_3, edx_4 = sub_6ace40(arg3, nullptr)
        
        if (eax_3 == 0)
            char var_10
            eax_3.b = var_10
            char var_e
            edx_4:1.b = var_e
            char var_f
            int32_t ebx
            ebx:1.b = var_f
            char var_11
            edx_4.b = var_11
            char var_12
            ebx.b = var_12
            char var_18_1 = eax_3.b
            char var_13
            eax_3 = zx.d(var_13)
            char var_16_1 = edx_4:1.b
            char var_17_1 = ebx:1.b
            char var_19_1 = edx_4.b
            char var_1a_1 = ebx.b
            var_1c = zx.w(var_14) * 0x100 + eax_3.w
            
            if (arg2 != 0 && (*(arg3 + 0x74) & 0x200) == 0)
                if (ebx.b == 0 || ebx.b u> 0xc || edx_4.b == 0 || edx_4.b u> 0x1f || var_10 u> 0x17
                        || ebx:1.b u> 0x3b || edx_4:1.b u> 0x3c)
                    int32_t eax_9 = sub_6a7530(arg3, "Ignoring invalid time value")
                    @__security_check_cookie@4(eax_1 ^ &var_1c)
                    return eax_9
                
                int32_t eax_7 = var_1c.d
                *(arg2 + 8) |= 0x200
                *(arg2 + 0x8c) = eax_7
                int32_t eax_8 = var_18_1.d
                *(arg2 + 0x90) = eax_8
                @__security_check_cookie@4(eax_1 ^ &var_1c)
                return eax_8
    else
        sub_6ace40(arg3, arg4)
        eax_3 = sub_6a77d0(arg3, "invalid")
else
    sub_6ace40(arg3, arg4)
    eax_3 = sub_6a77d0(arg3, "duplicate")

@__security_check_cookie@4(eax_1 ^ &var_1c)
return eax_3
