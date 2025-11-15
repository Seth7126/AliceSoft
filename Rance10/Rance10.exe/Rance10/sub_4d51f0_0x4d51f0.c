// 函数: sub_4d51f0
// 地址: 0x4d51f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_734049
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
int128_t* i = arg3
int128_t* result = arg4
int128_t* result_2 = result
int32_t var_8_1 = 0

for (; i != arg2; i += 0xcc)
    int128_t* result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        sub_526a90(result, i)
        var_8_1.b = 2
        sub_4d5190(&result[0xc], &i[0xc])
    
    result += 0xcc
    var_8_1.b = 0
    arg4 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
