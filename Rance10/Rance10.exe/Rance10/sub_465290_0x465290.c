// 函数: sub_465290
// 地址: 0x465290
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = 0xf
int32_t var_1c = 0
int32_t var_18 = 0xf
char var_2c = 0
int32_t var_8_1 = 0
char* esi = *(arg1 + 4)
void* ebx

if (&esi[4] u> *(arg1 + 8))
    ebx.b = 0
else
    uint32_t edx_6 = ((zx.d(esi[3]) << 8 | zx.d(esi[2])) << 8 | zx.d(esi[1])) << 8 | zx.d(*esi)
    *(arg1 + 4) = &esi[4]
    
    if (sub_6c9360(arg1, &var_2c, edx_6).b == 0)
        ecx = var_18
        ebx.b = 0
    else
        sub_46df20(arg2, &var_2c)
        ecx = var_18
        ebx.b = 1
        *(arg2 + 0x34) = 3

if (ecx u>= 0x10)
    sub_403160(var_2c.d, ecx + 1, 1)

void* result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
