// 函数: sub_59f280
// 地址: 0x59f280
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?_Init@?$numpunct@D@std@@IAEXABV_Locinfo@2@_N@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** esi = arg2
int32_t* eax_3

if (esi[5] u< 0x10)
    eax_3 = esi
else
    eax_3 = *esi

int32_t result

if (sub_5de720(arg1, eax_3).b != 0)
    result.b = 1
else
    if (esi[5] u>= 0x10)
        esi = *esi
    
    void** var_48 = esi
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_403490(&var_2c, 0x7694b4, 0x1c)
    int32_t var_8_1 = 0
    var_8_1.b = 1
    char var_44
    sub_5e01e0(sub_409240(&var_48, &var_2c, &var_44, &var_48))
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44.d, var_30 + 1, 1)
    
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    var_44 = 0
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
