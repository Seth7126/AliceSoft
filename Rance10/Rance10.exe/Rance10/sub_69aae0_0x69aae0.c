// 函数: sub_69aae0
// 地址: 0x69aae0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_748577
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_14 = arg2
void** var_1c = arg3
int32_t var_18 = 0
int32_t var_8_1 = 1
void arg_4
sub_69b0e0(&arg_4, &var_14, arg3, &arg_4)
int32_t var_18_1 = 1
int32_t var_8_2 = 2

if (arg4 != 0)
    bool cond:0_1 = arg4[1] != 1
    arg4[1]
    arg4[1] -= 1
    
    if (not(cond:0_1))
        (**arg4)(eax_2)
        int32_t ebx_1 = arg4[2]
        arg4[2] -= 1
        
        if (ebx_1 == 1)
            (*(*arg4 + 4))()

fsbase->NtTib.ExceptionList = ExceptionList
return arg3
