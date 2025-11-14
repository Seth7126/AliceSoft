// 函数: sub_5ff480
// 地址: 0x5ff480
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5378
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_2c
int32_t eax_2 = __security_cookie ^ &var_2c
int32_t __saved_edi
int32_t var_3c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
int32_t var_4 = 0
void* ecx = data_75d524
struct _EXCEPTION_REGISTRATION_RECORD** result
int32_t ebx

if (*(ecx + 0x19) == 0)
    ebx.b = 0
else
    void* edx_1 = *(ecx + 0x14)
    result = *(edx_1 + 4)
    void* esi_1 = result + 1
    
    if (esi_1 u> *(edx_1 + 8))
        ebx.b = 0
    else
        result.b = *result
        *(edx_1 + 4) = esi_1
        
        if (result.b != 3)
            ebx.b = 0
        else if (sub_468d00(*(ecx + 0x14), &var_28).b == 0)
            ebx.b = 0
        else
            char* edx_2 = &var_28
            
            if (var_14 u>= 0x10)
                edx_2 = var_28.d
            
            (*(*arg1 + 4))(edx_2)
            ebx.b = 1

if (var_14 u>= 0x10)
    j__free(var_28.d)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_2c)
return result
