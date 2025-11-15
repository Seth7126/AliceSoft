// 函数: ___acrt_GetLocaleInfoEx@16
// 地址: 0x715600
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx
int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
PSTR esi
PSTR var_c = esi
void* const var_10 = &data_755f64
int32_t* var_14 = &data_755f5c
PSTR LCType = "GetLocaleInfoEx"
int32_t eax_2 = try_get_function(0xd, LCType, var_14, var_10)
LCType = arg2
int32_t result
PSTR* esp

if (eax_2 == 0)
    result = GetLocaleInfoW(___acrt_LocaleNameToLCID@8(arg1, 0), LCType, arg3, arg4)
    esp = &var_c
else
    result = eax_2(arg1)
    esp = &LCType

*esp
@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
