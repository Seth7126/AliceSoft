// 函数: sub_4f3670
// 地址: 0x4f3670
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_736218
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_20 = nullptr
int32_t var_18 = 0
int32_t var_8_1 = 0
int32_t* var_1c = nullptr
sub_4f03f0(*(arg1 + 4), &var_20)
int32_t* ecx_1 = var_20
char var_14 = 0
int32_t eax_5 = (var_1c - ecx_1) s>> 2
sub_4f37d0(eax_5, var_1c, ecx_1, eax_5, &var_14)

if (arg7 != 0)
    void* eax_6 = *(arg1 + 0x14)
    
    if (eax_6 != 0 && eax_6 + 0x200 != arg8)
        sub_403590(eax_6 + 0x200, arg8, 0, 0xffffffff)
    
    sub_4fc850(arg1 + 0x10, arg2, &var_20)

void* eax_8 = sub_4f0240(*(arg1 + 4))
void* ecx_5 = *(arg1 + 0x25c)

if (ecx_5 != eax_8)
    if (ecx_5 != 0)
        sub_4f0350(ecx_5)
    
    if (eax_8 != 0)
        sub_4f02d0(eax_8)
    
    *(arg1 + 0x25c) = eax_8

int80_t x87_r0
sub_4f3550(arg1, x87_r0, arg2, arg3, arg4, arg5, arg6)
void* result = sub_4f3440(&var_20)
int32_t* ecx_8 = var_20

if (ecx_8 != 0)
    result = sub_403160(ecx_8, (var_18 - ecx_8) s>> 2, 4)

fsbase->NtTib.ExceptionList = ExceptionList
return result
