// 函数: sub_487f80
// 地址: 0x487f80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_40 = 1
struct kiwi::CSoundChannel::VTable** esi = sub_47ffe0(arg1 + 0x5c, arg2)
char* ebx

if (esi != 0)
    struct kiwi::CSoundChannel::VTable** var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_403490(&var_2c, 0x75cea5, nullptr)
    int32_t var_8_1 = 0
    int32_t var_8_2 = 0xffffffff
    ebx.b = sub_489260(esi, arg3, arg4, &var_2c) == 0
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    int32_t var_18_2 = 0xf
    int32_t var_1c_2 = 0
    var_2c = 0

struct kiwi::CSoundChannel::VTable** result

if (esi == 0 || ebx.b != 0)
    result.b = 0
else
    int32_t eax_6 = arg5
    
    if (eax_6 s< 0)
        int32_t eax_7
        eax_7.b = esi[3].b == 0
        eax_6 = eax_7 + 1
    
    int32_t var_40_2 = 0xffffffff
    esi[4] = eax_6
    long double x87_r0
    sub_4864e0(*(arg1 + 0x9c), x87_r0, esi)
    sub_4893f0(esi, 0, 0)
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
