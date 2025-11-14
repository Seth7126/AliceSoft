// 函数: sub_406540
// 地址: 0x406540
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b2f68
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct dpanalysis::IToken::dpanalysis::CDotOperatorToken::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct dpanalysis::IToken::dpanalysis::CDotOperatorToken::VTable** var_10_1 = arg1
*arg1 = &dpanalysis::CDotOperatorToken::`vftable'{for `dpanalysis::IToken'}
int32_t var_4 = 0
int32_t* ecx = arg1[1]

if (ecx != 0)
    (*(*ecx + 8))(1)

int32_t* ecx_1 = arg1[2]

if (ecx_1 != 0)
    (*(*ecx_1 + 8))(1)

*arg1 = &dpanalysis::IToken::`vftable'

if ((arg2 & 1) != 0)
    j__free(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
