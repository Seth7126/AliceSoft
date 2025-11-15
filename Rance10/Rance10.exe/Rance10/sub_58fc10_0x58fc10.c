// 函数: sub_58fc10
// 地址: 0x58fc10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73dca9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
void** i = arg3
int32_t* result = arg4
int32_t* result_2 = result
int32_t var_8_1 = 0

for (; i != arg2; i = &i[0xb])
    int32_t* result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        result[4] = 0
        result[5] = 0
        result[5] = 0xf
        bool cond:0_1 = result[5] u< 0x10
        result[4] = 0
        char* result_3
        
        if (cond:0_1)
            result_3 = result
        else
            result_3 = *result
        
        *result_3 = 0
        sub_403590(result, i, 0, 0xffffffff)
        var_8_1.b = 2
        result[6] = i[6]
        result[7] = i[7]
        sub_58fd80(&result[8], &i[8])
    
    result = &result[0xb]
    var_8_1.b = 0
    arg4 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
