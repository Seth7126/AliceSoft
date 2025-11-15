// 函数: sub_56b680
// 地址: 0x56b680
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73c3b1
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

for (; i != arg2; i = &i[3])
    int128_t* result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        *result = *i
        result[1] = i[1]
        result[2].d = i[2].d
        sub_4275f0(result + 0x24, i + 0x24)
    
    result = &result[3]
    var_8_1.b = 0
    arg4 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
