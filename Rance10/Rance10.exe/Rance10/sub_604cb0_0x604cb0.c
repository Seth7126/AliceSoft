// 函数: sub_604cb0
// 地址: 0x604cb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_742740
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_70 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_34 = arg7
*arg5 = 0
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_8_1 = 0
BOOL result
void* ebx

if (sub_604fe0(arg1, &var_2c, arg3, arg4).b == 0)
    ebx.b = 0
else if (var_1c == 0 || arg2[4] == 0)
label_604d55:
    result = sub_622690(arg7, *(arg7 + 0x18))
    
    if (result == 0)
        ebx.b = 0
    else if (*(arg1 + 4) != *(arg1 + 8))
        int32_t* var_3c = nullptr
        int32_t var_38_1 = 0
        int32_t* edi_1 = sub_4321d0()
        var_3c = edi_1
        var_8_1.b = 1
        void* ecx_4 = *(arg1 + 4)
        int32_t var_30_1 = 0
        int32_t* esi_2 = *(ecx_4 + 4)
        int32_t ecx_5 = *(ecx_4 + 8)
        uint32_t eax_8 = (ecx_5 - esi_2 + 3) u>> 2
        
        if (esi_2 u> ecx_5)
            eax_8 = 0
        
        if (eax_8 != 0)
            int32_t eax_14
            
            do
                void** var_60
                sub_514f90(&var_3c, &var_60, *(arg1 + 0x10) + 8 + (*esi_2 << 5))
                esi_2 = &esi_2[1]
                var_60[0xa] = esi_2[-1]
                eax_14 = var_30_1 + 1
                var_30_1 = eax_14
            while (eax_14 != eax_8)
            edi_1 = var_3c
        
        int32_t esi_3 = 0
        int32_t var_44_1 = 0
        int32_t ecx_11 = *(arg6 + 0x74) - *(arg6 + 0x70)
        
        if (ecx_11 s/ 0x70 s<= 0)
        label_604f14:
            void* var_74_6 = var_34
            int32_t var_78_4 = ecx_11
            int32_t ecx_22 = sub_606d60(*(arg1 + 0x40), *(arg1 + 0x44))
            *(arg1 + 0x44) = *(arg1 + 0x40)
            void* var_74_7 = var_34
            int32_t var_78_5 = ecx_22
            int32_t ecx_24 = sub_606dc0(*(arg1 + 0x10), *(arg1 + 0x14))
            *(arg1 + 0x14) = *(arg1 + 0x10)
            void* var_74_8 = var_34
            int32_t var_78_6 = ecx_24
            sub_417d50(*(arg1 + 0x1c), *(arg1 + 0x20))
            *(arg1 + 0x20) = *(arg1 + 0x1c)
            int32_t edi_3 = *(arg1 + 0x2c)
            
            for (void* i = *(arg1 + 0x28); i != edi_3; i += 0x1c)
                sub_606fa0(i)
            
            edi_1 = var_3c
            *(arg1 + 0x2c) = *(arg1 + 0x28)
            *(arg1 + 0x38) = *(arg1 + 0x34)
            ebx.b = 1
        else
            int32_t edx_5 = 0
            int32_t var_30_2 = 0
            
            while (true)
                void* eax_21 = *(arg6 + 0x70)
                uint32_t ecx_12 = *(eax_21 + edx_5 + 0x34)
                int32_t* ecx_14 = eax_21 + 0x18 + edx_5
                
                if (ecx_14[4] != 0)
                    if (esi_3 u>= *(result + 0x14) u>> 2)
                    label_604f0a:
                        ebx.b = 0
                        *arg5 = 0
                        break
                    
                    int32_t eax_25 = *(*(result + 0x10) + (esi_3 << 2))
                    int32_t var_4c = eax_25
                    void** esi_4 = sub_432330(&var_3c, ecx_14)
                    char eax_28
                    
                    if (esi_4 != edi_1)
                        eax_28 = sub_412ca0(ecx_14, &esi_4[4])
                    
                    if (esi_4 == edi_1 || eax_28 != 0)
                        esi_4 = edi_1
                    
                    int32_t* eax_31
                    
                    if (esi_4 != edi_1)
                        eax_31 = (esi_4[0xa] << 5) + *(arg1 + 0x10)
                    
                    int32_t edx_7
                    
                    if (esi_4 == edi_1 || *eax_31 != ecx_12)
                        edx_7 = eax_25
                    else
                        char eax_32 = sub_605890(ecx_12, &var_4c, eax_31[1], var_34)
                        edi_1 = var_3c
                        
                        if (eax_32 == 0)
                            goto label_604f0a
                        
                        edx_7 = var_4c
                        *arg5 += 1
                    
                    esi_3 = var_44_1
                    
                    if (esi_3 u>= *(result + 0x14) u>> 2)
                        goto label_604f0a
                    
                    *(*(result + 0x10) + (esi_3 << 2)) = edx_7
                    edi_1 = var_3c
                    edx_5 = var_30_2
                
                var_30_2 = edx_5 + 0x70
                esi_3 += 1
                var_44_1 = esi_3
                ecx_11 = *(arg6 + 0x74) - *(arg6 + 0x70)
                
                if (esi_3 s>= ecx_11 s/ 0x70)
                    goto label_604f14
                
                edx_5 = var_30_2
        
        int32_t* var_74_9 = edi_1
        sub_456ff0(&var_3c, &var_34, *edi_1)
        sub_403160(var_3c, 1, 0x2c)
    else
        ebx.b = 0
else
    if (sub_4090e0(&var_2c, arg2).b == 0)
        goto label_604d55
    
    ebx.b = 1

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
