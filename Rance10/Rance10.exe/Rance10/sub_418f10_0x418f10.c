// 函数: sub_418f10
// 地址: 0x418f10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7273dc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* ecx = &arg2[1]
*arg1 = *arg2

if (&arg1[1] != ecx)
    int32_t eax_4 = arg1[6]
    
    if (eax_4 u>= 0x10)
        sub_403160(arg1[1], eax_4 + 1, 1)
        ecx = &arg2[1]
    
    arg1[6] = 0xf
    bool cond:0_1 = arg1[6] u< 0x10
    arg1[5] = 0
    int32_t* eax_6
    
    if (cond:0_1)
        eax_6 = &arg1[1]
    else
        eax_6 = arg1[1]
    
    *eax_6 = 0
    sub_4056a0(&arg1[1], ecx)

if (&arg1[7] != &arg2[7])
    int32_t eax_7 = arg1[0xc]
    
    if (eax_7 u>= 0x10)
        sub_403160(arg1[7], eax_7 + 1, 1)
    
    arg1[0xc] = 0xf
    bool cond:1_1 = arg1[0xc] u< 0x10
    arg1[0xb] = 0
    void* eax_9
    
    if (cond:1_1)
        eax_9 = &arg1[7]
    else
        eax_9 = arg1[7]
    
    *eax_9 = 0
    sub_4056a0(&arg1[7], &arg2[7])

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
