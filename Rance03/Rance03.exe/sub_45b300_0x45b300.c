// 函数: sub_45b300
// 地址: 0x45b300
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5378
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_2c
int32_t eax_2 = __security_cookie ^ &var_2c
int32_t __saved_edi
int32_t var_3c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
int32_t var_4 = 0
char* esi = *(arg1 + 4)
void* ebx

if (&esi[4] u> *(arg1 + 8))
    ebx.b = 0
else
    uint32_t edx_7 = ((zx.d(esi[3]) << 8 | zx.d(esi[2])) << 8 | zx.d(esi[1])) << 8 | zx.d(*esi)
    *(arg1 + 4) = &esi[4]
    
    if (sub_468c20(arg1, &var_28, edx_7) == 0)
        ebx.b = 0
    else
        sub_4648a0(arg2, &var_28)
        *(arg2 + 8) = 3
        ebx.b = 1

if (var_14 u>= 0x10)
    j__free(var_28.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_2c)
return ebx.b
