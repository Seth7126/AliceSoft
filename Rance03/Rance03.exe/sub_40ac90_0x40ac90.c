// 函数: sub_40ac90
// 地址: 0x40ac90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b2f68
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct dpanalysis::IToken::dpanalysis::CCastToken<11>::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct dpanalysis::IToken::dpanalysis::CCastToken<11>::VTable** var_10_1 = arg1
*arg1 = &dpanalysis::CCastToken<11>::`vftable'{for `dpanalysis::IToken'}
int32_t var_4 = 0
int32_t* ecx = arg1[1]

if (ecx != 0)
    (*(*ecx + 8))(1)

*arg1 = &dpanalysis::IToken::`vftable'

if ((arg2 & 1) != 0)
    j__free(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
