// 函数: sub_6e96d4
// 地址: 0x6e96d4
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729300
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char result = Concurrency::critical_section::_Flush_current_owner(&arg1[2])
int32_t* i_3 = *arg1

if (i_3 u> 1)
    int32_t* i
    
    do
        i = *i_3
        result = sub_6e99ac(i_3, 0)
        
        if (result != 0)
            result = sub_6e9784(i_3)
        
        i_3 = i
    while (i != 0)

int32_t* i_2 = arg1[1]

if (i_2 != 0)
    int32_t* i_1
    
    do
        i_1 = *i_2
        result = sub_6e9784(i_2)
        i_2 = i_1
    while (i_1 != 0)

fsbase->NtTib.ExceptionList = ExceptionList
return result
