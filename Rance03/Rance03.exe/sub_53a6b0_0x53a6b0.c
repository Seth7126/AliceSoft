// 函数: sub_53a6b0
// 地址: 0x53a6b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5378
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_2c
int32_t eax_2 = __security_cookie ^ &var_2c
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esi_2

if (*(arg1 + 0x3c) != 0)
    int32_t* ecx = *(arg1 + 0x14)
    
    if (ecx != 0)
        (*(*ecx + 4))(eax_4)
        *(arg1 + 0x14) = 0
    
    int32_t* ecx_1 = *(arg1 + 0x10)
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 4))(eax_4)
        *(arg1 + 0x10) = 0
    
    int32_t var_40_1 = arg2
    int32_t var_4 = 0
    int32_t var_4_1 = 0xffffffff
    char var_28
    esi_2 = sub_58e5f0(*(arg1 + 0x3c), sub_4691f0(&var_28, "CG\CG%05d.png"))
    int32_t var_14
    
    if (var_14 u>= 0x10)
        j__free(var_28.d)
    
    int32_t var_14_1 = 0xf
    int32_t var_18_1 = 0
    var_28 = 0
    *(arg1 + 0x10) = esi_2

struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(arg1 + 0x3c) == 0 || esi_2 == 0)
    result.b = 0
else
    result.b = sub_53a7b0(arg1, esi_2).b != 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_2c)
return result
