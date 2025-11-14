// 函数: sub_50a690
// 地址: 0x50a690
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6baba8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_2c
int32_t eax_2 = __security_cookie ^ &var_2c
int32_t __saved_edi
int32_t var_40 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t i = 0

if (*(arg1 + 0x30) s> 0)
    do
        void* ecx
        
        if (*(arg1 + 0x28) u< 0x10)
            ecx = arg1 + 0x14
        else
            ecx = *(arg1 + 0x14)
        
        int32_t var_44_1 = *(arg1 + 0x2c) + i
        int32_t var_4 = 0
        result = sub_412d60(arg2, sub_4691f0(&var_2c, ecx))
        int32_t var_4_1 = 0xffffffff
        int32_t var_18
        
        if (var_18 u>= 0x10)
            result = j__free(var_2c)
        
        i += 1
    while (i s< *(arg1 + 0x30))

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_2c)
return result
