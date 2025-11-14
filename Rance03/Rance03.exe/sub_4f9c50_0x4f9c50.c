// 函数: sub_4f9c50
// 地址: 0x4f9c50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b4408
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_2c
int32_t eax_2 = __security_cookie ^ &var_2c
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* result = sub_4a8b80(data_75d4fc + 0x174, arg3)

if (result != 0)
    sub_401f60(&var_2c, (**arg2)(eax_4))
    int32_t var_4 = 0
    result = sub_510680(*(result + 0x34), arg4)
    void* esi_1 = *(result + 0x70)
    void* ecx_5 = *(esi_1 + 0x20)
    
    if (ecx_5 != 0)
        result = sub_487200(ecx_5, &var_2c)
        
        if (result != 0xffffffff)
            result = sub_495ac0(esi_1, result)
    
    int32_t var_18
    
    if (var_18 u>= 0x10)
        result = j__free(var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_2c)
return result
