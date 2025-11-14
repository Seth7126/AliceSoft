// 函数: sub_519700
// 地址: 0x519700
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c2768
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_34 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_518020(arg1)
sub_403110(arg1 + 0xdc, arg2, nullptr, 0xffffffff)
struct _EXCEPTION_REGISTRATION_RECORD** var_24 = nullptr
int32_t var_20 = 0
int32_t var_1c = 0
int32_t var_c_1 = 0
sub_51bbb0(arg1, &var_24, arg1 + 0xdc)
int32_t result = sub_519950(arg1, &var_24)
struct _EXCEPTION_REGISTRATION_RECORD** esi_1 = var_24
*(arg1 + 0xd8) = 1

if (esi_1 != 0)
    sub_4107c0(esi_1, var_20)
    result = j__free(esi_1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
