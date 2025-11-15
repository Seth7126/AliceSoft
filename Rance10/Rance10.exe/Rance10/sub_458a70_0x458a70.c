// 函数: sub_458a70
// 地址: 0x458a70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72b971
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
void* i = arg3
struct IDebugFileStruct::debugfile::CStruct::VTable** result = arg4
struct IDebugFileStruct::debugfile::CStruct::VTable** result_2 = result
int32_t var_8_1 = 0

for (; i != arg2; i += 0x44)
    struct IDebugFileStruct::debugfile::CStruct::VTable** result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        sub_458db0(result, i)
    
    result = &result[0x11]
    var_8_1.b = 0
    arg4 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
