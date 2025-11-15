// 函数: sub_62c860
// 地址: 0x62c860
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_1c
int32_t eax_1 = __security_cookie ^ &var_1c
int32_t* edx = arg2
int32_t ebx = arg1
int32_t ecx = arg4
*arg5 = arg3
int32_t var_18 = ebx
*arg8 = arg6
var_1c = edx

if (*arg5 != ecx)
    while (true)
        BOOL ecx_1 = *arg8
        
        if (ecx_1 != arg7)
            if (arg7 - ecx_1 s< 5)
                int32_t eax_10 = *edx
                int32_t eax_11 = edx[1]
                int32_t var_30_2 = ebx + 8
                int32_t* var_34_2 = edx
                char var_c
                int32_t eax_16 = __Wcrtomb(&var_c, edx, ecx_1, &var_c, zx.d(**arg5))
                
                if (eax_16 s< 0)
                    @__security_check_cookie@4(eax_1 ^ &var_1c)
                    return 2
                
                char* eax_17 = *arg8
                
                if (arg7 - eax_17 s>= eax_16)
                    sub_700660(eax_17, &var_c, eax_16)
                    *arg5 += 2
                    *arg8 += eax_16
                    ebx = var_18
                    goto label_62c927
                
                int32_t* eax_20 = var_1c
                *eax_20 = eax_10
                eax_20[1] = eax_11
            else
                int32_t var_30_1 = ebx + 8
                int32_t* var_34_1 = edx
                uint32_t eax_8 = zx.d(**arg5)
                int32_t eax_9 = __Wcrtomb(eax_8, edx, ecx_1, ecx_1, eax_8)
                
                if (eax_9 s< 0)
                    @__security_check_cookie@4(eax_1 ^ &var_1c)
                    return 2
                
                *arg5 += 2
                *arg8 += eax_9
            label_62c927:
                
                if (*arg5 == arg4)
                    ecx = arg4
                    break
                
                edx = var_1c
                continue
        
        ecx = arg4
        break

int32_t result
result.b = *arg5 != ecx
@__security_check_cookie@4(eax_1 ^ &var_1c)
return result
