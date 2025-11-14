// 函数: sub_495bf0
// 地址: 0x495bf0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bb836
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_a8
int32_t eax_2 = __security_cookie ^ &var_a8
int32_t __saved_edi
int32_t var_b4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg1[0x3c] != 0)
    void* eax_6 = (*arg1)->__offset(0x8).d(0)
    void var_98
    sub_48d6a0(&var_98, &arg1[0xa])
    int32_t var_4 = 0
    sub_48d740(&var_98, eax_6)
    var_a8 = arg1[0x41].b
    int32_t* var_a4 = nullptr
    int32_t var_a0_1 = 0
    int32_t var_9c_1 = 0
    var_4.b = 1
    sub_4909f0(arg1[0x3c], var_a8.d, arg1[0x57], arg1, &var_a4, &var_98)
    var_4.b = 0
    int32_t* eax_8 = var_a4
    
    if (eax_8 != 0)
        j__free(eax_8)
    
    void* ecx_4 = arg1[0x3c]
    
    if (arg4 == 0)
        result = sub_4902e0(ecx_4, arg2, arg3)
    else
        result = sub_490240(ecx_4, arg2, arg3)
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_a8)
return result
