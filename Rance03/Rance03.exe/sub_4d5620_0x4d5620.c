// 函数: sub_4d5620
// 地址: 0x4d5620
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bf5e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_74
int32_t eax_2 = __security_cookie ^ &var_74
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_70 = arg3
int32_t var_6c = arg2
var_74 = arg1 + 0x34
int32_t var_4 = 0
int32_t* var_58 = nullptr
var_4.b = 1
void var_68
int32_t* (__thiscall* var_50)(int32_t* arg1, void* arg2, void** arg3, void* arg4)
void arg_4
sub_4d5980(&var_68, sub_4d58b0(&var_74, arg4, &var_50, &var_74, &arg_4, &var_6c, &var_70, arg4))
var_4.b = 2

if (*(arg1 + 0x44) != 0)
    *(arg1 + 0x44) = 0

if (var_58 == 0)
    sub_69a52d()
    noreturn

void* ebx

if ((*(*var_58 + 8))(eax_4) != 0)
    void* ecx_3
    
    if (arg1 == 0)
        ecx_3 = nullptr
    else
        ecx_3 = arg1 + 0x2c
    
    if (*(arg1 + 0x44) != ecx_3)
        *(arg1 + 0x44) = ecx_3
        
        if (ecx_3 != 0)
            (**ecx_3)()
    
    int32_t* ecx_4 = *(arg1 + 0x44)
    
    if (ecx_4 != 0)
        (**ecx_4)()
    
    ebx.b = 1
else
    ebx.b = 0

var_4.b = 0
(*(*var_58 + 0x10))(var_58 != &var_68)
int32_t var_4_1 = 0xffffffff
int32_t* var_38
void var_48

if (var_38 != 0)
    (*(*var_38 + 0x10))(var_38 != &var_48)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_74)
return result
