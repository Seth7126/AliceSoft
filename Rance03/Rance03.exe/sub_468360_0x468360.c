// 函数: sub_468360
// 地址: 0x468360
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5458
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_30
int32_t eax_2 = __security_cookie ^ &var_30
int32_t __saved_edi
int32_t var_40 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

for (int32_t* i = *(arg1 + 0x20); i != *(arg1 + 0x24); i = &i[1])
    void* ecx = *i
    
    if (*(ecx + 0x1c) == 0)
        int32_t var_4 = 0
        int32_t var_2c
        result = sub_412d60(arg2, sub_468250(ecx, &var_2c))
        int32_t var_4_1 = 0xffffffff
        int32_t var_18
        
        if (var_18 u>= 0x10)
            result = j__free(var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_30)
return result
