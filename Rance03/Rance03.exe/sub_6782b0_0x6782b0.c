// 函数: sub_6782b0
// 地址: 0x6782b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d05d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_50
int32_t eax_2 = __security_cookie ^ &var_50
int32_t __saved_edi
int32_t var_64 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_28
sub_6744b0(&var_28, arg2, arg3)
int32_t var_4 = 0
int32_t eax_5 = sub_673b90(arg2, arg3)
int32_t xmm0 = sub_6745e0(arg2, arg3)
int32_t xmm0_1 = sub_674660(arg2, arg3)
*(arg1 + 0x38) = 1
*(arg1 + 0x1d0) = eax_5
int32_t var_2c = 0xf
int32_t var_30 = 0
char var_40 = 0
sub_402110(&var_40, 0x70249c, 0x1e)
var_4.b = 1
sub_412d60(arg4, &var_40)
var_4.b = 0

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t* eax_6 = &var_28
int32_t var_14

if (var_14 u>= 0x10)
    eax_6 = var_28

int32_t* var_68_6 = eax_6
var_4.b = 2
sub_412d60(arg4, sub_4691f0(&var_40, 0x702484))
var_4.b = 0

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t var_68_9 = eax_5
int32_t var_6c_4 = 0x7024d4
var_4.b = 3
sub_412d60(arg4, sub_4691f0(&var_40, 0x7024d4))
var_4.b = 0

if (var_2c u>= 0x10)
    j__free(var_40.d)

var_6c_4.q = _mm_cvtps_pd(xmm0)
var_4.b = 4
sub_412d60(arg4, sub_4691f0(&var_40, 0x7024bc))
var_4.b = 0

if (var_2c u>= 0x10)
    j__free(var_40.d)

var_6c_4.q = _mm_cvtps_pd(xmm0_1)
var_4.b = 5
sub_412d60(arg4, sub_4691f0(&var_40, 0x7024f0))
var_4.b = 0

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t var_2c_1 = 0xf
int32_t var_30_1 = 0
var_40 = 0
sub_402110(&var_40, 0x7024ec, 1)
var_4.b = 6
int32_t result = sub_412d60(arg4, &var_40)

if (var_2c_1 u>= 0x10)
    result = j__free(var_40.d)

if (var_14 u>= 0x10)
    result = j__free(var_28)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_50)
return result
