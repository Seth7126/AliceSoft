// 函数: sub_414f70
// 地址: 0x414f70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728076
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
    sub_40cc70(&arg1[7])
    arg1[7] = arg2[7]
    arg1[8] = arg2[8]
    arg1[9] = arg2[9]
    arg2[7] = 0
    arg2[8] = 0
    arg2[9] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
