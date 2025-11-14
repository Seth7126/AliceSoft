// 函数: sub_4ce450
// 地址: 0x4ce450
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6befb9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int32_t* ecx
int32_t* result = sub_4cedf0(ecx)
int32_t var_8_1 = 0
int32_t* result_1 = result
result[3].w = 0
void* var_1c = &result[4]
void* var_20 = &result[4]
var_8_1.b = 1

if (result != 0xfffffff0)
    sub_403000(&result[4], arg1)
    var_8_1.b = 2
    result[0xa] = &partsengine::CIntentData::`vftable'
    sub_43f550(&result[0xb], &arg1[7])
    result[0xe] = arg1[0xa]

fsbase->NtTib.ExceptionList = ExceptionList
return result
