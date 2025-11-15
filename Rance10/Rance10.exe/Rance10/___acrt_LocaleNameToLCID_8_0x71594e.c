// 函数: ___acrt_LocaleNameToLCID@8
// 地址: 0x71594e
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx
int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_2 = try_get_function(0x18, "LocaleNameToLCID", 0x755fec, "LocaleNameToLCID")
int32_t result

if (eax_2 == 0)
    result = ___acrt_DownlevelLocaleNameToLCID(arg1)
else
    result = eax_2(arg1, arg2)

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
