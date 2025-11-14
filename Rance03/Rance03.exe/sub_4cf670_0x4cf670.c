// 函数: sub_4cf670
// 地址: 0x4cf670
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bf0c1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_10 = ecx
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_10_1 = arg1
int32_t var_4 = 0

if (arg1 != 0)
    void** eax_4 = *arg2
    *(arg1 + 0x14) = 0xf
    *(arg1 + 0x10) = 0
    *arg1 = 0
    result = sub_401ff0(arg1, eax_4, 0, 0xffffffff)
    *(arg1 + 0x18) = &partsengine::CIntentData::`vftable'
    *(arg1 + 0x1c) = 0
    *(arg1 + 0x20) = 0
    *(arg1 + 0x24) = 0
    *(arg1 + 0x28) = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
