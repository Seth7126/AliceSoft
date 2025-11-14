// 函数: sub_59f430
// 地址: 0x59f430
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6c8921
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
void* i = arg3
struct sealengine::CWriteVertex::VTable** result = arg4
struct sealengine::CWriteVertex::VTable** result_2 = result
int32_t var_8_1 = 0

for (; i != arg2; i += 0x14)
    struct sealengine::CWriteVertex::VTable** result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        *result = &sealengine::CWriteVertex::`vftable'
        result[1] = *(i + 4)
        sub_453d80(&result[2], i + 8)
    
    result = &result[5]
    var_8_1.b = 0
    arg4 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
