// 函数: sub_44cab0
// 地址: 0x44cab0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5378
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_2c
int32_t eax_2 = __security_cookie ^ &var_2c
int32_t edi
int32_t var_38 = edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* edx = (**arg2)(__security_cookie ^ &var_38)
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
void* ecx_1

if (*edx != 0)
    char* ecx_2 = edx
    char* eax_6
    
    do
        eax_6.b = *ecx_2
        ecx_2 = &ecx_2[1]
    while (eax_6.b != 0)
    ecx_1 = ecx_2 - &ecx_2[1]
else
    ecx_1 = nullptr

sub_402110(&var_28, edx, ecx_1)
int32_t var_4 = 0
char* eax_7 = &var_28
void* edi_2 = data_75d4cc

if (var_14 u>= 0x10)
    eax_7 = var_28.d

int32_t* eax_8 = sub_44a140(eax_7)

if (eax_8 == 0)
    eax_8.b = 0
else
    int32_t var_40_2 = arg1
    void* eax_9 = sub_44e5c0(edi_2 + 0x288)
    
    if (eax_9 == 0)
        (*(*eax_8 + 4))()
        eax_8.b = 0
    else
        sub_44eaf0(eax_9, eax_8)
        (*(*eax_8 + 4))()
        eax_8.b = 1

int32_t result
result.b = eax_8.b != 0

if (var_14 u>= 0x10)
    j__free(var_28.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_2c)
return result
