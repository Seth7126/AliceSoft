// 函数: sub_5ef5c0
// 地址: 0x5ef5c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_741a69
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_1c = arg1
int32_t var_18 = 0
*arg1 = 0
arg1[1] = 0
arg1[2] = 0
int32_t var_8_1 = 0
int32_t var_18_1 = 1
int32_t eax_4 = (*(*arg2 + 8))(eax_2)

if ((arg1[2] - *arg1) s>> 2 u< eax_4)
    if (eax_4 u> 0x3fffffff)
        sub_6d0927("vector<T> too long")
        noreturn
    
    sub_404670(arg1, eax_4)

int32_t edi = 0
int32_t var_14 = 0

if ((*(*arg2 + 8))() s> 0)
    int32_t eax_13
    
    do
        int32_t* eax_8 = (*(*arg2 + 0xc))(edi)
        int32_t eax_9 = arg1[1]
        int32_t ecx_7
        
        if (eax_8 u< eax_9)
            ecx_7 = *arg1
        
        int32_t* ecx_10
        
        if (eax_8 u>= eax_9 || ecx_7 u> eax_8)
            if (eax_9 == arg1[2])
                sub_404610(arg1, 1)
            
            ecx_10 = arg1[1]
            
            if (ecx_10 != 0)
                *ecx_10 = *eax_8
        else
            if (eax_9 == arg1[2])
                sub_404610(arg1, 1)
            
            ecx_10 = arg1[1]
            
            if (ecx_10 != 0)
                *ecx_10 = *(*arg1 + ((eax_8 - ecx_7) s>> 2 << 2))
        arg1[1] += 4
        edi = var_14 + 1
        var_14 = edi
        eax_13 = (*(*arg2 + 8))()
    while (edi s< eax_13)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
