// 函数: _TestDefaultCountry
// 地址: 0x71d429
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void var_1c
int32_t result = ___acrt_GetLocaleInfoEx@16(arg1, 0x59, &var_1c, 9)

if (result != 0)
    uint32_t eax_2 = _wcsncmp(&var_1c, arg1, 9)
    int32_t eax_3 = neg.d(eax_2)
    result = sbb.d(eax_3, eax_3, eax_2 != 0) + 1

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
