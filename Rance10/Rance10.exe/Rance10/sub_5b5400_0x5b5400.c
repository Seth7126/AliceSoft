// 函数: sub_5b5400
// 地址: 0x5b5400
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73f451
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
int32_t* i = arg3
int32_t* result = arg4
int32_t* result_2 = result
int32_t var_8_1 = 0

for (; i != arg2; i = &i[0x10])
    int32_t* result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        *result = *i
        result[6] = 0xf
        result[5] = 0
        char* eax_4
        
        if (result[6] u< 0x10)
            eax_4 = &result[1]
        else
            eax_4 = result[1]
        
        *eax_4 = 0
        sub_403590(&result[1], &i[1], 0, 0xffffffff)
        result[7] = i[7]
        result[8] = i[8]
        *(result + 0x24) = *(i + 0x24)
        *(result + 0x34) = *(i + 0x34)
        result[0xf] = i[0xf]
    
    result = &result[0x10]
    var_8_1.b = 0
    arg4 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
