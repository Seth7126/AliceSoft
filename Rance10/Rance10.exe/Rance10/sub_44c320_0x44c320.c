// 函数: sub_44c320
// 地址: 0x44c320
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72ac60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_50 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = data_7fcb48
int32_t result

if (*(edi + 0x48) != 0)
    void* var_3c = nullptr
    int32_t var_38_1 = 0
    int32_t var_34_1 = 0
    int32_t var_8_1 = 0
    void* var_30
    sub_403360(&var_30, arg1)
    var_8_1.b = 1
    var_8_1.b = 0
    int32_t ebx
    ebx.b = sub_67edf0(&var_30, &var_3c) == 0
    int32_t var_1c
    
    if (var_1c u>= 0x10)
        sub_403160(var_30, var_1c + 1, 1)
    
    void* esi_1 = var_3c
    int32_t result_1
    
    if (ebx.b != 0 || esi_1 == var_38_1)
        result_1 = 0
    else
        result_1 = (*(**(edi + 0x48) + 8))(esi_1, var_38_1 - esi_1)
        
        if (result_1 == 0)
            result_1 = 0
    
    if (esi_1 != 0)
        sub_403160(esi_1, var_34_1 - esi_1, 1)
    
    result = result_1
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
