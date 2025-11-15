// 函数: sub_6a7a90
// 地址: 0x6a7a90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_33c
int32_t result = __security_cookie ^ &var_33c
int32_t result_1 = result

if (arg1 != 0)
    void* var_34c_1 = 0x328
    char var_350_1 = 0
    void var_338
    struct _EXCEPTION_REGISTRATION_RECORD* esi_2 = __builtin_memcpy(&var_338, arg1, 0x328)
    _memset(arg1, var_350_1, var_34c_1)
    int32_t var_c0
    
    if (var_c0 == 0)
        _free(arg1)
    else
        var_c0(&var_338, arg1)
    
    result = sub_6a78d0(&var_338, esi_2)

@__security_check_cookie@4(result_1 ^ &var_33c)
return result
