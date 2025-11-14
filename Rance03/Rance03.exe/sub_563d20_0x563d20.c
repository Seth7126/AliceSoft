// 函数: sub_563d20
// 地址: 0x563d20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b2ad8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_34
int32_t eax_2 = __security_cookie ^ &var_34
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_2
int32_t __saved_edi_1 = __saved_edi_2
int32_t __saved_edi
int32_t var_40 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** ecx = arg2

if (ecx[5] u>= 0x10)
    ecx = *ecx

int64_t var_48_1 = _mm_cvtps_pd(*(arg3 + 8))
int64_t var_50 = _mm_cvtps_pd(*(arg3 + 4))
void** var_54 = ecx
char const* const var_58 = "\t%s = %f, %f\r\n\r\n"
int32_t var_2c
void** ecx_1 = sub_4691f0(&var_2c, "\t%s = %f, %f\r\n\r\n")
int32_t var_4 = 0
int32_t edx = ecx_1[5]
int32_t edi = ecx_1[4]
void** eax_7

if (edx u< 0x10)
    eax_7 = ecx_1
else
    eax_7 = *ecx_1

if (edx u>= 0x10)
    ecx_1 = *ecx_1

int32_t var_30
var_48_1:4.d = var_30
var_48_1.d = eax_7 + edi
var_50:4.d = ecx_1
var_50.d = *(arg1 + 8)
int32_t result = sub_468ff0(arg1 + 4, var_50, var_48_1)
int32_t var_18

if (var_18 u>= 0x10)
    var_48_1:4.d = var_2c
    result = j__free()

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_34)
return result
