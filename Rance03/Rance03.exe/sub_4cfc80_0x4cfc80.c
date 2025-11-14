// 函数: sub_4cfc80
// 地址: 0x4cfc80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b8138
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_38
int32_t eax_2 = __security_cookie ^ &var_38
int32_t __saved_edi
int32_t var_4c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** eax_7 = sub_417ed0(arg1 + 4, arg2)
char eax_9

if (eax_7 != *(arg1 + 4))
    eax_9 = sub_40c3a0(arg2, &eax_7[4])

void** var_34

if (eax_7 == *(arg1 + 4) || eax_9 != 0)
    var_34 = *(arg1 + 4)
else
    var_34 = eax_7

void** result

if (var_34 == *(arg1 + 4) || var_34 == 0xffffffd8)
    result.b = 0
else
    int32_t var_14_1 = 0xf
    int32_t var_18_1 = 0
    char var_28 = 0
    int32_t var_50_2 = arg4
    int32_t var_4 = 0
    int32_t* ebx
    
    if (sub_4cc7a0(&var_34[0xa], &var_28, &var_34[0xa]).b != 0)
        ebx.b = sub_4e62b0(*(arg1 + 0xc), arg3, &var_28).b
    else
        ebx.b = 0
    
    if (var_14_1 u>= 0x10)
        j__free(var_28.d)
    
    result.b = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_38)
return result
