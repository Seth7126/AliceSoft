// 函数: sub_47a6b0
// 地址: 0x47a6b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b55b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_40
int32_t eax_2 = __security_cookie ^ &var_40
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_esi
char* edx = (**arg1)(__security_cookie ^ &__saved_esi)
int32_t var_20 = 0xf
int32_t var_24 = 0
char var_34 = 0
void* ecx

if (*edx != 0)
    char* ecx_1 = edx
    char* eax_6
    
    do
        eax_6.b = *ecx_1
        ecx_1 = &ecx_1[1]
    while (eax_6.b != 0)
    ecx = ecx_1 - &ecx_1[1]
else
    ecx = nullptr

sub_402110(&var_34, edx, ecx)
int32_t var_c_1 = 0
char* ecx_3 = &var_34
void* esi_2 = data_75d4e8

if (var_20 u>= 0x10)
    ecx_3 = var_34.d

struct IEXReader::exfile::CEXReader::VTable** result = sub_460420(ecx_3)
struct IEXReader::exfile::CEXReader::VTable** result_1 = result
int32_t ebx

if (result != 0)
    struct IEXReader::exfile::CEXReader::VTable*** var_50_1 = &result_1
    void var_38
    sub_47a0a0(esi_2 + 8, &var_38, *(esi_2 + 8), esi_2 + 8)
    ebx.b = 1
else
    ebx.b = 0

if (var_20 u>= 0x10)
    j__free(var_34.d)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_40)
return result
