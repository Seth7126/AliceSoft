// 函数: ___acrt_invoke_user_matherr
// 地址: 0x71135c
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx
int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
uint32_t __security_cookie_1 = __security_cookie
int32_t esi_1 = ror.d(__security_cookie_1 ^ data_7fc6fc, __security_cookie_1.b & 0x1f)
int32_t result

if (esi_1 != 0)
    result = esi_1(arg1)
else
    result = 0

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
