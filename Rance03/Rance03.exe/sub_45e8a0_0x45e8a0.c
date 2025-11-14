// 函数: sub_45e8a0
// 地址: 0x45e8a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b42c1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_10 = ecx
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
struct exfile::CToken::VTable** var_10_1 = arg1
int32_t var_4 = 0

if (arg1 != 0)
    *arg1 = &exfile::CToken::`vftable'
    arg1[6] = 0xf
    arg1[5] = 0
    arg1[1].b = 0
    sub_401ff0(&arg1[1], arg2 + 4, 0, 0xffffffff)
    arg1[7] = *(arg2 + 0x1c)
    result = *(arg2 + 0x20)
    arg1[8] = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
