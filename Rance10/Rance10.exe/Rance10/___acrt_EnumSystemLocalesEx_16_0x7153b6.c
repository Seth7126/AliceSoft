// 函数: ___acrt_EnumSystemLocalesEx@16
// 地址: 0x7153b6
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_8 = arg1
int32_t* var_c = arg1
int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_2 = try_get_function(2, "EnumSystemLocalesEx", 0x755f00, "EnumSystemLocalesEx")
BOOL result
int32_t arg_4

if (eax_2 == 0)
    var_c = &arg_4
    result = __acrt_lock_and_call<class <lambda_a463b7b0560cfcaf9b17f27c6ef46564> >(4, &var_c)
else
    result = eax_2(arg_4, arg2, arg3, arg4)
@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
