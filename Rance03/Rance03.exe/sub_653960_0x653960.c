// 函数: sub_653960
// 地址: 0x653960
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b79fb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct dpparts::CColorDialog::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct dpparts::CColorDialog::VTable** var_10_1 = arg1
*arg1 = &dpparts::CColorDialog::`vftable'
arg1[1] = 0
arg1[2] = 0
arg1[3] = 0
int32_t var_4 = 0
arg1[4] = sub_69adc6(0x24)
sub_653a70(&arg1[1])
_memset(arg1[1], 0xff, (arg1[2] - arg1[1]) & 0xfffffffc)
__builtin_memset(arg1[4], 0, 0x24)
arg1[4]->vFunc_0 = 0x24
arg1[4][4].vFunc_0 = arg1[1]
arg1[4][5].vFunc_0 = 1
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
