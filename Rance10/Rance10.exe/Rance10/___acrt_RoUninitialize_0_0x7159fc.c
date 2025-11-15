// 函数: ___acrt_RoUninitialize@0
// 地址: 0x7159fc
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx
int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t result = try_get_function(0x1d, "RoUninitialize", 0x75600c, &data_756010)

if (result != 0)
    result = result()

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
