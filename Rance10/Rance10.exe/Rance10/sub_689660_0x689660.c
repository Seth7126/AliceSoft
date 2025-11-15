// 函数: sub_689660
// 地址: 0x689660
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_747158
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* result

if (*(arg1 + 0x10) != *(arg1 + 0x14))
    char* var_1c
    sub_4630a0(&var_1c, arg1 + 0x10)
    int32_t var_8_1 = 0
    char* esi_1 = var_1c
    int32_t var_18
    void* var_2c_2 = var_18 - esi_1
    int32_t var_14
    
    if (sub_6895d0(arg1, esi_1).b == 0)
        if (esi_1 != 0)
            sub_403160(esi_1, var_14 - esi_1, 1)
        
        result.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    if (esi_1 != 0)
        sub_403160(esi_1, var_14 - esi_1, 1)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
