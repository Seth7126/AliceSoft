// 函数: sub_5b5880
// 地址: 0x5b5880
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6c8f6c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
void* i = arg3
struct sys43vm::CCallFuncCount::VTable** result = arg4
struct sys43vm::CCallFuncCount::VTable** result_2 = result
int32_t var_8_1 = 0

for (; i != arg2; i += 0x38)
    struct sys43vm::CCallFuncCount::VTable** result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        *result = &sys43vm::CCallFuncCount::`vftable'
        result[7] = 0xf
        result[6] = 0
        result[2].b = 0
        sub_401ff0(&result[2], i + 8, 0, 0xffffffff)
        var_8_1.b = 2
        result[8] = *(i + 0x20)
        sub_5b5a00(&result[9], i + 0x24)
        result[0xc] = *(i + 0x30)
        result[0xd] = *(i + 0x34)
    
    result = &result[0xe]
    var_8_1.b = 0
    arg4 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
