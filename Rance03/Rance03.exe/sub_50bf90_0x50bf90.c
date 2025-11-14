// 函数: sub_50bf90
// 地址: 0x50bf90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c18c6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CMotionSound::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CMotionSound::VTable** var_10_1 = arg1
*arg1 = &partsengine::CMotionSound::`vftable'
arg1[6] = 0xf
arg1[5] = 0
arg1[1].b = 0
sub_401ff0(&arg1[1], arg2, 0, 0xffffffff)
int32_t var_4 = 0
arg1[7] = arg3
arg1[8] = 0
arg1[9].b = 0
struct partsengine::ISound::partsengine::CSound::VTable** eax_4 = sub_69adc6(0x30)
arg2 = eax_4
var_4.b = 1

if (eax_4 == 0)
    arg1[8] = 0
else
    arg1[8] = sub_513e50(eax_4, 2, &arg1[1])

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
