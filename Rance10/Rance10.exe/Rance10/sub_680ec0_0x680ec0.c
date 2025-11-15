// 函数: sub_680ec0
// 地址: 0x680ec0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73befc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = arg2
int32_t var_14 = arg3
int32_t eax_4
int32_t edx
edx:eax_4 = sx.q(esi - 1)
int32_t ebx_1 = (eax_4 - edx) s>> 1

if (arg4 s< esi)
    do
        int32_t* edi_1 = arg3 + ebx_1 * 0x18
        int32_t* eax_7 = arg5
        int32_t* var_18_1
        
        if (eax_7[5] u< 0x10)
            var_18_1 = eax_7
        else
            var_18_1 = *eax_7
        
        int32_t* var_1c_1
        
        if (edi_1[5] u< 0x10)
            var_1c_1 = edi_1
        else
            var_1c_1 = *edi_1
        
        int32_t ecx_2 = eax_7[4]
        int32_t eax_8 = ecx_2
        
        if (edi_1[4] u< ecx_2)
            eax_8 = edi_1[4]
        
        int32_t eax_9 = sub_406ac0(eax_8, var_18_1, var_1c_1, eax_8)
        
        if (eax_9 == 0)
            int32_t ecx_4 = edi_1[4]
            int32_t eax_10 = *(arg5 + 0x10)
            bool c_1 = eax_10 u< ecx_4
            
            if (eax_10 == ecx_4 || c_1)
                eax_9 = neg.d(sbb.d(eax_10, eax_10, c_1))
            else
                eax_9 = 0xffffffff
        
        if ((eax_9 u>> 0x1f).b == 0)
            break
        
        arg3 = var_14
        char* esi_1 = arg3 + esi * 0x18
        
        if (esi_1 != edi_1)
            int32_t eax_14 = *(esi_1 + 0x14)
            
            if (eax_14 u>= 0x10)
                sub_403160(*esi_1, eax_14 + 1, 1)
            
            *(esi_1 + 0x14) = 0xf
            bool cond:2_1 = *(esi_1 + 0x14) u< 0x10
            *(esi_1 + 0x10) = 0
            char* eax_16
            
            if (cond:2_1)
                eax_16 = esi_1
            else
                eax_16 = *esi_1
            
            *eax_16 = 0
            sub_4056a0(esi_1, edi_1)
            arg3 = var_14
        
        esi = ebx_1
        int32_t eax_18
        int32_t edx_3
        edx_3:eax_18 = sx.q(ebx_1 - 1)
        ebx_1 = (eax_18 - edx_3) s>> 1
    while (arg4 s< esi)
    
    arg3 = var_14

char* esi_2 = arg3 + esi * 0x18
char* result = arg5

if (esi_2 != result)
    int32_t ecx_6 = *(esi_2 + 0x14)
    
    if (ecx_6 u>= 0x10)
        sub_403160(*esi_2, ecx_6 + 1, 1)
        result = arg5
    
    *(esi_2 + 0x14) = 0xf
    bool cond:0_1 = *(esi_2 + 0x14) u< 0x10
    *(esi_2 + 0x10) = 0
    char* ecx_7
    
    if (cond:0_1)
        ecx_7 = esi_2
    else
        ecx_7 = *esi_2
    
    *ecx_7 = 0
    result = sub_4056a0(esi_2, result)

fsbase->NtTib.ExceptionList = ExceptionList
return result
