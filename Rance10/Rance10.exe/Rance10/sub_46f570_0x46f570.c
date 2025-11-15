// 函数: sub_46f570
// 地址: 0x46f570
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729896
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg3

if (edi == arg2)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg4

int32_t* esi = arg4

do
    if (esi != edi)
        int32_t eax_3 = esi[5]
        
        if (eax_3 u>= 0x10)
            sub_403160(*esi, eax_3 + 1, 1)
        
        esi[5] = 0xf
        bool cond:0_1 = esi[5] u< 0x10
        esi[4] = 0
        int32_t* eax_5
        
        if (cond:0_1)
            eax_5 = esi
        else
            eax_5 = *esi
        
        *eax_5 = 0
        sub_4056a0(esi, edi)
    
    edi = &edi[6]
    esi = &esi[6]
while (edi != arg2)

fsbase->NtTib.ExceptionList = ExceptionList
return esi
