// 函数: sub_4ce700
// 地址: 0x4ce700
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6bf000
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t* result
int32_t* ecx
void*** ecx_1
result, ecx_1 = sub_4cedf0(ecx)
int32_t var_8_1 = 0
void*** var_2c = ecx_1
int32_t var_30 = arg1
int32_t* result_1 = result
result[3].w = 0
sub_4cf670(&result[4], ecx_1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
