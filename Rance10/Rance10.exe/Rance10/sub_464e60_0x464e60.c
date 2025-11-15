// 函数: sub_464e60
// 地址: 0x464e60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727838
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_44 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = 0xf
int32_t var_18 = 0xf
int32_t var_1c = 0
*(arg3 + 0x34) = 6
char var_2c = 0
int32_t var_8_1 = 0
char* edx = *(arg2 + 4)
void* ebx

if (&edx[4] u> *(arg2 + 8))
    ebx.b = 0
else
    uint32_t ecx_7 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(arg2 + 4) = &edx[4]
    
    if (sub_6c9360(arg2, &var_2c, ecx_7) == 0)
        ecx = var_18
        ebx.b = 0
    else if (sub_464f50(arg1, arg2, sub_46e020(arg3)) == 0)
        ecx = var_18
        ebx.b = 0
    else
        ecx = var_18
        ebx.b = 1

if (ecx u>= 0x10)
    sub_403160(var_2c.d, ecx + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return ebx.b
