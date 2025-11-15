// 函数: sub_694c50
// 地址: 0x694c50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_747c50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* result

if (*(arg1 + 0x10) != *(arg1 + 0x14))
    char* var_28
    sub_4630a0(&var_28, arg1 + 0x10)
    int32_t var_8_1 = 0
    void* var_1c
    sub_4275f0(&var_1c, arg1 + 0x24)
    var_8_1.b = 1
    char* esi_1 = var_28
    int32_t* var_38_3 = &var_1c
    int32_t var_24
    result = sub_694b30(arg1, esi_1, var_24 - esi_1)
    void* ecx_3 = var_1c
    int32_t var_20
    int32_t var_14
    
    if (result.b == 0)
        if (ecx_3 != 0)
            sub_403160(ecx_3, (var_14 - ecx_3) s>> 2, 4)
        
        if (esi_1 != 0)
            sub_403160(esi_1, var_20 - esi_1, 1)
        
        result.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    if (ecx_3 != 0)
        sub_403160(ecx_3, (var_14 - ecx_3) s>> 2, 4)
    
    if (esi_1 != 0)
        sub_403160(esi_1, var_20 - esi_1, 1)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
