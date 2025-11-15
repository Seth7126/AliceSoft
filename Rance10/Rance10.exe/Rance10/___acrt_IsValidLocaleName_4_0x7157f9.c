// 函数: ___acrt_IsValidLocaleName@4
// 地址: 0x7157f9
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx
int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_2 = try_get_function(0x15, "IsValidLocaleName", 0x755fac, "IsValidLocaleName")
BOOL result

if (eax_2 == 0)
    result = IsValidLocale(___acrt_LocaleNameToLCID@8(arg1, 0), LCID_INSTALLED)
else
    result = eax_2(arg1)

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
