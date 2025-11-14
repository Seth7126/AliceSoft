// 函数: sub_416d00
// 地址: 0x416d00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b3c50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_4c
int32_t eax_2 = __security_cookie ^ &var_4c
int32_t __saved_esi
int32_t var_54 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_38 = 0xf
*(*(arg1 + 8) + 4) = 0xb
int32_t var_3c = 0
var_4c = 0
sub_402110(&var_4c, "DPAnalysis_SourceChildWnd", 0x19)
int32_t var_c_1 = 0
char* ecx_2 = *(arg1 + 8) + 0x30

if (ecx_2 != &var_4c)
    sub_401ff0(ecx_2, &var_4c, 0, 0xffffffff)

int32_t var_c_2 = 0xffffffff

if (var_38 u>= 0x10)
    j__free(var_4c.d)

int32_t var_20 = 0xf
int32_t var_24 = 0
char var_34 = 0
sub_402110(&var_34, 0x6da027, nullptr)
int32_t var_c_3 = 1
char* ecx_5 = *(arg1 + 8) + 0x48

if (ecx_5 != &var_34)
    sub_401ff0(ecx_5, &var_34, 0, 0xffffffff)

if (var_20 u>= 0x10)
    j__free(var_34.d)

void* eax_6 = *(arg1 + 8)
*(eax_6 + 0x6c) = 0x80000000
*(eax_6 + 0x70) = 0x80000000
*(eax_6 + 0x74) = 0x258
*(eax_6 + 0x78) = 0x80000000
*(*(arg1 + 8) + 0x64) = 0x200
void* result = *(arg1 + 8)
*(result + 0x68) = 0x52000000
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_4c)
return result
