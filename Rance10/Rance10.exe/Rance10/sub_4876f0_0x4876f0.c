// 函数: sub_4876f0
// 地址: 0x4876f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72eedc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
*arg1 = &kiwi::CKiwiSoundEngine::`vftable'{for `kiwi::IFinalizable'}
sub_487840(arg1)
var_8_1.b = 1
int32_t* ecx = arg1[0x24a]
arg1[0x249] = &kiwi::CGroupTree::`vftable'{for `kiwi::IGroupTree'}

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    arg1[0x24a] = 0

sub_485090(&arg1[3])

if ((arg2 & 1) != 0)
    int32_t var_1c_1 = 0x940
    operator new(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
