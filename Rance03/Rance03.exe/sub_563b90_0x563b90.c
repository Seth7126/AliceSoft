// 函数: sub_563b90
// 地址: 0x563b90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b2ad8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_34
int32_t eax_2 = __security_cookie ^ &var_34
int32_t __saved_edi
int32_t var_40 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** eax_5 = arg2

if (eax_5[5] u>= 0x10)
    eax_5 = *eax_5

int32_t var_44 = arg3
void** var_48 = eax_5
int32_t var_2c
void** ecx_1 = sub_4691f0(&var_2c, "\t%s = %d\r\n\r\n")
int32_t var_4 = 0
int32_t edx = ecx_1[5]
int32_t edi = ecx_1[4]
void** eax_7

if (edx u< 0x10)
    eax_7 = ecx_1
else
    eax_7 = *ecx_1

if (edx u>= 0x10)
    ecx_1 = *ecx_1

int32_t var_30
int32_t var_44_1 = var_30
int32_t result = sub_468ff0(arg1 + 4, *(arg1 + 8), ecx_1, eax_7 + edi)
int32_t var_18

if (var_18 u>= 0x10)
    result = j__free(var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_34)
return result
