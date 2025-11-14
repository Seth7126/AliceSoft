// 函数: sub_41c300
// 地址: 0x41c300
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b4408
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_2c
int32_t eax_2 = __security_cookie ^ &var_2c
int32_t __saved_edi
int32_t var_38 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x2c) = arg4
int32_t eax_6 = data_75d498
int32_t var_3c = eax_6
*(arg1 + 0x28) = arg3
data_75d498 = eax_6 + 1
void** eax_8 = sub_4691f0(&var_2c, "DPAnalysis_TreeViewWnd%d")
int32_t var_4 = 0
char* ecx_1 = *(arg1 + 8) + 0x30

if (ecx_1 != eax_8)
    sub_401ff0(ecx_1, eax_8, 0, 0xffffffff)

int32_t var_18

if (var_18 u>= 0x10)
    j__free(var_2c)

*(*(arg1 + 8) + 0x64) = 0
*(*(arg1 + 8) + 0x68) = 0x50000000
*(*(arg1 + 8) + 0x7c) = arg2
void* eax_12 = *(arg1 + 8)
*(eax_12 + 0x6c) = 0
*(eax_12 + 0x70) = 0
*(eax_12 + 0x74) = 0x80000000
*(eax_12 + 0x78) = 0x80000000
sub_41c5c0(arg1)
*(*(arg1 + 8) + 0x60) = arg3
*(*(arg1 + 8) + 0x84) = arg1
HWND result

if (sub_698a60(*(arg1 + 8)).b == 0)
    result.b = 0
else
    *(arg1 + 0xc) = **(arg1 + 8)
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_2c)
return result
