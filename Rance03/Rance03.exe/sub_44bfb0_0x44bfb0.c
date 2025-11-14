// 函数: sub_44bfb0
// 地址: 0x44bfb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b5548
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_44
int32_t eax_2 = __security_cookie ^ &var_44
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
char* edx = (**arg3)(__security_cookie ^ &__saved_edi)
int32_t var_20 = 0xf
int32_t var_24 = 0
char var_34 = 0
void* ecx

if (*edx != 0)
    char* ecx_1 = edx
    char* eax_9
    
    do
        eax_9.b = *ecx_1
        ecx_1 = &ecx_1[1]
    while (eax_9.b != 0)
    ecx = ecx_1 - &ecx_1[1]
else
    ecx = nullptr

sub_402110(&var_34, edx, ecx)
int32_t var_c_1 = 0
char* eax_10 = &var_34

if (var_20 u>= 0x10)
    eax_10 = var_34.d

int32_t var_c_2 = 0xffffffff
int32_t* esi_2 = sub_449cc0(data_75d4c8, eax_10)

if (var_20 u>= 0x10)
    j__free(var_34.d)

int32_t var_20_1 = 0xf
int32_t var_24_1 = 0
var_34 = 0
int32_t* result

if (esi_2 != 0)
    *arg2 = (*(*esi_2 + 0x10))()
    *arg4 = (*(*esi_2 + 0x14))()
    *arg5 = (*(*esi_2 + 0x18))()
    int32_t ecx_9
    ecx_9.b = (*(*esi_2 + 0x24))() != 0
    *arg6 = ecx_9
    int32_t ecx_11
    ecx_11.b = (*(*esi_2 + 0x28))() != 0
    *arg7 = ecx_11
    (*(*esi_2 + 4))()
    result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return result
