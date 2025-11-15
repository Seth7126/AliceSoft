// 函数: sub_62fab0
// 地址: 0x62fab0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7454e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_48 = arg3
int32_t var_58 = 0
char* ecx_1 = (**arg2)(eax_2)

if (ecx_1 != 0)
    char* eax_4
    
    do
        eax_4.b = *ecx_1
        ecx_1 = &ecx_1[1]
    while (eax_4.b != 0)
    ecx_1 -= &ecx_1[1]

void* eax_6 = arg4 - ecx_1
char* result

if (eax_6 s> 0)
    char ecx_5 = (arg5 s>> 8).b
    
    if (ecx_5 != 0)
        int32_t edi_1 = 0xf
        char var_2c = 0
        char* esi_1 = nullptr
        int32_t var_18_1 = 0xf
        void* var_1c_1 = nullptr
        int32_t eax_12
        int32_t edx_4
        edx_4:eax_12 = sx.q(eax_6)
        int32_t ebx_1 = 0
        int32_t var_8_2 = 1
        int32_t eax_14 = (eax_12 - edx_4) s>> 1
        
        if (eax_14 s> 0)
            while (true)
                if (esi_1 != edi_1)
                label_62fbf3:
                    char* ecx_10 = &var_2c
                    
                    if (edi_1 u>= 0x10)
                        ecx_10 = var_2c.d
                    
                    *(esi_1 + ecx_10) = ecx_5
                    void* var_1c_2 = var_1c_1 + 1
                    *(var_1c_1 + 1 + ecx_10) = 0
                    void* edx_5 = var_1c_2
                    int32_t esi_2 = var_18_1
                    
                    if (edx_5 != esi_2)
                    label_62fc4a:
                        char* ecx_12 = &var_2c
                        
                        if (esi_2 u>= 0x10)
                            ecx_12 = var_2c.d
                        
                        ebx_1 += 1
                        *(edx_5 + ecx_12) = arg5.b
                        var_1c_1 = var_1c_2 + 1
                        *(var_1c_2 + 1 + ecx_12) = 0
                        
                        if (ebx_1 s>= eax_14)
                            break
                        
                        edi_1 = var_18_1
                        esi_1 = var_1c_1
                        continue
                    else if (edx_5 + 1 u<= 0xfffffffe)
                        if (esi_2 u< edx_5 + 1)
                            sub_403830(&var_2c, edx_5 + 1, edx_5)
                            edx_5 = var_1c_2
                            esi_2 = var_18_1
                        else if (edx_5 == 0xffffffff)
                            var_1c_2 = edx_5 + 1
                            char* eax_21 = &var_2c
                            
                            if (esi_2 u>= 0x10)
                                eax_21 = var_2c.d
                            
                            *eax_21 = 0
                            edx_5 = var_1c_2
                            esi_2 = var_18_1
                        
                        goto label_62fc4a
                else if (&esi_1[1] u<= 0xfffffffe)
                    if (edi_1 u< &esi_1[1])
                        sub_403830(&var_2c, &esi_1[1], esi_1)
                        esi_1 = var_1c_1
                        edi_1 = var_18_1
                    else if (esi_1 == 0xffffffff)
                        var_1c_1 = &esi_1[1]
                        char* eax_16 = &var_2c
                        
                        if (edi_1 u>= 0x10)
                            eax_16 = var_2c.d
                        
                        *eax_16 = 0
                        esi_1 = var_1c_1
                        edi_1 = var_18_1
                    
                    goto label_62fbf3
                
                sub_6d0927("string too long")
                noreturn
        
        char* eax_26 = (**arg2)(&var_2c)
        sub_41a330(eax_26.b, eax_26, arg3)
        
        if (var_18_1 u>= 0x10)
            sub_403160(var_2c.d, var_18_1 + 1, 1)
        
        result = arg3
    else
        char var_44 = ecx_5
        int32_t var_30_1 = 0xf
        int32_t var_34_1 = 0
        sub_4e2870(&var_44, eax_6, arg5.b)
        int32_t var_8_1 = 0
        char* eax_9 = (**arg2)(&var_44)
        sub_41a330(eax_9.b, eax_9, arg3)
        
        if (var_30_1 u>= 0x10)
            sub_403160(var_44.d, var_30_1 + 1, 1)
        
        result = arg3
else
    sub_403360(arg3, (**arg2)())
    result = arg3

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
