// 函数: sub_4aa480
// 地址: 0x4aa480
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_731791
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
void* i = arg3
struct partsengine::CConstructionProcess::VTable** result = arg4
struct partsengine::CConstructionProcess::VTable** result_2 = result
int32_t var_8_1 = 0

for (; i != arg2; i += 0xc8)
    struct partsengine::CConstructionProcess::VTable** result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        sub_4aa520(result, i)
    
    result = &result[0x32]
    var_8_1.b = 0
    arg4 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
