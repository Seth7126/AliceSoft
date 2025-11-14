// 函数: sub_5065e0
// 地址: 0x5065e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c15a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CSpriteEngineWrapper::VTable* const var_10 = arg1
int32_t var_14 = __security_cookie ^ &var_10
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CSpriteEngineWrapper::VTable edx = arg1

if (edx == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0

var_10 = &partsengine::CSpriteEngineWrapper::`vftable'
int32_t var_4 = 0
int32_t var_18 = *(edx + 8)
int32_t* result = sub_44e630(data_75d4cc + 0x288)
fsbase->NtTib.ExceptionList = ExceptionList
return result
