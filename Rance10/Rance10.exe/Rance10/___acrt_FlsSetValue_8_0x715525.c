// 函数: ___acrt_FlsSetValue@8
// 地址: 0x715525
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx
int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* esi
void* var_c = esi
int32_t var_10 = 0x755f3c
void* const dwTlsIndex = &data_755f34
int32_t eax_2 = try_get_function(6, "FlsSetValue", dwTlsIndex, var_10)
dwTlsIndex = arg1
void* const* esp = &dwTlsIndex
BOOL result

if (eax_2 == 0)
    result = TlsSetValue(dwTlsIndex, arg2)
    esp = &var_c
else
    result = eax_2()

*esp
@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
