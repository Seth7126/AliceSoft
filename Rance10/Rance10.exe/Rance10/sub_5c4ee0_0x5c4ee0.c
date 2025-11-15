// 函数: sub_5c4ee0
// 地址: 0x5c4ee0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7270c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_38 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(arg1 + 0x1e5) != 0)
    result.b = 1
else if (sub_5c4e60(arg1).b == 0)
    void* edi_1 = *(arg1 + 0x1c0)
    *(arg1 + 0x1c0) = 0
    
    if (edi_1 != 0)
        sub_5c51f0(edi_1)
        int32_t var_3c_1 = 0x5dc
        operator new(edi_1)
    
    *(arg1 + 0x1e5) = 1
    result.b = 1
else
    void* var_2c
    sub_403360(&var_2c, 0x76a304)
    int32_t var_8_1 = 0
    sub_5e01e0(&var_2c)
    struct _EXCEPTION_REGISTRATION_RECORD** var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
