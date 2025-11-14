// 函数: sub_678b70
// 地址: 0x678b70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_9 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d06f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_48
int32_t eax_2 = __security_cookie ^ &var_48
int32_t __saved_edi
int32_t var_5c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = data_75d4fc

if (arg1 s<= 0)
    var_48 = 0
else
    int32_t var_60_1 = arg1
    
    if (sub_4a55e0(esi + 0x178) == 0)
        var_48 = 0
    else
        float xmm0_1 = sub_4f01c0(arg1)
        esi = data_75d4fc
        var_48 = int.d(xmm0_1)

int32_t ebp

if (arg1 s<= 0)
    ebp = 0
else
    int32_t var_60_2 = arg1
    
    if (sub_4a55e0(esi + 0x178) == 0)
        ebp = 0
    else
        ebp = int.d(sub_4f0220(arg1))

int32_t eax_8 = sub_674ad0(arg1, arg2)
int32_t eax_9 = sub_674b30(arg1, arg2)
int32_t var_2c = 0xf
int32_t var_30 = 0
char var_40 = 0
sub_402110(&var_40, 0x70239c, 0x17)
int32_t var_4 = 0
sub_412d60(arg3, &var_40)
int32_t var_4_1 = 0xffffffff

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t var_60_7 = var_48
int32_t var_4_2 = 1
sub_412d60(arg3, sub_4691f0(&var_40, 0x702388))
int32_t var_4_3 = 0xffffffff

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t var_60_10 = ebp
int32_t var_4_4 = 2
sub_412d60(arg3, sub_4691f0(&var_40, 0x70227c))
int32_t var_4_5 = 0xffffffff

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t var_60_13 = eax_8
int32_t var_4_6 = 3
sub_412d60(arg3, sub_4691f0(&var_40, 0x702268))
int32_t var_4_7 = 0xffffffff

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t var_60_16 = eax_9
int32_t var_4_8 = 4
int32_t var_28
int32_t result = sub_412d60(arg3, sub_4691f0(&var_28, 0x7022a8))
int32_t var_14

if (var_14 u>= 0x10)
    result = j__free(var_28)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_48)
return result
