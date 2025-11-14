// 函数: sub_41a840
// 地址: 0x41a840
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b4350
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_4c
int32_t eax_2 = __security_cookie ^ &var_4c
int32_t __saved_esi
int32_t var_54 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_5 = data_75d494
int32_t var_58 = eax_5
data_75d494 = eax_5 + 1
int32_t var_34
void** eax_7 = sub_4691f0(&var_34, "DPAnalysis_TextChildWnd%d")
int32_t var_c_1 = 0
char* ecx_1 = *(arg1 + 8) + 0x30

if (ecx_1 != eax_7)
    sub_401ff0(ecx_1, eax_7, 0, 0xffffffff)

int32_t var_c_2 = 0xffffffff
int32_t var_20

if (var_20 u>= 0x10)
    j__free(var_34)

int32_t var_38 = 0xf
int32_t var_3c = 0
var_4c = 0
sub_402110(&var_4c, 0x6da079, nullptr)
int32_t var_c_3 = 1
char* ecx_4 = *(arg1 + 8) + 0x48

if (ecx_4 != &var_4c)
    sub_401ff0(ecx_4, &var_4c, 0, 0xffffffff)

if (var_38 u>= 0x10)
    j__free(var_4c.d)

void* result = *(arg1 + 8)
*(result + 0x68) = 0x50840000
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_4c)
return result
