// 函数: sub_5140e0
// 地址: 0x5140e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b707b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::ISound::partsengine::CSound::VTable** var_10 = arg1
int32_t var_14 = __security_cookie ^ &var_10
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::ISound::partsengine::CSound::VTable** eax_3 = sub_69adc6(0x30)
var_10 = eax_3
int32_t var_4 = 0

if (eax_3 == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0

struct partsengine::ISound::partsengine::CSound::VTable** result = sub_513e50(eax_3, 3, arg2)
fsbase->NtTib.ExceptionList = ExceptionList
return result
