// 函数: sub_4743c0
// 地址: 0x4743c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72dd60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
void* var_1c = arg1
void** result = arg3
void** result_1 = result
int32_t var_8_1 = 0

while (true)
    if (result == arg4)
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    int32_t* eax_3 = sub_474b80(arg2, *(arg2 + 4), result)
    int32_t eax_4 = *(arg1 + 4)
    
    if (0x3fffffe - eax_4 u< 1)
        break
    
    *(arg1 + 4) = eax_4 + 1
    *(arg2 + 4) = eax_3
    *eax_3[1] = eax_3
    result = &arg3[0xe]
    arg3 = result

sub_6d0927("list<T> too long")
noreturn
