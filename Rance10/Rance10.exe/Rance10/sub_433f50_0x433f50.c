// 函数: sub_433f50
// 地址: 0x433f50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a7ab
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct apeg::CApegDecoder::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct apeg::CApegDecoder::VTable** var_14_1 = arg1
*arg1 = &apeg::CApegDecoder::`vftable'
arg1[1] = &filesystem::CFile::`vftable'
arg1[2] = 0xffffffff
arg1[3] = 0
arg1[4] = 0
int32_t var_8_1 = 0
sub_434df0(&arg1[5])
arg1[0x2b] = 0
arg1[0x2c] = 0
arg1[0x2d] = 0
arg1[0x2e] = &apeg::CPictureDecoder::`vftable'
arg1[0x2f] = &arg1[5]
__builtin_memset(&arg1[0x30], 0, 0x18)
sub_447cb0(&arg1[0x36], &arg1[5])
arg1[0x102] = 0
arg1[0x103] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
