// 函数: sub_59ee20
// 地址: 0x59ee20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6c88b1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int32_t* ecx
int32_t* result = sub_4187b0(ecx)
int32_t var_8_1 = 0
int32_t* result_1 = result
result[3].w = 0
void* var_1c = &result[4]
void* var_20 = &result[4]
var_8_1.b = 1

if (result != 0xfffffff0)
    void* ecx_1 = *arg1
    result[4] = &sealengine::CWriteVertex::`vftable'
    result[5] = *(ecx_1 + 4)
    sub_453d80(&result[6], ecx_1 + 8)
    result[9] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
