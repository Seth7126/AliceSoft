// 函数: sub_4a99d0
// 地址: 0x4a99d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bc958
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_24 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = data_75d4fc
int32_t result_1 = 0
int32_t var_14 = 0
int32_t var_10 = 0
int32_t var_4 = 0
int32_t var_28_1 = sub_4a8650(esi + 0x174, arg2)
sub_4a8510(esi + 0x174, &result_1)
sub_4a9600(&result_1, arg1)
int32_t result = result_1

if (result != 0)
    result = j__free(result)

fsbase->NtTib.ExceptionList = ExceptionList
return result
