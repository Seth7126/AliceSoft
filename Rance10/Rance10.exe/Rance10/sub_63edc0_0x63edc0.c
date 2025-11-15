// 函数: sub_63edc0
// 地址: 0x63edc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7460e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int32_t edx = arg1[1]
int32_t eax_3 = *arg1
int32_t edi = arg2
int32_t ecx_2 = (edx - eax_3) s>> 4

if (ecx_2 u> edi)
    int32_t* edi_3 = ((edi - ecx_2) << 4) + edx
    int32_t* esi_1 = edi_3
    
    if (edi_3 != edx)
        do
            eax_3 = (**esi_1)(0)
            esi_1 = &esi_1[4]
        while (esi_1 != edx)
    
    arg1[1] = edi_3
else if (ecx_2 u< edi)
    int32_t esi_3 = edi - ecx_2
    
    if ((arg1[2] - edx) s>> 4 u< esi_3)
        if (0xfffffff - ecx_2 u< esi_3)
            sub_6d0927("vector<T> too long")
            noreturn
        
        int32_t edx_1 = ecx_2 + esi_3
        int32_t esi_6 = (arg1[2] - eax_3) s>> 4
        uint32_t eax_10 = esi_6 u>> 1
        arg2 = 0xfffffff - eax_10
        int32_t ecx_7 = 0
        
        if (arg2 u>= esi_6)
            ecx_7 = eax_10 + esi_6
        
        if (ecx_7 u>= edx_1)
            edx_1 = ecx_7
        
        sub_63eef0(arg1, edx_1)
    
    int32_t var_8_1 = 0
    void* ecx_9 = arg1[1]
    int32_t var_34_2 = arg2
    void* var_38 = ecx_9
    sub_63efd0(ecx_9, edi - ((ecx_9 - *arg1) s>> 4))
    int32_t eax_17 = (arg1[1] - *arg1) s>> 4
    arg1[1] += (edi - eax_17) << 4
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_17

fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
