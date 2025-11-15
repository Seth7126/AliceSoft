// 函数: ___acrt_GetDateFormatEx@28
// 地址: 0x71557e
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx
int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_2 = try_get_function(9, "GetDateFormatEx", 0x755f44, "GetDateFormatEx")
int32_t result

if (eax_2 == 0)
    result = GetDateFormatW(___acrt_LocaleNameToLCID@8(arg1, 0), arg2, arg3, arg4, arg5, arg6)
else
    result = eax_2(arg1, arg2, arg3, arg4, arg5, arg6, arg7)

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
