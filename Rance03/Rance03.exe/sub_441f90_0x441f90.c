// 函数: sub_441f90
// 地址: 0x441f90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b6974
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct apeg::CApegDecoder::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct apeg::CApegDecoder::VTable** var_10_1 = arg1
*arg1 = &apeg::CApegDecoder::`vftable'
arg1[1] = &filesystem::CFile::`vftable'
arg1[2] = 0xffffffff
arg1[3] = 0
arg1[4] = 0
int32_t var_4 = 0
sub_442750(&arg1[5])
arg1[0x2c] = 0
arg1[0x2d] = 0
arg1[0x2e] = 0
var_4.b = 2
arg1[0x2f] = &apeg::CPictureDecoder::`vftable'
arg1[0x30] = &arg1[5]
__builtin_memset(&arg1[0x31], 0, 0x14)
sub_446250(&arg1[0x36], &arg1[5])
arg1[0x102] = 0
arg1[0x103].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
