// 函数: sub_482c10
// 地址: 0x482c10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726f50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &kiwi::CSoundDataOgg::`vftable'{for `common::SuicideRefCounter<class ISoundData>'}
arg1[5] = arg1[4]
uint32_t (* ecx)[0x4] = arg1[0x10]

if (ecx != 0)
    sub_6c31d0(ecx)
    int32_t var_20_1 = 0x2d0
    operator new(arg1[0x10])
    arg1[0x10] = 0

arg1[0x11].b = 0
sub_4834f0(&arg1[2])
void* ecx_2 = arg1[4]

if (ecx_2 != 0)
    sub_403160(ecx_2, arg1[6] - ecx_2, 1)
    arg1[4] = 0
    arg1[5] = 0
    arg1[6] = 0

sub_4834f0(&arg1[2])
int32_t result = sub_403160(arg1[2], 1, 0x14)
fsbase->NtTib.ExceptionList = ExceptionList
return result
