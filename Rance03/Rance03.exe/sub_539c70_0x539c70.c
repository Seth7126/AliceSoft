// 函数: sub_539c70
// 地址: 0x539c70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6c4071
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
void* i = arg3
struct sealengine::CFace::VTable** result = arg4
struct sealengine::CFace::VTable** result_2 = result
int32_t var_8_1 = 0

for (; i != arg2; i += 0x4c)
    struct sealengine::CFace::VTable** result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        int32_t (__fastcall* var_30_1)(struct sealengine::CWriteVertex::VTable** arg1) = sub_59e030
        *result = &sealengine::CFace::`vftable'
        sub_69b6c8(&result[1], i + 4, 0x14, 3, sub_539d40)
        *(result + 0x40) = *(i + 0x40)
        result[0x12] = *(i + 0x48)
    
    result = &result[0x13]
    var_8_1.b = 0
    arg4 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
