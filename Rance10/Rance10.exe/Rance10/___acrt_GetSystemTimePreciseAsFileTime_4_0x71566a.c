// 函数: ___acrt_GetSystemTimePreciseAsFileTime@4
// 地址: 0x71566a
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx
int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* esi
void* var_c = esi
void* const lpSystemTimeAsFileTime = &data_755f68
int32_t eax_2 =
    try_get_function(0xf, "GetSystemTimePreciseAsFileTime", &data_755f64, lpSystemTimeAsFileTime)
lpSystemTimeAsFileTime = arg1
void* const* esp = &lpSystemTimeAsFileTime
int32_t result

if (eax_2 == 0)
    result = GetSystemTimeAsFileTime(lpSystemTimeAsFileTime)
    esp = &var_c
else
    result = eax_2()

*esp
@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
