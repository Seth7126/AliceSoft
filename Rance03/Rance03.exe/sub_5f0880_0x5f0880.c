// 函数: sub_5f0880
// 地址: 0x5f0880
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6cbe61
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
void* i = arg3
struct chipmunk::CExternalFont::VTable** result = arg4
struct chipmunk::CExternalFont::VTable** result_2 = result
int32_t var_8_1 = 0

for (; i != arg2; i += 0x10)
    struct chipmunk::CExternalFont::VTable** result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        *result = &chipmunk::CExternalFont::`vftable'
        sub_5f0930(&result[1], i + 4)
    
    result = &result[4]
    var_8_1.b = 0
    arg4 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
