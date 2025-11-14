// 函数: sub_5bccb0
// 地址: 0x5bccb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5458
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_30
int32_t eax_2 = __security_cookie ^ &var_30
int32_t __saved_edi
int32_t var_40 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_1c = 0
char var_2c = 0
int32_t var_4 = 0
void* result = sub_468d00(arg2, &var_2c)
char* edx_1

if (result.b != 0)
    edx_1 = *(arg2 + 4)

int32_t* ebx

if (result.b == 0 || &edx_1[4] u> *(arg2 + 8))
    ebx.b = 0
else
    int32_t ecx_7 =
        ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
    *(arg2 + 4) = &edx_1[4]
    *arg1 = ecx_7
    ebx.b = 1

if (0xf u>= 0x10)
    j__free(var_2c.d)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_30)
return result
