// 函数: sub_409530
// 地址: 0x409530
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7273dc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1 != arg2)
    int32_t eax_3 = arg1[5]
    
    if (eax_3 u>= 0x10)
        sub_403160(*arg1, eax_3 + 1, 1)
    
    arg1[5] = 0xf
    bool cond:0_1 = arg1[5] u< 0x10
    arg1[4] = 0
    int32_t* eax_5
    
    if (cond:0_1)
        eax_5 = arg1
    else
        eax_5 = *arg1
    
    *eax_5 = 0
    sub_4056a0(arg1, arg2)

void* ecx_1 = &arg2[8]
arg1[6] = arg2[6]
int32_t eax_6
eax_6.b = arg2[7].b
arg1[7].b = eax_6.b

if (&arg1[8] != ecx_1)
    int32_t eax_7 = arg1[0xd]
    
    if (eax_7 u>= 0x10)
        sub_403160(arg1[8], eax_7 + 1, 1)
        ecx_1 = &arg2[8]
    
    arg1[0xd] = 0xf
    bool cond:1_1 = arg1[0xd] u< 0x10
    arg1[0xc] = 0
    char* eax_9
    
    if (cond:1_1)
        eax_9 = &arg1[8]
    else
        eax_9 = arg1[8]
    
    *eax_9 = 0
    sub_4056a0(&arg1[8], ecx_1)

arg1[0xe] = arg2[0xe]
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
