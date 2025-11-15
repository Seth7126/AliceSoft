// 函数: sub_6aee00
// 地址: 0x6aee00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char var_f0
int32_t var_4 = __security_cookie ^ &var_f0
char ecx = (*(arg3 + 0x74)).b

if ((ecx & 1) == 0)
    sub_6a7750(arg3, "missing IHDR")
    noreturn

if ((ecx & 4) == 0)
    int32_t eax_1
    eax_1.b = *(arg3 + 0x157)
    
    if (eax_1.b != 3 || (ecx & 2) != 0)
        if (arg2 != 0 && (*(arg2 + 8) & 0x20) != 0)
            sub_6ace40(arg3, arg4)
            int32_t eax_2 = sub_6a77d0(arg3, "duplicate")
            @__security_check_cookie@4(var_4 ^ &var_f0)
            return eax_2
        
        void* edi
        
        if (eax_1.b != 3)
            edi = ((zx.d(eax_1.b) & 2) | 1) * 2
        else
            edi = 1
        
        uint32_t eax_3
        
        if (arg4 == edi)
            int32_t eax_4 = *(arg3 + 0x5c)
            
            if (eax_4 == 0)
                sub_6a7500(arg3, "Call to NULL read function")
                noreturn
            
            char var_e4
            sub_6a4030(eax_4(arg3, &var_e4, edi), &var_e4, arg3, edi)
            eax_3 = sub_6ace40(arg3, nullptr)
            
            if (eax_3 == 0)
                eax_3.b = *(arg3 + 0x157)
                
                if (eax_3.b != 3)
                    uint16_t ecx_14 = zx.w(var_e4)
                    var_f0 = 0
                    int16_t ecx_15
                    char var_e3
                    
                    if ((eax_3.b & 2) != 0)
                        int16_t var_ee_4 = ecx_14 * 0x100 + zx.w(var_e3)
                        char var_df
                        eax_3 = zx.d(var_df)
                        char var_e2
                        char var_e1
                        int16_t var_ec_3 = zx.w(var_e2) * 0x100 + zx.w(var_e1)
                        char var_e0
                        int16_t var_ea_3 = zx.w(var_e0) * 0x100 + eax_3.w
                    label_6aefcb:
                        ecx_15 = 0
                    else
                        eax_3 = zx.d(var_e3)
                        ecx_15 = ecx_14 * 0x100 + eax_3.w
                        int16_t var_ea_2 = ecx_15
                        int16_t var_ec_2 = ecx_15
                        int16_t var_ee_3 = ecx_15
                    
                    if (arg2 != 0)
                        int64_t xmm0 = var_f0.q
                        *(arg2 + 8) |= 0x20
                        *(arg2 + 0xaa) = xmm0
                        *(arg2 + 0xb2) = ecx_15
                        @__security_check_cookie@4(var_4 ^ &var_f0)
                        return eax_3
                else
                    char ecx_11 = var_e4
                    var_f0 = ecx_11
                    int16_t edx_4
                    
                    if (arg2 != 0)
                        edx_4 = *(arg2 + 0x14)
                    
                    if (arg2 == 0 || edx_4 == 0)
                        eax_3 = 0
                        int16_t var_ec
                        var_ec.d = 0
                        int16_t var_ee_2 = 0
                        goto label_6aefcb
                    
                    if (zx.w(ecx_11) u< edx_4)
                        char* ecx_13 = zx.d(ecx_11) * 3 + *(arg3 + 0x144)
                        uint16_t var_ee_1 = zx.w(*ecx_13)
                        uint16_t var_ec_1 = zx.w(ecx_13[1])
                        eax_3 = zx.d(ecx_13[2])
                        int16_t var_ea_1 = eax_3.w
                        goto label_6aefcb
                    
                    eax_3 = sub_6a77d0(arg3, "invalid index")
        else
            sub_6ace40(arg3, arg4)
            eax_3 = sub_6a77d0(arg3, "invalid")
        
        @__security_check_cookie@4(var_4 ^ &var_f0)
        return eax_3

int32_t eax_12 = sub_6ace40(arg3, arg4)

if ((*(arg3 + 0x78) & 0x100000) == 0)
    sub_6a7750(arg3, "out of place")
    noreturn

char var_dc[0xd8]
sub_6a7650(eax_12, &var_dc, arg3, "out of place")
int32_t eax_13 = sub_6a7530(arg3, &var_dc)
@__security_check_cookie@4(var_4 ^ &var_f0)
return eax_13
