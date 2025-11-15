// 函数: sub_71d281
// 地址: 0x71d281
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t edi
int32_t var_100 = edi
void* eax_2 = sub_714cce()
int32_t ecx = *(eax_2 + 0x60)
int32_t ecx_1 = neg.d(ecx)
void var_f8
int32_t eax_3 = ___acrt_GetLocaleInfoEx@16(arg1, 
    (sbb.d(ecx_1, ecx_1, ecx != 0) & 0xfffff002) + 0x1001, &var_f8, 0x78)
int32_t result

if (eax_3 != 0)
    if (__wcsicmp(*(eax_2 + 0x50), &var_f8) == 0)
        int16_t* ecx_6 = arg1
        uint32_t eax_4
        
        do
            eax_4.w = *ecx_6
            ecx_6 = &ecx_6[1]
        while (eax_4.w != 0)
        int32_t var_108_2 = ((ecx_6 - &ecx_6[1]) s>> 1) + 1
        int16_t* var_10c_1 = arg1
        int32_t var_110_1 = 0x55
        void* var_114_1 = eax_2 + 0x2a0
        
        if (sub_713d17() != 0)
            int32_t var_118
            __builtin_memset(&var_118, 0, 0x14)
            __invoke_watson()
            noreturn
        
        *(eax_2 + 0x58) |= 4
    
    result = not.d(*(eax_2 + 0x58) u>> 2) & 1
else
    *(eax_2 + 0x58) &= eax_3
    result = eax_3 + 1

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
