// 函数: sub_52c470
// 地址: 0x52c470
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6c382c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
void* i = arg3
struct sealengine::CBoneCollisionShape::VTable** result = arg4
struct sealengine::CBoneCollisionShape::VTable** result_2 = result
int32_t var_8_1 = 0

for (; i != arg2; i += 0x38)
    struct sealengine::CBoneCollisionShape::VTable** result_1 = result
    
    if (result != 0)
        *result = &sealengine::CBoneCollisionShape::`vftable'
        result[1] = &sealengine::CCollisionShape::`vftable'
        result[2] = *(i + 8)
        *(result + 0xc) = *(i + 0xc)
        result[5] = *(i + 0x14)
        *(result + 0x18) = *(i + 0x18)
        result[8] = *(i + 0x20)
        result[9] = *(i + 0x24)
        var_8_1.b = 2
        result[0xa] = *(i + 0x28)
        sub_453d80(&result[0xb], i + 0x2c)
    
    result = &result[0xe]
    var_8_1.b = 0
    arg4 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
