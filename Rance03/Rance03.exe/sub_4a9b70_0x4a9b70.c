// 函数: sub_4a9b70
// 地址: 0x4a9b70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bc958
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t var_24 = __security_cookie ^ &__saved_ebx
fsbase->NtTib.ExceptionList = &ExceptionList
void* ecx = data_75d4fc
int32_t result_1 = 0
int32_t var_14 = 0
int32_t var_10 = 0
int32_t var_4 = 0
int32_t ebx

if (sub_4cfb00(ecx + 0x164, arg1, ecx + 0x74, &result_1) != 0)
    ebx.b = sub_4a9600(&result_1, arg2)
else
    ebx.b = 0

int32_t result = result_1

if (result != 0)
    j__free(result)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
