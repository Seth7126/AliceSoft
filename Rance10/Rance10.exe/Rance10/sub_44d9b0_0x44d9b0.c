// 函数: sub_44d9b0
// 地址: 0x44d9b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72af38
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (*(arg1 + 4) != 0)
    void* var_2c
    sub_44d600(arg1, &var_2c, arg2)
    int32_t var_8_1 = 0
    int32_t var_1c
    int32_t result_1
    
    if (var_1c != 0)
        struct filesystem::CFile::VTable* const var_48_1 = &filesystem::CFile::`vftable'
        int32_t var_44_1 = 0xffffffff
        int32_t var_40
        __builtin_memset(&var_40, 0, 0x14)
        var_8_1.b = 2
        void* var_38
        char eax_4 = sub_67edf0(&var_2c, &var_38)
        void* esi_1 = var_38
        int32_t var_34
        
        if (eax_4 == 0 || esi_1 == var_34)
            result_1 = 0
        else
            result_1 = (*(*arg3 + 8))(esi_1, var_34 - esi_1)
        
        int32_t var_30
        
        if (esi_1 != 0)
            sub_403160(esi_1, var_30 - esi_1, 1)
    else
        result_1 = 0
    
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)
    
    result = result_1
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
