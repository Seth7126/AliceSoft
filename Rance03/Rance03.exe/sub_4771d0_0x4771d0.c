// 函数: sub_4771d0
// 地址: 0x4771d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b9f8b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct kiwi::CSoundChannel::VTable** var_10 = arg1
int32_t __saved_esi
int32_t eax_2 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct kiwi::CSoundChannel::VTable** var_10_1 = arg1
*arg1 = &kiwi::CSoundChannel::`vftable'
int32_t var_4 = 0
(*(arg1[1]->vFunc_0 + 4))(eax_2)

if (arg1[0xa] u>= 0x10)
    j__free(arg1[5])

arg1[0xa] = 0xf
arg1[9] = 0
arg1[5].b = 0

if ((arg2 & 1) != 0)
    j__free(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
