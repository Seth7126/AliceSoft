// 函数: sub_5f1b90
// 地址: 0x5f1b90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5458
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_30
int32_t eax_2 = __security_cookie ^ &var_30
int32_t __saved_edi
int32_t var_40 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edi_1 = *(arg1 + 0x44) * *(arg2 + 8)
HFONT result

if (*(arg1 + 0xe0) == 0 || *(arg1 + 0x10c) != edi_1 || *(arg1 + 0x108) != *(arg2 + 4))
    int32_t var_2c
    char* eax_5 = sub_5f4010(arg2, &var_2c)
    int32_t var_4 = 0
    
    if (arg1 + 0xe8 != eax_5)
        sub_401ff0(arg1 + 0xe8, eax_5, 0, 0xffffffff)
    
    int32_t var_18
    
    if (var_18 u>= 0x10)
        j__free(var_2c)
    
    *(arg1 + 0xe4) = edi_1
    *(arg1 + 0x100) = 0
    result = sub_697f40(arg1 + 0xdc)
    
    if (result.b != 0)
        *(arg1 + 0x108) = *(arg2 + 4)
        *(arg1 + 0x10c) = edi_1
        result.b = 1
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_30)
return result
