// 函数: sub_475820
// 地址: 0x475820
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b9da9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct kiwi::CKiwiSoundEngine::VTable** var_10 = arg1
int32_t __saved_esi
int32_t eax_2 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct kiwi::CKiwiSoundEngine::VTable** var_10_1 = arg1
*arg1 = &kiwi::CKiwiSoundEngine::`vftable'
int32_t var_4 = 1
sub_4759b0(arg1)
var_4.b = 0
int32_t* ecx = arg1[0x24c]
arg1[0x24b] = &kiwi::CGroupTree::`vftable'{for `kiwi::IGroupTree'}

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    arg1[0x24c] = 0

int32_t var_4_1 = 0xffffffff
arg1[3] = &kiwi::CSoundVolumeManager::`vftable'{for `IVolumeValancer'}
int32_t eax_4 = arg1[0x245]

if (eax_4 != 0)
    j__free(eax_4)
    arg1[0x245] = 0
    arg1[0x246] = 0
    arg1[0x247] = 0

int32_t result = `eh vector vbase constructor iterator'(&arg1[4], 0x24, 0x40, sub_4240a0)
fsbase->NtTib.ExceptionList = ExceptionList
return result
