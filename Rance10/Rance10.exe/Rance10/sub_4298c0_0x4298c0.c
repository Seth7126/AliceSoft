// 函数: sub_4298c0
// 地址: 0x4298c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729b31
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
struct advengine::CToken::VTable** var_14_1 = arg1
int32_t var_8_1 = 0

if (arg1 != 0)
    *arg1 = &advengine::CToken::`vftable'
    arg1[1] = *(arg2 + 4)
    arg1[7] = 0xf
    arg1[6] = 0
    arg1[2].b = 0
    sub_403590(&arg1[2], arg2 + 8, 0, 0xffffffff)
    arg1[8] = *(arg2 + 0x20)
    result = *(arg2 + 0x24)
    arg1[9] = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
