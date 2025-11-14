// 函数: sub_4f95b0
// 地址: 0x4f95b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b4408
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_2c
int32_t eax_2 = __security_cookie ^ &var_2c
int32_t __saved_edi
int32_t var_38 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* result = sub_4a8b80(data_75d4fc + 0x174, arg2)

if (result != 0)
    char* ecx_3 = sub_4d1fc0(result, &var_2c, arg4)
    int32_t var_4 = 0
    
    if (*(ecx_3 + 0x14) u>= 0x10)
        ecx_3 = *ecx_3
    
    result = (*(*arg3 + 4))(ecx_3)
    int32_t var_18
    
    if (var_18 u>= 0x10)
        result = j__free(var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_2c)
return result
