// 函数: sub_4c7370
// 地址: 0x4c7370
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7336a6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg1
int32_t* result_1 = result
void* ecx = *result

if (ecx != 0)
    void* edx_1 = *(arg2 + 0x58)
    int32_t edx_2 = *(arg2 + 0x5c)
    int32_t* var_68_1
    
    if (*(result + 0x16) == 0)
        int32_t* ecx_1 = *(ecx + 0x118)
        
        if (ecx_1 != 0)
            var_68_1 = (*(*ecx_1 + 0x10))(eax_2)
            result = result_1
        else
            var_68_1 = ecx_1
    else
        var_68_1 = result[0xb]
    
    int32_t* ecx_2 = *result
    int32_t* var_5c_1
    
    if (ecx_2 == 0)
        var_5c_1 = ecx_2
    else if (*(result + 0x16) == 0)
        int32_t* ecx_3 = ecx_2[0x46]
        
        if (ecx_3 != 0)
            var_5c_1 = (*(*ecx_3 + 0x14))(eax_2)
        else
            var_5c_1 = ecx_3
    else
        var_5c_1 = result[0xc]
    
    int32_t var_88 = 0
    int32_t var_84_1 = 0
    int32_t var_80_1 = 0
    int32_t var_8_1 = 0
    sub_4c61f0(&var_88, arg2 + 0x94)
    void* var_50_1 = *(arg2 + 0x1c)
    int32_t var_54_1 = *(arg2 + 0x20)
    int32_t* var_fc
    sub_54d5a0(&var_fc)
    var_8_1.b = 1
    int32_t edi_2 = var_88
    int32_t var_c0_1 = *(arg2 + 0x64)
    int32_t var_bc_1 = *(arg2 + 0x68)
    int128_t var_b8_1 = *(arg2 + 0x6c)
    int32_t var_a8_1 = *(arg2 + 0x7c)
    int32_t var_a4_1 = *(arg2 + 0x80)
    int32_t* esi_2 = nullptr
    int32_t eax_15 = (var_84_1 - edi_2) s/ 0x18
    char var_49_1 = 0
    int128_t var_a0_1 = *(arg2 + 0x84)
    void* var_58
    
    if (eax_15 s> 0)
        while (true)
            void* eax_16 = esi_2 * 3
            int32_t* edi_3 = edi_2 + (eax_16 << 3)
            int32_t* ecx_7
            
            if (*(edi_2 + (eax_16 << 3) + 0x14) u< 0x10)
                ecx_7 = edi_3
            else
                ecx_7 = *edi_3
            
            int32_t ebx_1 = edi_3[4]
            int32_t eax_17 = 1
            
            if (ebx_1 u< 1)
                eax_17 = ebx_1
            
            if (sub_406ac0(eax_17, 0x762a24, ecx_7, eax_17) != 0 || ebx_1 u< 1 || ebx_1 u> 1)
                int32_t* ebx_4
                char var_e6
                void var_c4
                void* var_64
                void* var_48
                int32_t* eax_36
                int32_t* result_2
                
                if (ebx_1 != 2)
                label_4c76ed:
                    int32_t* eax_37 = sub_641870(&var_c4, edi_3)
                    
                    if (eax_37 != 0)
                        int32_t* ecx_23 = var_fc
                        
                        if (ecx_23 == 0)
                            sub_54d770(&var_fc)
                            ecx_23 = var_fc
                        
                        sub_450940(ecx_23, eax_37)
                        var_e6 = 0
                        (*(*eax_37 + 4))(eax_2)
                    
                    int32_t* edx_8 = var_fc
                    void* edi_9
                    
                    if (edx_8 != 0)
                        eax_37.b = var_e6
                        int32_t* var_d0
                        
                        if (eax_37.b == 0)
                            int32_t* ecx_26 = edx_8[0x46]
                            
                            if (ecx_26 != 0)
                                eax_37 = (*(*ecx_26 + 0x10))(eax_2)
                                edx_8 = var_fc
                                ebx_4 = eax_37
                                eax_37.b = var_e6
                            else
                                ebx_4 = nullptr
                        else
                            ebx_4 = var_d0
                        var_48 = ebx_4
                        
                        if (edx_8 == 0)
                            edi_9 = nullptr
                        else
                            void* var_cc
                            
                            if (eax_37.b == 0)
                                int32_t* ecx_27 = edx_8[0x46]
                                
                                if (ecx_27 != 0)
                                    edi_9 = (*(*ecx_27 + 0x14))(eax_2)
                                else
                                    edi_9 = nullptr
                            else
                                edi_9 = var_cc
                    else
                        ebx_4 = nullptr
                        edi_9 = nullptr
                        var_48 = nullptr
                    
                    void** eax_42 = &var_48
                    void* ecx_29 = var_68_1 - var_50_1
                    var_58 = ecx_29
                    var_64 = edi_9
                    
                    if (ebx_4 s>= ecx_29)
                        eax_42 = &var_58
                    
                    void* ecx_31 = var_5c_1 - var_54_1
                    void* eax_43 = *eax_42
                    var_58 = ecx_31
                    var_48 = eax_43
                    void** eax_44 = &var_64
                    
                    if (edi_9 s>= ecx_31)
                        eax_44 = &var_58
                    
                    int32_t* edx_9 = var_fc
                    void* ecx_33 = *result_1
                    void* edi_10 = *eax_44
                    
                    if (ecx_33 == 0)
                        goto label_4c781f
                    
                    int32_t* ecx_34 = *(ecx_33 + 0x118)
                    
                    if (ecx_34 == 0)
                        goto label_4c781f
                    
                    if ((*(*ecx_34 + 0x28))(eax_2) == 0)
                        edx_9 = var_fc
                    label_4c781f:
                        
                        if (edx_9 != 0)
                            eax_36 = edx_9[0x46]
                        else
                            eax_36 = nullptr
                        
                        result_2 = result_1
                        void* var_110_12 = edi_10
                        void* var_114_9 = var_48
                    label_4c7835:
                        int32_t* var_120_4 = eax_36
                        int32_t var_124_3 = var_54_1
                        sub_54f8d0(result_2, var_50_1)
                    else
                        int32_t* eax_48 = var_fc
                        
                        if (eax_48 != 0)
                            eax_48 = eax_48[0x46]
                        
                        void* var_110_11 = edi_10
                        void* var_114_8 = var_48
                        int32_t* var_120_3 = eax_48
                        int32_t var_124_2 = var_54_1
                        sub_54f7b0(result_1, var_50_1)
                else
                    int32_t ecx_9 = edi_3[5]
                    int32_t* eax_22
                    
                    if (ecx_9 u< 0x10)
                        eax_22 = edi_3
                    else
                        eax_22 = *edi_3
                    
                    if (*eax_22 != 0x81)
                        goto label_4c76ed
                    
                    int32_t* eax_23
                    
                    if (ecx_9 u< 0x10)
                        eax_23 = edi_3
                    else
                        eax_23 = *edi_3
                    
                    if (*(eax_23 + 1) != 0x5c)
                        goto label_4c76ed
                    
                    void* esi_3 = esi_2 + 1
                    int32_t edi_4 = 1
                    
                    if (esi_3 s< eax_15)
                        void* eax_25 = var_88 + esi_3 * 0x18
                        
                        while (*(eax_25 + 0x10) == 2)
                            int32_t edx_6 = *(eax_25 + 0x14)
                            char* ecx_11
                            
                            if (edx_6 u< 0x10)
                                ecx_11 = eax_25
                            else
                                ecx_11 = *eax_25
                            
                            if (*ecx_11 != 0x81)
                                break
                            
                            void* ecx_12
                            
                            if (edx_6 u< 0x10)
                                ecx_12 = eax_25
                            else
                                ecx_12 = *eax_25
                            
                            if (*(ecx_12 + 1) != 0x5c)
                                break
                            
                            esi_3 += 1
                            edi_4 += 1
                            eax_25 += 0x18
                            
                            if (esi_3 s>= eax_15)
                                break
                    
                    var_48 = nullptr
                    void* eax_26 = esi_3 - 1
                    void* var_6c = nullptr
                    
                    if (esi_3 s>= eax_15)
                        eax_26 = esi_3
                    
                    esi_2 = eax_26
                    sub_4c6cd0(&var_48, &var_6c, edi_4, arg2 + 0x60, edx_1)
                    void* edi_5 = var_48
                    void** eax_27 = &var_48
                    void* ecx_14 = var_68_1 - var_50_1
                    void* edx_7 = var_6c
                    var_64 = ecx_14
                    
                    if (edi_5 s>= ecx_14)
                        eax_27 = &var_64
                    
                    void* ecx_16 = var_5c_1 - var_54_1
                    var_48 = edi_5
                    var_58 = edx_7
                    ebx_4 = *eax_27
                    void** eax_28 = &var_58
                    var_64 = ecx_16
                    
                    if (edx_7 s>= ecx_16)
                        eax_28 = &var_64
                    
                    var_48 = *eax_28
                    int32_t* eax_30
                    
                    if (edi_5 s> 0 && edx_7 s> 0)
                        eax_30 = sub_63de80(esi_2, edi_5, edi_5, edx_7, &var_c4)
                    
                    if (edi_5 s<= 0 || edx_7 s<= 0 || eax_30 == 0)
                        var_49_1 = 1
                        break
                    
                    int32_t* ecx_17 = var_fc
                    
                    if (ecx_17 == 0)
                        sub_54d770(&var_fc)
                        ecx_17 = var_fc
                    
                    sub_450940(ecx_17, eax_30)
                    var_e6 = 0
                    (*(*eax_30 + 4))(eax_2)
                    void* ecx_20 = *result_1
                    
                    if (ecx_20 == 0)
                    label_4c76bf:
                        eax_36 = var_fc
                        
                        if (eax_36 != 0)
                            void* var_110_8 = var_48
                            eax_36 = eax_36[0x46]
                            result_2 = result_1
                            int32_t* var_114_6 = ebx_4
                        else
                            void* var_110_7 = var_48
                            result_2 = result_1
                            int32_t* var_114_5 = ebx_4
                        
                        goto label_4c7835
                    
                    int32_t* ecx_21 = *(ecx_20 + 0x118)
                    
                    if (ecx_21 == 0)
                        goto label_4c76bf
                    
                    if ((*(*ecx_21 + 0x28))() == 0)
                        goto label_4c76bf
                    
                    int32_t* eax_35 = var_fc
                    
                    if (eax_35 != 0)
                        eax_35 = eax_35[0x46]
                    
                    void* var_110_6 = var_48
                    int32_t* var_114_4 = ebx_4
                    int32_t* var_120_2 = eax_35
                    int32_t var_124_1 = var_54_1
                    sub_54f7b0(result_1, var_50_1)
                var_50_1 += edx_1 + ebx_4
            else
                var_54_1 += sub_643b20(arg2 + 0x60) + edx_2
                var_50_1 = *(arg2 + 0x1c)
            
            esi_2 += 1
            
            if (esi_2 s>= eax_15)
                break
            
            edi_2 = var_88
    
    int32_t* ecx_36 = var_fc
    
    if (ecx_36 != 0)
        int32_t edx_10 = ecx_36[1]
        ecx_36[1] -= 1
        (**ecx_36)(edx_10 - 1)
        var_fc = nullptr
        char var_e8_1 = 1
    
    void* ebx
    
    if (var_49_1 == 0)
        ebx.b = 1
    else
        var_58 = *(arg2 + 0x1c)
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        char var_2c = 0
        sub_403490(&var_2c, 0x762a28, 0x47)
        void* eax_54 = arg2 + 0x94
        var_8_1.b = 2
        
        if (*(eax_54 + 0x14) u>= 0x10)
            eax_54 = *eax_54
        
        var_8_1.b = 3
        char var_44
        sub_45aae0(sub_424ea0(&var_58, &var_2c, &var_44, &var_58, *(arg2 + 0x20), eax_54))
        int32_t var_30
        
        if (var_30 u>= 0x10)
            sub_403160(var_44.d, var_30 + 1, 1)
        
        int32_t var_30_1 = 0xf
        int32_t var_34_1 = 0
        var_44 = 0
        
        if (var_18_1 u>= 0x10)
            sub_403160(var_2c.d, var_18_1 + 1, 1)
        
        ebx.b = 0
    
    Concurrency::details::AllocatorBucket::~AllocatorBucket(&var_fc)
    sub_417070(&var_88)
    result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
