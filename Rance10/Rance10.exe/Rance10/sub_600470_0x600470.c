// 函数: sub_600470
// 地址: 0x600470
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_742581
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
void* i = arg3
struct IDebugFileObjType::sys43vm::CObjType::VTable** result = arg4
struct IDebugFileObjType::sys43vm::CObjType::VTable** result_2 = result
int32_t var_8_1 = 0

for (; i != arg2; i += 0x18)
    struct IDebugFileObjType::sys43vm::CObjType::VTable** result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        *result = &sys43vm::CObjType::`vftable'{for `IDebugFileObjType'}
        result[1] = *(i + 4)
        result[2] = *(i + 8)
        sub_600560(&result[3], i + 0xc)
    
    result = &result[6]
    var_8_1.b = 0
    arg4 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
