// 函数: sub_41f890
// 地址: 0x41f890
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?_Init@?$numpunct@D@std@@IAEXABV_Locinfo@2@_N@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_48 = 0
int32_t* eax_4 = (*(**(arg1 + 8) + 4))(arg3)

if (eax_4 != 0)
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_403490(&var_2c, U"""", 1)
    int32_t var_8_1 = 0
    char* eax_6 = (*(*eax_4 + 0x18))(eax_2)
    char var_44[0x10]
    int32_t* eax_7 = sub_4176f0(eax_6.b, &var_2c, &var_44, eax_6)
    var_8_1.b = 1
    sub_4176f0(eax_7.b, eax_7, arg2, U""")
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44[0].d, var_30 + 1, 1)
    
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    var_44[0] = 0
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
else
    sub_403360(arg2, """")

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
