// 函数: sub_403dc0
// 地址: 0x403dc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$??0system_error@std@@QAE@HABVerror_category@1@PBD@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 4)
int32_t var_34 = 0

if (ecx != 0)
    struct IString::common::CStringWrapper::VTable* var_30 =
        &common::CStringWrapper::`vftable'{for `IString'}
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    int32_t var_8_1 = 0
    char* var_40_2
    
    if ((*(*ecx + 0x1c))(&var_30, arg3) != 0)
        char* eax_6 = &var_2c
        
        if (var_18_1 u>= 0x10)
            eax_6 = var_2c.d
        
        var_40_2 = eax_6
    else
        var_40_2 = &data_75cce2
    
    sub_403360(arg2, var_40_2)
    sub_404c60(&var_30)
else
    sub_403360(arg2, 0x75cce1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
