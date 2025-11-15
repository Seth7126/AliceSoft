// 函数: sub_4c9230
// 地址: 0x4c9230
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7338fe
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*arg1 != 0)
    int32_t eax_3 = *(arg2 + 0x1c)
    int32_t edi_1 = *(arg2 + 0x18)
    int32_t ecx_1 = *(arg2 + 0x10)
    int32_t edx_1 = *(arg2 + 0x14)
    int32_t eax_4 = *(arg2 + 0x20)
    int32_t eax_5 = *(arg2 + 0x2c)
    int32_t eax_6 = *(arg2 + 0x30)
    int32_t eax_7 = *(arg2 + 0xc)
    int32_t edi_2 = *(arg2 + 8)
    int32_t var_78 = eax_7
    int32_t var_90_1 = eax_7
    struct common::CPoint::VTable* const var_94_1 = &common::CPoint::`vftable'
    int32_t var_8c_1 = ecx_1
    struct common::CSize::VTable* const var_88_1 = &common::CSize::`vftable'
    int32_t var_84_1 = edx_1
    int32_t var_80_1 = edi_1
    struct common::CRect::VTable* const var_98 = &common::CRect::`vftable'
    int32_t var_8_1 = 0
    void* var_10c
    sub_54d5a0(&var_10c)
    var_8_1.b = 1
    char var_5c
    sub_4c59c0(&var_5c, arg2 + 0xac)
    var_8_1.b = 2
    char var_120_3
    
    if (sub_4c5910(arg2 + 0xac) == 0)
        var_120_3 = 0
    else
        var_120_3 = 1
    
    char eax_10
    int32_t* ecx_4
    eax_10, ecx_4 = sub_54db70(&var_10c, &var_5c, &var_98, var_120_3)
    int32_t* ebx
    char var_44
    void* var_2c
    
    if (eax_10 == 0)
        sub_403360(&var_2c, 0x763108)
        var_8_1.b = 3
        var_8_1.b = 4
        sub_45aae0(sub_4cb560(&var_78, &var_2c, &var_44, &var_78, ecx_1, edx_1, edi_1, eax_3, 
            eax_4, eax_5, eax_6))
        int32_t var_30
        
        if (var_30 u>= 0x10)
            sub_403160(var_44.d, var_30 + 1, 1)
        
        int32_t var_30_1 = 0xf
        int32_t var_34_1 = 0
        var_44 = 0
        int32_t var_18
        
        if (var_18 u< 0x10)
            ebx.b = 0
        else
            sub_403160(var_2c, var_18 + 1, 1)
            ebx.b = 0
    else
        char* eax_19
        int32_t edi_3
        
        if (edi_2 != 1)
            edi_3 = eax_5
            
            if (edi_2 == 2)
                char eax_20
                eax_20, ecx_4 = sub_54e0c0(&var_10c, edi_3, eax_6)
                
                if (eax_20 != 0)
                    goto label_4c9475
                
                sub_403360(&var_2c, 0x762fa8)
                var_8_1.b = 7
                eax_19 = sub_4cb560(&var_78, &var_2c, &var_44, &var_78, ecx_1, edx_1, edi_1, eax_3, 
                    eax_4, edi_3, eax_6)
                var_8_1.b = 8
                goto label_4c963b
            
        label_4c9475:
            int32_t eax_22 = *arg1
            char var_f6
            int32_t* var_e0
            int32_t var_dc
            
            if (eax_22 == 0)
            label_4c956f:
                void* eax_35 = var_10c
                int32_t* ecx_19
                int32_t esi_9
                
                if (eax_35 != 0)
                    ecx_4.b = var_f6
                    
                    if (ecx_4.b == 0)
                        int32_t* edx_7 = *(eax_35 + 0x118)
                        
                        if (edx_7 != 0)
                            int32_t eax_34
                            eax_34, ecx_4 = (*(*edx_7 + 0x14))(eax_2)
                            ecx_4.b = var_f6
                            esi_9 = eax_34
                            eax_35 = var_10c
                        else
                            esi_9 = 0
                    else
                        esi_9 = var_dc
                    
                    if (eax_35 != 0)
                        if (ecx_4.b == 0)
                            ecx_19 = *(eax_35 + 0x118)
                            
                            if (ecx_19 != 0)
                                ecx_19 = (*(*ecx_19 + 0x10))(eax_2)
                                eax_35 = var_10c
                        else
                            ecx_19 = var_e0
                        
                        if (eax_35 != 0)
                            eax_35 = *(eax_35 + 0x118)
                    else
                        ecx_19 = nullptr
                else
                    esi_9 = 0
                    ecx_19 = nullptr
                
                int32_t var_120_11 = esi_9
                int32_t* var_124_12 = ecx_19
                void* var_130_6 = eax_35
                int32_t var_134_6 = eax_4
                
                if (sub_54f8d0(arg1, eax_3) == 0)
                    sub_403360(&var_2c, 0x763358)
                    var_8_1.b = 0xb
                    eax_19 = sub_4cb560(&var_78, &var_2c, &var_44, &var_78, ecx_1, edx_1, edi_1, 
                        eax_3, eax_4, edi_3, eax_6)
                    var_8_1.b = 0xc
                    goto label_4c963b
                
                ebx.b = 1
            else
                ecx_4 = *(eax_22 + 0x118)
                
                if (ecx_4 == 0)
                    goto label_4c956f
                
                char eax_25
                eax_25, ecx_4 = (*(*ecx_4 + 0x28))(eax_2)
                
                if (eax_25 == 0)
                    goto label_4c956f
                
                void* eax_26 = var_10c
                int32_t* ecx_14
                int32_t esi_7
                
                if (eax_26 != 0)
                    ecx_4.b = var_f6
                    
                    if (ecx_4.b == 0)
                        int32_t* edx_5 = *(eax_26 + 0x118)
                        
                        if (edx_5 != 0)
                            int32_t eax_28
                            eax_28, ecx_4 = (*(*edx_5 + 0x14))()
                            ecx_4.b = var_f6
                            esi_7 = eax_28
                            eax_26 = var_10c
                        else
                            esi_7 = 0
                    else
                        esi_7 = var_dc
                    
                    if (eax_26 != 0)
                        if (ecx_4.b == 0)
                            ecx_14 = *(eax_26 + 0x118)
                            
                            if (ecx_14 != 0)
                                ecx_14 = (*(*ecx_14 + 0x10))()
                                eax_26 = var_10c
                        else
                            ecx_14 = var_e0
                        
                        if (eax_26 != 0)
                            eax_26 = *(eax_26 + 0x118)
                    else
                        ecx_14 = nullptr
                else
                    esi_7 = 0
                    ecx_14 = nullptr
                
                int32_t var_120_9 = esi_7
                int32_t* var_124_10 = ecx_14
                void* var_130_4 = eax_26
                int32_t var_134_4 = eax_4
                
                if (sub_54f7b0(arg1, eax_3) == 0)
                    sub_403360(&var_2c, 0x762ef8)
                    var_8_1.b = 9
                    eax_19 = sub_4cb560(&var_78, &var_2c, &var_44, &var_78, ecx_1, edx_1, edi_1, 
                        eax_3, eax_4, edi_3, eax_6)
                    var_8_1.b = 0xa
                    goto label_4c963b
                
                ebx.b = 1
        else
            edi_3 = eax_5
            char eax_17
            eax_17, ecx_4 = sub_54dfa0(&var_10c, edi_3, eax_6)
            
            if (eax_17 != 0)
                goto label_4c9475
            
            sub_403360(&var_2c, 0x763058)
            var_8_1.b = 5
            eax_19 = sub_4cb560(&var_78, &var_2c, &var_44, &var_78, ecx_1, edx_1, edi_1, eax_3, 
                eax_4, edi_3, eax_6)
            var_8_1.b = 6
        label_4c963b:
            sub_45aae0(eax_19)
            sub_403320(&var_44)
            sub_403320(&var_2c)
            ebx.b = 0
    int32_t var_48
    
    if (var_48 u>= 0x10)
        sub_403160(var_5c.d, var_48 + 1, 1)
    
    int32_t var_48_1 = 0xf
    int32_t var_4c_1 = 0
    var_5c = 0
    Concurrency::details::AllocatorBucket::~AllocatorBucket(&var_10c)
    result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
