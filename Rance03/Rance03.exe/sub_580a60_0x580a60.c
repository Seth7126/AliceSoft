// 函数: sub_580a60
// 地址: 0x580a60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6c7081
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
void* i = arg3
struct sealengine::CPolyTexture::VTable** result = arg4
struct sealengine::CPolyTexture::VTable** result_2 = result
int32_t var_8_1 = 0

for (; i != arg2; i += 0x28)
    struct sealengine::CPolyTexture::VTable** result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        *result = &sealengine::CPolyTexture::`vftable'
        result[6] = 0xf
        result[5] = 0
        result[1].b = 0
        sub_401ff0(&result[1], i + 4, 0, 0xffffffff)
        result[7] = *(i + 0x1c)
        result[8] = *(i + 0x20)
        result[9] = *(i + 0x24)
    
    result = &result[0xa]
    var_8_1.b = 0
    arg4 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
