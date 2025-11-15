// 函数: sub_632d00
// 地址: 0x632d00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_745839
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14_1 = 0
arg2[4] = 0
arg2[5] = 0
arg2[5] = 7
bool cond:0 = arg2[5] u< 8
arg2[4] = 0
int16_t* eax_3

if (cond:0)
    eax_3 = arg2
else
    eax_3 = *arg2

*eax_3 = 0
int32_t i = (arg4 - arg3) s>> 1
int32_t var_8_1 = 0
int32_t var_14_2 = 1

while (i != 0)
    int32_t ecx_1 = arg2[4]
    
    if (i u> ecx_1)
        sub_631b70(arg2, i - ecx_1, 0)
    else
        arg2[4] = i
        
        if (arg2[5] u< 8)
            *(arg2 + (i << 1)) = 0
        else
            *(*arg2 + (i << 1)) = 0
    
    int32_t eax_7 = arg2[5]
    int32_t* edx_1
    
    if (eax_7 u< 8)
        edx_1 = arg2
    else
        edx_1 = *arg2
    
    int32_t* ecx_5
    
    if (eax_7 u< 8)
        ecx_5 = arg2
    else
        ecx_5 = *arg2
    
    i = __Wcsxfrm(ecx_5, edx_1 + (arg2[4] << 1), arg3, arg4, arg1 + 8)
    
    if (i u<= arg2[4])
        break

int32_t ecx_6 = arg2[4]

if (i u> ecx_6)
    sub_631b70(arg2, i - ecx_6, 0)
else
    arg2[4] = i
    
    if (arg2[5] u< 8)
        *(arg2 + (i << 1)) = 0
    else
        *(*arg2 + (i << 1)) = 0

fsbase->NtTib.ExceptionList = ExceptionList
return arg2
