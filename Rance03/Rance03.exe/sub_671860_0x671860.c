// 函数: sub_671860
// 地址: 0x671860
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6d0091
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
void* i = arg3
struct dpparts::CListHeaderParts::VTable** result = arg4
struct dpparts::CListHeaderParts::VTable** result_2 = result
int32_t var_8_1 = 0

for (; i != arg2; i += 0x20)
    struct dpparts::CListHeaderParts::VTable** result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        *result = &dpparts::CListHeaderParts::`vftable'
        result[6] = 0xf
        result[5] = 0
        result[1].b = 0
        sub_401ff0(&result[1], i + 4, 0, 0xffffffff)
        result[7].b = *(i + 0x1c)
    
    result = &result[8]
    var_8_1.b = 0
    arg4 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
