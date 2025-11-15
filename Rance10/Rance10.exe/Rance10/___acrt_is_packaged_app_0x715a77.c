// 函数: ___acrt_is_packaged_app
// 地址: 0x715a77
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = arg1
int32_t var_c = arg1
int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t ecx = data_7fc9f4
int32_t result

if (ecx == 0)
    int32_t eax_2 = try_get_function(8, "GetCurrentPackageId", 0x755f3c, 0x755f44)
    
    if (eax_2 != 0)
        var_c = 0
        result = eax_2(&var_c, 0)
    
    if (eax_2 == 0 || result != 0x7a)
        data_7fc9f4
        data_7fc9f4 = 2
        result.b = 0
    else
        data_7fc9f4
        data_7fc9f4 = 1
        result.b = 1
else
    result.b = ecx == 1

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
