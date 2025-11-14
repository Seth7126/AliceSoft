// 函数: sub_418860
// 地址: 0x418860
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b2a68
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_2c
int32_t eax_2 = __security_cookie ^ &var_2c
int32_t __saved_esi
int32_t eax_4 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1[2] + 0x7c) = arg2
(*(*arg1 + 0x8c))(eax_4)
int32_t eax_7 = data_75d490
int32_t var_38 = eax_7
data_75d490 = eax_7 + 1
int32_t var_28
void** eax_9 = sub_4691f0(&var_28, "DPAnalysis_SplitWndLRClass%d")
int32_t var_4 = 0
char* ecx_1 = arg1[2] + 0x30

if (ecx_1 != eax_9)
    sub_401ff0(ecx_1, eax_9, 0, 0xffffffff)

int32_t var_14

if (var_14 u>= 0x10)
    j__free(var_28)

sub_41c5c0(arg1)
*(arg1[2] + 0x60) = arg3
*(arg1[2] + 0x84) = arg1
HWND result

if (sub_698a60(arg1[2]).b == 0)
    result.b = 0
else
    arg1[3] = *arg1[2]
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_2c)
return result
