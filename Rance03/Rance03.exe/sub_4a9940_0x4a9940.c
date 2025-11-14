// 函数: sub_4a9940
// 地址: 0x4a9940
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b4838
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_1c
int32_t var_20 = __security_cookie ^ &var_1c
fsbase->NtTib.ExceptionList = &ExceptionList
data_75d4fc
int32_t result_1 = 0
int32_t var_10 = 0
int32_t var_4 = 0
int32_t var_14 = 0
sub_4a5450(&result_1)
sub_4a9600(&result_1, arg1)
int32_t result = result_1

if (result != 0)
    result = j__free(result)

fsbase->NtTib.ExceptionList = ExceptionList
return result
