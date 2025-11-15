// 函数: ___acrt_RoInitialize@4
// 地址: 0x7159aa
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx
int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_2 = try_get_function(0x1c, "RoInitialize", 0x756008, 0x75600c)
int32_t result

if (eax_2 == 0)
    result = 0
else
    result = eax_2(arg1)

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
