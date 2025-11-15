// 函数: __invalid_parameter
// 地址: 0x70361b
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx
int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* eax_2 = ___acrt_getptd_noexit()
int32_t esi_1

if (eax_2 != 0)
    esi_1 = *(eax_2 + 0x35c)

int32_t var_20
int32_t var_1c
int32_t var_18
int32_t var_14
int32_t var_10

if (eax_2 == 0 || esi_1 == 0)
    var_10 = arg5
    uint32_t __security_cookie_1 = __security_cookie
    var_14 = arg4
    var_18 = arg3
    esi_1 = ror.d(__security_cookie_1 ^ data_7fc464, __security_cookie_1.b & 0x1f)
    var_1c = arg2
    var_20 = arg1
    
    if (esi_1 == 0)
        __invoke_watson()
        noreturn
else
    var_10 = arg5
    var_14 = arg4
    var_18 = arg3
    var_1c = arg2
    var_20 = arg1

int32_t result = esi_1(var_20, var_1c, var_18, var_14, var_10)
@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
