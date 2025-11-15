// 函数: sub_6148a0
// 地址: 0x6148a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72f110
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_60 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3
int32_t edx
edx:eax_3 = muls.dp.d(0x4bda12f7, arg1[0x1f] - arg1[0x1e])
int32_t var_4c = arg3
int32_t edx_1 = edx s>> 5
int32_t var_50 = 0
int32_t eax_7

if (arg3 u< (edx_1 u>> 0x1f) + edx_1)
    eax_7 = arg3 * 0x6c

if (arg3 u>= (edx_1 u>> 0x1f) + edx_1 || eax_7 == neg.d(arg1[0x1e]))
    int32_t var_1c_1 = 0xf
    int32_t var_20_1 = 0
    char var_30 = 0
    sub_403490(&var_30, 0x76c064, 0x2b)
    int32_t var_8_1 = 0
    var_8_1.b = 1
    char var_48
    sub_612230(arg1, "RunMethod", sub_409350(&var_4c, &var_30, &var_48, &var_4c))
    int32_t var_34
    
    if (var_34 u>= 0x10)
        sub_403160(var_48.d, var_34 + 1, 1)
    
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    var_48 = 0
    
    if (var_1c_1 u>= 0x10)
        sub_403160(var_30.d, var_1c_1 + 1, 1)
    
    *arg2 = 0xffffffff
    arg2[1] = 0
    arg2[2] = 0
    arg2[3] = 0
else
    sub_616c00(arg1, arg2, eax_7 + arg1[0x1e], arg4, arg5, arg6)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
