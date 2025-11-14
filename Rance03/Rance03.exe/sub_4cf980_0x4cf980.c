// 函数: sub_4cf980
// 地址: 0x4cf980
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bf0e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_40 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList

if (sub_4cf920(arg1, arg2) != 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0

struct partsengine::CActivityData::VTable* var_38
struct partsengine::CActivityData::VTable** eax_4 = sub_4c9680(&var_38)
int32_t var_4 = 0
sub_4cfa10(sub_4d01c0(arg1 + 4, arg2), eax_4)
sub_4c9780(&var_38)
int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
