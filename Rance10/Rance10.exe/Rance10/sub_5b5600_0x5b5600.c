// 函数: sub_5b5600
// 地址: 0x5b5600
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73f4b1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
int64_t* i = arg3
int64_t* result = arg4
int64_t* result_2 = result
int32_t var_8_1 = 0

for (; i != arg2; i = &i[3])
    int64_t* result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        *result = *i
        result[1].d = i[1].d
        sub_564a30(result + 0xc, i + 0xc)
    
    result = &result[3]
    var_8_1.b = 0
    arg4 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
