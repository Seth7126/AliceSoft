// 函数: sub_586710
// 地址: 0x586710
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6c767c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
void* i = arg3
struct sealengine::CPRPDefine::VTable** result = arg4
struct sealengine::CPRPDefine::VTable** result_2 = result
int32_t var_8_1 = 0

for (; i != arg2; i += 0x28)
    struct sealengine::CPRPDefine::VTable** result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        *result = &sealengine::CPRPDefine::`vftable'
        result[6] = 0xf
        result[5] = 0
        result[1].b = 0
        sub_401ff0(&result[1], i + 4, 0, 0xffffffff)
        var_8_1.b = 2
        sub_586670(&result[7], i + 0x1c)
    
    result = &result[0xa]
    var_8_1.b = 0
    arg4 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
