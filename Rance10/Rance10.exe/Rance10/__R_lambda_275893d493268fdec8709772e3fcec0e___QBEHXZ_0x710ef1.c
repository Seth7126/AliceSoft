// 函数: ??R<lambda_275893d493268fdec8709772e3fcec0e>@@QBEHXZ
// 地址: 0x710ef1
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t* ebx = **arg1
int32_t result

if (ebx != 0)
    uint32_t __security_cookie_1 = __security_cookie
    int32_t edi
    int32_t var_28_1 = edi
    char esi_2 = __security_cookie_1.b & 0x1f
    char var_18_1 = esi_2
    int32_t edi_3 = ror.d(*ebx ^ __security_cookie_1, esi_2)
    int32_t ebx_3 = ror.d(ebx[1] ^ __security_cookie_1, esi_2)
    
    if (edi_3 != 0 && edi_3 != 0xffffffff)
        int32_t var_10_1 = edi_3
        int32_t var_14_1 = ebx_3
    label_710f4f:
        int32_t var_2c_1 = 0x20
        
        while (true)
            ebx_3 -= 4
            
            if (ebx_3 u< edi_3)
                if (edi_3 != 0xffffffff)
                    __free_base(edi_3)
                
                int32_t var_2c_4 = 0x20
                int32_t __security_cookie_2 = __security_cookie
                ***arg1 = __security_cookie_2
                *(**arg1 + 4) = __security_cookie_2
                *(**arg1 + 8) = __security_cookie_2
                break
            
            if (*ebx_3 != __security_cookie_1)
                int32_t esi_5 = ror.d(*ebx_3 ^ __security_cookie_1, var_18_1)
                *ebx_3 = __security_cookie_1
                esi_5()
                __security_cookie_1 = __security_cookie
                char esi_7 = __security_cookie_1.b & 0x1f
                var_18_1 = esi_7
                int32_t* eax_7 = **arg1
                int32_t var_c_2 = ror.d(*eax_7 ^ __security_cookie_1, esi_7)
                int32_t eax_10 = ror.d(eax_7[1] ^ __security_cookie_1, esi_7)
                int32_t ecx_6 = var_c_2
                
                if (ecx_6 == var_10_1)
                    int32_t var_2c_2 = 0x20
                    
                    if (eax_10 == var_14_1)
                        continue
                    else
                        ecx_6 = var_c_2
                
                var_10_1 = ecx_6
                edi_3 = ecx_6
                var_14_1 = eax_10
                ebx_3 = eax_10
                goto label_710f4f
    
    result = 0
else
    result = 0xffffffff

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
