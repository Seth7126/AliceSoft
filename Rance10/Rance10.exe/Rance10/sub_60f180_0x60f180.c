// 函数: sub_60f180
// 地址: 0x60f180
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_743311
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
void* i = arg3
char* result = arg4
char* result_2 = result
int32_t var_8_1 = 0

for (; i != arg2; i += 0x70)
    char* result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        sub_60f530(result, i)
    
    result = &result[0x70]
    var_8_1.b = 0
    arg4 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
