// 函数: sub_4b4f80
// 地址: 0x4b4f80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6bd801
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
void* i = arg3
struct partsengine::CGUIMessageVariable::VTable** result = arg4
struct partsengine::CGUIMessageVariable::VTable** result_2 = result
int32_t var_8_1 = 0

for (; i != arg2; i += 0x2c)
    struct partsengine::CGUIMessageVariable::VTable** result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        *result = &partsengine::CGUIMessageVariable::`vftable'
        result[1] = *(i + 4)
        result[2] = *(i + 8)
        result[3] = *(i + 0xc)
        int32_t eax_5
        eax_5.b = *(i + 0x10)
        result[4].b = eax_5.b
        result[0xa] = 0xf
        result[9] = 0
        result[5].b = 0
        sub_401ff0(&result[5], i + 0x14, 0, 0xffffffff)
    
    result = &result[0xb]
    var_8_1.b = 0
    arg4 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
