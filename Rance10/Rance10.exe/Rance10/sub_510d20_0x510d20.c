// 函数: sub_510d20
// 地址: 0x510d20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_737f18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* edx = arg2

if (edx != 0)
    int32_t* esi_1 = *arg1
    void* eax_3 = *esi_1
    void* var_14 = eax_3
    
    if (eax_3 != esi_1)
        int32_t* arg_8
        int32_t* edi_1 = arg_8
        
        do
            int32_t ebx_3 = *(eax_3 + 0x28)
            int32_t* eax_4 = sub_51b460(edx, ebx_3)
            int32_t ecx_1 = edi_1[1]
            arg_8 = eax_4
            int32_t edx_1
            
            if (&arg_8 u< ecx_1)
                edx_1 = *edi_1
            
            if (&arg_8 u>= ecx_1 || edx_1 u> &arg_8)
                if (ecx_1 == edi_1[2])
                    sub_404610(edi_1, 1)
                
                int32_t** eax_7 = edi_1[1]
                
                if (eax_7 != 0)
                    *eax_7 = arg_8
            else
                if (ecx_1 == edi_1[2])
                    sub_404610(edi_1, 1)
                
                int32_t* ecx_3 = edi_1[1]
                
                if (ecx_3 != 0)
                    *ecx_3 = *(*edi_1 + ((&arg_8 - edx_1) s>> 2 << 2))
            
            edi_1[1] += 4
            int32_t var_30_2 = ebx_3
            
            if (sub_4f45c0(arg2 + 0x30) == 0)
                int32_t var_30_3 = ebx_3
                struct partsengine::CPartsList::VTable** eax_9 = sub_4f14d0(arg2 + 0x34)
                
                if (eax_9 != 0)
                    sub_5267c0(eax_9, ebx_3)
            
            sub_429080(&var_14)
            eax_3 = var_14
            edx = arg2
        while (eax_3 != esi_1)
    
    int32_t var_8_1 = 0
    sub_432200(*(*arg1 + 4))
    void* eax_11 = *arg1
    *(eax_11 + 4) = eax_11
    int32_t* eax_12 = *arg1
    *eax_12 = eax_12
    void* eax_13 = *arg1
    *(eax_13 + 8) = eax_13
    arg1[1] = 0
    int32_t var_8_2 = 1
    sub_44e450(*(arg1[4] + 4))
    void* eax_15 = arg1[4]
    *(eax_15 + 4) = eax_15
    int32_t* eax_16 = arg1[4]
    *eax_16 = eax_16
    void* eax_17 = arg1[4]
    *(eax_17 + 8) = eax_17
    arg1[5] = 0
    int32_t var_8_3 = 2
    sub_44e450(*(arg1[2] + 4))
    void* eax_19 = arg1[2]
    *(eax_19 + 4) = eax_19
    int32_t* eax_20 = arg1[2]
    *eax_20 = eax_20
    void* eax_21 = arg1[2]
    *(eax_21 + 8) = eax_21
    arg1[3] = 0
    int32_t var_8_4 = 3
    sub_44e450(*(arg1[6] + 4))
    void* eax_23 = arg1[6]
    *(eax_23 + 4) = eax_23
    int32_t* eax_24 = arg1[6]
    *eax_24 = eax_24
    void* eax_25 = arg1[6]
    int32_t var_8_5 = 0xffffffff
    *(eax_25 + 8) = eax_25
    arg1[7] = 0
    int32_t* ecx_16 = arg1[0xa]
    
    if (ecx_16 != 0xffffffff)
        sub_492c40(ecx_16)
        arg1[0xa] = 0xffffffff
    
    bool cond:0_1 = arg1[0x10] u< 0x10
    void* eax_26 = &arg1[0xb]
    *(eax_26 + 0x10) = 0
    
    if (not(cond:0_1))
        eax_26 = *eax_26
    
    *eax_26 = 0
    result = &arg1[0x11]
    bool cond:1_1 = result[5] u< 0x10
    result[4] = 0
    
    if (not(cond:1_1))
        result = *result
    
    *result = nullptr

fsbase->NtTib.ExceptionList = ExceptionList
return result
