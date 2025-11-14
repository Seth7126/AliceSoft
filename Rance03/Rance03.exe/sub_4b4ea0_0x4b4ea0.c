// 函数: sub_4b4ea0
// 地址: 0x4b4ea0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b4c71
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CGUIMessageVariable::VTable** var_10 = arg1
int32_t var_14 = __security_cookie ^ &var_10
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
var_10 = arg2
int32_t var_4 = 0

if (arg2 != 0)
    *arg2 = &partsengine::CGUIMessageVariable::`vftable'
    arg2[1] = *(arg3 + 4)
    arg2[2] = *(arg3 + 8)
    arg2[3] = *(arg3 + 0xc)
    int32_t eax_5
    eax_5.b = *(arg3 + 0x10)
    arg2[4].b = eax_5.b
    arg2[0xa] = 0xf
    arg2[9] = 0
    arg2[5].b = 0
    result = sub_401ff0(&arg2[5], arg3 + 0x14, 0, 0xffffffff)

fsbase->NtTib.ExceptionList = ExceptionList
return result
