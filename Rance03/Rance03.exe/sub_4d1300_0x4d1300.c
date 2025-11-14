// 函数: sub_4d1300
// 地址: 0x4d1300
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bf329
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_10 = ecx
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_10_1 = arg1
int32_t var_4 = 0

if (arg1 != 0)
    *(arg1 + 0x14) = 0xf
    *(arg1 + 0x10) = 0
    *arg1 = 0
    sub_401ff0(arg1, arg2, 0, 0xffffffff)
    var_4.b = 1
    *(arg1 + 0x18) = &partsengine::CIntentData::`vftable'
    sub_43f550(&arg1[0x1c], &arg2[7])
    result = arg2[0xa]
    *(arg1 + 0x28) = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
