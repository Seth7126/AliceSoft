// 函数: ___acrt_GetTimeFormatEx@24
// 地址: 0x7156c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx
int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t esi
int32_t var_c = esi
int32_t eax_2 = try_get_function(0x10, "GetTimeFormatEx", &data_755f68, "GetTimeFormatEx")
uint32_t dwFlags = arg2
int32_t result
int32_t* esp

if (eax_2 == 0)
    result = GetTimeFormatW(___acrt_LocaleNameToLCID@8(arg1, 0), dwFlags, arg3, arg4, arg5, arg6)
    esp = &var_c
else
    result = eax_2(arg1)
    esp = &dwFlags

*esp
@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
