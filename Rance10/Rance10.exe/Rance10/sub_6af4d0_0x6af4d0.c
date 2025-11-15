// 函数: sub_6af4d0
// 地址: 0x6af4d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_f8
int32_t eax_1 = __security_cookie ^ &var_f8
char eax_2 = (*(arg3 + 0x74)).b

if ((eax_2 & 1) == 0)
    sub_6a7750(arg3, "missing IHDR")
    noreturn

if ((eax_2 & 4) != 0)
    sub_6ace40(arg3, arg4)
    int32_t eax_3 = sub_6a77d0(arg3, "out of place")
    @__security_check_cookie@4(eax_1 ^ &var_f8)
    return eax_3

if (arg2 != 0 && (*(arg2 + 8) & 0x400) != 0)
    sub_6ace40(arg3, arg4)
    int32_t eax_4 = sub_6a77d0(arg3, "duplicate")
    @__security_check_cookie@4(eax_1 ^ &var_f8)
    return eax_4

char* ebp = *(arg3 + 0x2b8)
char* var_f4 = ebp

if (ebp != 0)
    if (arg4 + 1 u<= *(arg3 + 0x2bc))
        goto label_6af5f0
    
    int32_t eax_5 = *(arg3 + 0x278)
    *(arg3 + 0x2b8) = 0
    *(arg3 + 0x2bc) = 0
    
    if (eax_5 == 0)
        _free(ebp)
    else
        eax_5(arg3, ebp)

int32_t eax_11

if (arg4 == 0xffffffff)
label_6af7da:
    sub_6ace40(arg3, arg4)
    eax_11 = sub_6a77d0(arg3, "out of memory")
else
    int32_t eax_6 = *(arg3 + 0x274)
    
    if (eax_6 == 0)
        char* eax_8 = sub_705e22()
        var_f4 = eax_8
        ebp = eax_8
    else
        ebp = eax_6(arg3, arg4 + 1)
        var_f4 = ebp
    
    if (ebp == 0)
        goto label_6af7da
    
    *(arg3 + 0x2b8) = ebp
    *(arg3 + 0x2bc) = arg4 + 1
label_6af5f0:
    int32_t eax_9 = *(arg3 + 0x5c)
    
    if (eax_9 == 0)
        sub_6a7500(arg3, "Call to NULL read function")
        noreturn
    
    sub_6a4030(eax_9(arg3, ebp, arg4), ebp, arg3, arg4)
    eax_11 = sub_6ace40(arg3, nullptr)
    
    if (eax_11 == 0)
        void* ebp_1 = ebp + arg4
        *ebp_1 = eax_11.b
        char* ecx_8 = var_f4
        
        if (*var_f4 != 0)
            do
                ecx_8 = &ecx_8[1]
            while (*ecx_8 != 0)
        
        if (ebp_1 u> &ecx_8[0xc])
            void* eax_13
            eax_13.b = ecx_8[1]
            uint32_t ebx_7 = (((((zx.d(eax_13.b) << 8) + zx.d(ecx_8[2])) << 8) + zx.d(ecx_8[3]))
                << 8) + zx.d(ecx_8[4])
            uint32_t eax_16
            eax_16.b = ecx_8[5]
            uint32_t eax_19
            eax_19.b = ecx_8[0xa]
            uint32_t var_ec_1 = (((((zx.d(eax_16.b) << 8) + zx.d(ecx_8[6])) << 8) + zx.d(ecx_8[7]))
                << 8) + zx.d(ecx_8[8])
            uint32_t edx_10
            edx_10.b = ecx_8[9]
            void* ecx_9 = &ecx_8[0xb]
            char var_f5_1 = edx_10.b
            char var_f6_1 = eax_19.b
            void* var_f0_1 = ecx_9
            
            if (edx_10.b != 0)
                if (edx_10.b == 1)
                    if (eax_19.b == 3)
                        goto label_6af6f5
                    
                    eax_11 = sub_6a77d0(arg3, "invalid parameter count")
                else if (edx_10.b != 2)
                    if (edx_10.b != 3)
                        if (edx_10.b u>= 4)
                            sub_6a77d0(arg3, "unrecognized equation type")
                            eax_19.b = var_f6_1
                            ecx_9 = var_f0_1
                        
                        goto label_6af6f5
                    
                    if (eax_19.b == 4)
                        goto label_6af6f5
                    
                    eax_11 = sub_6a77d0(arg3, "invalid parameter count")
                else
                    if (eax_19.b == 3)
                        goto label_6af6f5
                    
                    eax_11 = sub_6a77d0(arg3, "invalid parameter count")
            else if (eax_19.b != 2)
                eax_11 = sub_6a77d0(arg3, "invalid parameter count")
            else
            label_6af6f5:
                void* esi_1 = ecx_9
                
                if (*ecx_9 != 0)
                    do
                        esi_1 += 1
                    while (*esi_1 != 0)
                
                uint32_t edx_11 = zx.d(eax_19.b)
                int32_t eax_20 = sub_6a7cb0(arg3, edx_11 << 2)
                
                if (eax_20 != 0)
                    int32_t eax_21 = 0
                    
                    if (edx_11 == 0)
                    label_6af762:
                        char* eax_24 = zx.d(var_f5_1)
                        sub_6b1a80(eax_24, arg2, arg3, var_f4, ebx_7, var_ec_1, eax_24, edx_11, 
                            var_f0_1, eax_20)
                        int32_t eax_25 = *(arg3 + 0x278)
                        
                        if (eax_25 == 0)
                            eax_11 = _free(eax_20)
                        else
                            eax_11 = eax_25(arg3, eax_20)
                    else
                        while (true)
                            esi_1 += 1
                            *(eax_20 + (eax_21 << 2)) = esi_1
                            
                            if (esi_1 u> ebp_1)
                            label_6af74a:
                                int32_t eax_22 = *(arg3 + 0x278)
                                int32_t eax_23
                                
                                if (eax_22 == 0)
                                    eax_23 = _free(eax_20)
                                else
                                    eax_23 = eax_22(arg3, eax_20)
                                
                                if ((*(arg3 + 0x78) & 0x100000) == 0)
                                    sub_6a7750(arg3, "invalid data")
                                    noreturn
                                
                                char var_dc[0xd8]
                                sub_6a7650(eax_23, &var_dc, arg3, "invalid data")
                                eax_11 = sub_6a7530(arg3, &var_dc)
                                break
                            
                            while (*esi_1 != 0)
                                esi_1 += 1
                                
                                if (esi_1 u> ebp_1)
                                    goto label_6af74a
                            
                            eax_21 += 1
                            
                            if (eax_21 s>= edx_11)
                                goto label_6af762
                else
                    eax_11 = sub_6a77d0(arg3, "out of memory")
        else
            eax_11 = sub_6a77d0(arg3, "invalid")

@__security_check_cookie@4(eax_1 ^ &var_f8)
return eax_11
