// 函数: sub_47e8b0
// 地址: 0x47e8b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b495b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t result_1 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_2 = sub_69adc6(0x4b0)
result_1 = result_2
int32_t var_4 = 0
struct IInterface::VTable** result_3

if (result_2 == 0)
    result_3 = nullptr
else
    result_3 = sub_4a17b0(result_2, 1, *(arg1 + 0x4c), *(arg1 + 0x48), *(arg1 + 0x50))

int32_t var_4_1 = 0xffffffff
result_1 = result_3
sub_412de0(arg1 + 0x28, &result_1)
int32_t result = result_1
(*(*(result + 4) + 0x68))(arg1)
result_1 = 0xffffffff
sub_4158d0(arg1 + 0x38, &result_1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
