// 函数: sub_613160
// 地址: 0x613160
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?_Init@?$numpunct@D@std@@IAEXABV_Locinfo@2@_N@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = arg1[0x7f]
int32_t edx = *(arg1[0x7e] + (ecx << 2) - 4)
int32_t var_48 = edx
arg1[0x7f] = ecx - 1
void* eax_5 = sub_622720(&arg1[0x52], edx)
int32_t result

if (eax_5 != 0)
    result = sub_405d30(&arg1[0x7d], *(eax_5 + 0x2c))
else
    int32_t result_1 = 0xf
    void* var_1c_1 = eax_5
    char var_2c = eax_5.b
    sub_403490(&var_2c, 0x76b6f4, 0x20)
    int32_t var_8_1 = 0
    var_8_1.b = 1
    char var_44
    sub_612230(arg1, "PUSHPARENTPAGE", sub_409350(&var_48, &var_2c, &var_44, &var_48))
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44.d, var_30 + 1, 1)
    
    result = result_1
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    var_44 = 0
    
    if (result u>= 0x10)
        result = sub_403160(var_2c.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
