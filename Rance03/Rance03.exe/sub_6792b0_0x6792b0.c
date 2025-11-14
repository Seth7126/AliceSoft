// 函数: sub_6792b0
// 地址: 0x6792b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d07d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_48
int32_t eax_2 = __security_cookie ^ &var_48
int32_t __saved_edi
int32_t var_5c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_28
sub_674e80(&var_28, arg1, arg2)
int32_t var_4 = 0
void* ebx = data_75d4fc

if (arg1 s<= 0)
    var_48 = 0
else
    int32_t var_60_1 = arg1
    
    if (sub_4a55e0(ebx + 0x178) == 0)
        var_48 = 0
    else
        float xmm0_1 = sub_4f01c0(arg1)
        ebx = data_75d4fc
        var_48 = int.d(xmm0_1)

int32_t ebx_1

if (arg1 s<= 0)
    ebx_1 = 0
else
    int32_t var_60_2 = arg1
    
    if (sub_4a55e0(ebx + 0x178) == 0)
        ebx_1 = 0
    else
        ebx_1 = int.d(sub_4f0220(arg1))

int32_t eax_8 = sub_674fb0(arg1, arg2)
int32_t eax_9 = sub_675010(arg1, arg2)
int32_t var_2c = 0xf
int32_t var_30 = 0
char var_40 = 0
sub_402110(&var_40, 0x702700, 0x17)
var_4.b = 1
sub_412d60(arg3, &var_40)
var_4.b = 0

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t* eax_10 = &var_28
int32_t var_14

if (var_14 u>= 0x10)
    eax_10 = var_28

int32_t* var_60_7 = eax_10
var_4.b = 2
sub_412d60(arg3, sub_4691f0(&var_40, 0x7026ec))
var_4.b = 0

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t var_60_10 = var_48
var_4.b = 3
sub_412d60(arg3, sub_4691f0(&var_40, 0x70272c))
var_4.b = 0

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t var_60_13 = ebx_1
var_4.b = 4
sub_412d60(arg3, sub_4691f0(&var_40, 0x702718))
var_4.b = 0

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t var_60_16 = eax_8
var_4.b = 5
sub_412d60(arg3, sub_4691f0(&var_40, 0x702754))
var_4.b = 0

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t var_60_19 = eax_9
var_4.b = 6
int32_t result = sub_412d60(arg3, sub_4691f0(&var_40, 0x702740))

if (var_2c u>= 0x10)
    result = j__free(var_40.d)

if (var_14 u>= 0x10)
    result = j__free(var_28)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_48)
return result
