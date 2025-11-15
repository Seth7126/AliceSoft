// 函数: _GetLocaleNameFromDefault
// 地址: 0x71cde5
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
*(arg1 + 8) |= 0x104
void var_b4
int32_t result = ___acrt_GetUserDefaultLocaleName@8(&var_b4, 0x55)

if (result s> 1)
    void* ecx_1 = &var_b4
    int32_t edi
    int32_t var_bc_1 = edi
    
    do
        result.w = *ecx_1
        ecx_1 += 2
    while (result.w != 0)
    
    void var_b2
    int32_t var_c0_1 = ((ecx_1 - &var_b2) s>> 1) + 1
    void* var_c4_1 = &var_b4
    int32_t var_c8_1 = 0x55
    void* var_cc_1 = arg1 + 0x250
    result = sub_713d17()
    
    if (result != 0)
        int32_t var_d0
        __builtin_memset(&var_d0, 0, 0x14)
        __invoke_watson()
        noreturn

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
