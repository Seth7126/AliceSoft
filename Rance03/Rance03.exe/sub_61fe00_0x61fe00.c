// 函数: sub_61fe00
// 地址: 0x61fe00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ce45b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct kiwi::ISoundBufferFactory::kiwi::CDirectSound::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
struct kiwi::ISoundBufferFactory::kiwi::CDirectSound::VTable** var_10_1 = arg1
*arg1 = &kiwi::CDirectSound::`vftable'{for `kiwi::ISoundBufferFactory'}
int32_t var_4 = 0
int32_t* ecx = arg1[7]

if (ecx != 0)
    result = (*(*ecx + 8))(ecx)
    arg1[7] = 0

int32_t* ecx_1 = arg1[3]

if (ecx_1 != 0)
    result = (*(*ecx_1 + 8))(ecx_1)
    arg1[3] = 0

int32_t var_4_1 = 0xffffffff
int32_t* ecx_2 = arg1[7]
arg1[5] = &kiwi::CNoizeStepBuf::`vftable'

if (ecx_2 != 0)
    result = (*(*ecx_2 + 8))(ecx_2)
    arg1[7] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
