// 函数: sub_5642c0
// 地址: 0x5642c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c5a18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_30
int32_t eax_2 = __security_cookie ^ &var_30
int32_t __saved_edi
int32_t var_3c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** eax_6 = arg2 + 0x184

if (eax_6[5] u>= 0x10)
    eax_6 = *eax_6

void** var_40 = eax_6
int32_t var_28
void** ecx = sub_4691f0(&var_28, 0x6e4e58)
int32_t var_4 = 0
int32_t edx = ecx[5]
int32_t edi = ecx[4]
void** eax_8

if (edx u< 0x10)
    eax_8 = ecx
else
    eax_8 = *ecx

if (edx u>= 0x10)
    ecx = *ecx

int32_t var_2c
int32_t var_40_1 = var_2c
sub_468ff0(arg1 + 4, *(arg1 + 8), ecx, eax_8 + edi)
int32_t var_14

if (var_14 u>= 0x10)
    j__free(var_28)

int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_30)
return result
