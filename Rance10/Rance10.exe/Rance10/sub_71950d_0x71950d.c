// 函数: sub_71950d
// 地址: 0x71950d
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t edi
int32_t var_a0 = edi
int32_t var_8c = arg3
*arg5 = 0
int32_t result
int32_t eax_10
wchar16* esi_1

if (arg2 == 1)
    void var_88
    int32_t eax_3 = InternalGetLocaleInfoA(arg1, arg3, arg4, &var_88, 0x80)
    
    if (eax_3 == 0)
        if (GetLastError() != ERROR_INSUFFICIENT_BUFFER)
            result = 0xffffffff
        else
            int32_t eax_8 = InternalGetLocaleInfoA(arg1, arg3, arg4, 0, 0)
            
            if (eax_8 != 0)
                esi_1 = __calloc_base(eax_8, 1)
                
                if (esi_1 == 0)
                    goto label_71961e
                
                eax_10 = InternalGetLocaleInfoA(arg1, var_8c, arg4, esi_1, eax_8)
                goto label_719612
            
            result = 0xffffffff
    else
        *arg5 = __calloc_base(eax_3, 1)
        __free_base(0)
        
        if (*arg5 == 0)
            result = 0xffffffff
        else
            int32_t var_a4_1 = eax_3 - 1
            void* var_a8_3 = &var_88
            int32_t var_ac_2 = eax_3
            int32_t var_b0_2 = *arg5
            
            if (sub_717fd4() != 0)
                int32_t var_b4_4
                __builtin_memset(&var_b4_4, 0, 0x14)
                __invoke_watson()
                noreturn
            
            result = 0
else if (arg2 == 2)
    int32_t eax_12 = ___acrt_GetLocaleInfoEx@16(arg3, arg4, nullptr, 0)
    
    if (eax_12 == 0)
        result = 0xffffffff
    else
        esi_1 = __calloc_base(eax_12, 2)
        
        if (esi_1 == 0)
        label_71961e:
            __free_base(esi_1)
            result = 0xffffffff
        else
            eax_10 = ___acrt_GetLocaleInfoEx@16(var_8c, arg4, esi_1, eax_12)
        label_719612:
            
            if (eax_10 == 0)
                goto label_71961e
            
            wchar16* eax_11 = esi_1
            *arg5 = eax_11
            __free_base(nullptr)
            result = 0
else if (arg2 != 0)
    result = 0xffffffff
else
    var_8c = 0
    
    if (___acrt_GetLocaleInfoEx@16(arg3, arg4 | 0x20000000, &var_8c, 2) == 0)
        result = 0xffffffff
    else
        int32_t eax_16
        eax_16.b = var_8c.b
        *arg5 = eax_16.b
        result = 0
@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
