// 函数: sub_4053a0
// 地址: 0x4053a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b2e50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_40
int32_t eax_2 = __security_cookie ^ &var_40
int32_t __saved_edi
int32_t var_4c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
bool cond:0 = *(arg1 + 0x68) u< 0x10
*(arg1 + 0x64) = 0
char* eax_5

if (cond:0)
    eax_5 = arg1 + 0x54
else
    eax_5 = *(arg1 + 0x54)

*eax_5 = 0

if (*(arg1 + 0x10) == 0)
    int32_t var_50_1 = 2
    sub_4057c0(arg1 + 0x54, &data_6da15c, 2)
else if (*(arg1 + 0x14) == 0 || *(arg1 + 0x28) == 0)
    int32_t var_50_2 = 2
    sub_4057c0(arg1 + 0x54, &data_6da168, 2)
else if (*(arg1 + 0x4c) == 0 || *(arg1 + 0x50) != 0)
    sub_405780(arg1 + 0x54, 0x6da164)
else
    sub_405780(arg1 + 0x54, 0x6da160)

int32_t var_28
char* ecx_4 = sub_420a40(&var_28, *(arg1 + 4))
int32_t var_4 = 0

if (*(ecx_4 + 0x14) u>= 0x10)
    ecx_4 = *ecx_4

int32_t var_50_3 = *(arg1 + 8) + 1
char* var_54_2 = ecx_4
var_4.b = 1
int32_t* result = sub_403110(arg1 + 0x54, sub_4691f0(&var_40, " %s(%d)"), nullptr, 0xffffffff)
int32_t var_2c

if (var_2c u>= 0x10)
    result = j__free(var_40.d)

int32_t var_2c_1 = 0xf
int32_t var_30 = 0
var_40 = 0
int32_t var_14

if (var_14 u>= 0x10)
    result = j__free(var_28)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_40)
return result
