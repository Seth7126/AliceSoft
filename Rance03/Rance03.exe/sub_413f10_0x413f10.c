// 函数: sub_413f10
// 地址: 0x413f10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6b3d91
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
void* i = arg3
struct dpanalysis::CBreakPoint::VTable** result = arg4
struct dpanalysis::CBreakPoint::VTable** result_2 = result
int32_t var_8_1 = 0

for (; i != arg2; i += 0x6c)
    struct dpanalysis::CBreakPoint::VTable** result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        sub_413e20(result, i)
    
    result = &result[0x1b]
    var_8_1.b = 0
    arg4 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
