// 函数: sub_467b80
// 地址: 0x467b80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6b9150
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
void* var_1c = arg1
void* result = arg3
void* result_1 = result
int32_t var_8_1 = 0

while (true)
    if (result == arg4)
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    int32_t* eax_3 = sub_467f00(arg2, *(arg2 + 4), result)
    int32_t eax_4 = *(arg1 + 4)
    
    if (0x5d1745c - eax_4 u< 1)
        break
    
    *(arg1 + 4) = eax_4 + 1
    *(arg2 + 4) = eax_3
    *eax_3[1] = eax_3
    result = arg3 + 0x24
    arg3 = result

sub_69a551("list<T> too long")
noreturn
