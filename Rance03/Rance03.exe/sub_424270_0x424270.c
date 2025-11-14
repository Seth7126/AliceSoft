// 函数: sub_424270
// 地址: 0x424270
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b4c19
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
int32_t __saved_edi
int32_t var_20 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_10_1 = 0
*(arg2 + 0x14) = 0xf
*(arg2 + 0x10) = 0
*arg2 = 0
int32_t var_4 = 0
void* i = *(arg1 + 0x114)
int32_t var_10_2 = 1

for (; i != *(arg1 + 0x118); i += 0x24)
    sub_403110(arg2, i + 0xc, nullptr, 0xffffffff)

fsbase->NtTib.ExceptionList = ExceptionList
return arg2
