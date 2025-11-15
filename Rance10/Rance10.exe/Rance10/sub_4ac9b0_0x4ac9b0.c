// 函数: sub_4ac9b0
// 地址: 0x4ac9b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7319f1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
void* i = arg3
int32_t* result = arg4
int32_t* result_2 = result
int32_t var_8_1 = 0

for (; i != arg2; i += 0x10)
    int32_t* result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        sub_4ac900(result, i)
        result[3].b = *(i + 0xc)
        *(result + 0xd) = *(i + 0xd)
        *(result + 0xe) = *(i + 0xe)
        *(result + 0xf) = *(i + 0xf)
    
    result = &result[4]
    var_8_1.b = 0
    arg4 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
