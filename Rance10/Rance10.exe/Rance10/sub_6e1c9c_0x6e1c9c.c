// 函数: sub_6e1c9c
// 地址: 0x6e1c9c
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
BOOL var_18 = arg1
*arg5 = arg3
*arg8 = arg6
int32_t result

if (*arg5 != arg4)
    while (*arg8 != arg7)
        int32_t eax_10
        int32_t edx
        
        if (arg7 - *arg8 s< 5)
            int32_t eax_11 = *arg2
            int32_t eax_12 = arg2[1]
            int32_t var_30_2 = arg1 + 8
            int32_t* var_34_2 = arg2
            char var_10
            int32_t eax_17 = __Wcrtomb(&var_10, edx, arg1, &var_10, zx.d(**arg5))
            
            if (eax_17 s< 0)
                result = 2
                goto label_6e1d77
            
            if (arg7 - *arg8 s< eax_17)
                *arg2 = eax_11
                arg2[1] = eax_12
                break
            
            edx = sub_700660(*arg8, &var_10, eax_17)
            eax_10 = eax_17
            goto label_6e1d46
        
        int32_t var_30_1 = arg1 + 8
        int32_t* var_34_1 = arg2
        uint32_t eax_9 = zx.d(**arg5)
        eax_10, edx = __Wcrtomb(eax_9, edx, arg1, *arg8, eax_9)
        
        if (eax_10 s< 0)
            result = 2
            goto label_6e1d77
        
    label_6e1d46:
        *arg5 += 2
        *arg8 += eax_10
        
        if (*arg5 == arg4)
            break
        
        arg1 = var_18

result.b = *arg5 != arg4
label_6e1d77:
@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
