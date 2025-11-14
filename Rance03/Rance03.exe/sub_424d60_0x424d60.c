// 函数: sub_424d60
// 地址: 0x424d60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b44b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_3c
int32_t eax_2 = __security_cookie ^ &var_3c
int32_t __saved_edi
int32_t var_4c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ecx = *(arg1 + 0xe0)
int32_t result

if (arg2 s< 0 || arg2 s>= (*(ecx + 0x2c) - *(ecx + 0x28)) s>> 2)
    result.b = 0
else
    int32_t ebx_1
    
    if (arg2 s>= (*(ecx + 0x2c) - *(ecx + 0x28)) s>> 2)
        ebx_1 = 0xffffffff
    else
        ebx_1 = *(*(ecx + 0x28) + (arg2 << 2))
    
    int32_t eax_12 = (*(**(ecx + 0xc) + 0x18))(ebx_1)
    *(arg1 + 0xec) = arg2
    int32_t var_38
    
    if (sub_4315a0(eax_12) == 0)
        sub_4240d0(*(arg1 + 0xe4))
        result.b = 1
    else if (sub_42cc20(*(arg1 + 0xe0), ebx_1, &var_38).b == 0)
        result.b = 0
    else
        int32_t var_20_1 = 0xf
        int32_t var_24_1 = 0
        char var_34 = 0
        int32_t var_c_1 = 0
        sub_42cce0(*(arg1 + 0xe0), ebx_1, &var_34)
        sub_423ef0(*(arg1 + 0xe4), var_38, &var_34, 1)
        sub_401fb0(&var_34)
        result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_3c)
return result
