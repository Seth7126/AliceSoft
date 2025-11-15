// 函数: ___acrt_InitializeCriticalSectionEx@12
// 地址: 0x715797
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx
int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_2 = try_get_function(0x14, "InitializeCriticalSectionEx", 0x755fa4, 0x755fac)
BOOL result

if (eax_2 == 0)
    result = InitializeCriticalSectionAndSpinCount(arg1, arg2)
else
    result = eax_2(arg1, arg2, arg3)

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
