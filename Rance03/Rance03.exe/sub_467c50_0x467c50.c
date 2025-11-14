// 函数: sub_467c50
// 地址: 0x467c50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6b9170
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
void* var_1c = arg1
int32_t* result = arg3
int32_t* result_1 = result
int32_t var_8_1 = 0

while (true)
    if (result == arg4)
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    int32_t* eax_4 = sub_467f00(arg2, *(arg2 + 4), &result[2])
    int32_t eax_5 = *(arg1 + 4)
    
    if (0x5d1745c - eax_5 u< 1)
        break
    
    *(arg1 + 4) = eax_5 + 1
    *(arg2 + 4) = eax_4
    *eax_4[1] = eax_4
    result = *arg3
    arg3 = result

sub_69a551("list<T> too long")
noreturn
