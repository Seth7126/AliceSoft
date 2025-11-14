// 函数: sub_565620
// 地址: 0x565620
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_5 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c59e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_48
int32_t eax_2 = __security_cookie ^ &var_48
int32_t __saved_edi
int32_t var_5c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_2c = 0xf
void* var_30 = nullptr
char var_40 = 0
sub_402110(&var_40, 0x6e4f44, 9)
int32_t var_4 = 0
char* esi = &var_40
char* edx = &var_40
int32_t var_44
int32_t var_60 = var_44

if (var_2c u>= 0x10)
    esi = var_40.d

if (var_2c u>= 0x10)
    edx = var_40.d

sub_468ff0(arg1 + 4, *(arg1 + 8), edx, var_30 + esi)
int32_t var_4_1 = 0xffffffff

if (var_2c u>= 0x10)
    j__free(var_40.d)

uint32_t var_64
var_64.q = _mm_cvtps_pd(*(arg2 + 0xac))
int32_t* var_6c
var_6c.q = _mm_cvtps_pd(*(arg2 + 0xa8))
int64_t var_74 = _mm_cvtps_pd(*(arg2 + 0xa4))
void** ecx_2 = sub_4691f0(&var_40, "\t\t%f, %f, %f")
int32_t var_4_2 = 1
int32_t edx_1 = ecx_2[5]
int32_t esi_1 = ecx_2[4]
void** eax_8

if (edx_1 u< 0x10)
    eax_8 = ecx_2
else
    eax_8 = *ecx_2

if (edx_1 u>= 0x10)
    ecx_2 = *ecx_2

int32_t var_60_2 = var_44
sub_468ff0(arg1 + 4, *(arg1 + 8), ecx_2, eax_8 + esi_1)
int32_t var_4_3 = 0xffffffff

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
sub_402110(&var_28, 0x6e4f38, 2)
int32_t var_4_4 = 2
char* esi_2 = &var_28
int32_t* edx_2 = &var_28
int32_t var_60_4 = var_44

if (var_14 u>= 0x10)
    esi_2 = var_28.d

if (var_14 u>= 0x10)
    edx_2 = var_28.d

sub_468ff0(arg1 + 4, *(arg1 + 8), edx_2, &esi_2[var_18])

if (var_14 u>= 0x10)
    j__free(var_28.d)

int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_48)
return result
