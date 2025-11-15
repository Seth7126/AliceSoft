// 函数: sub_4ca690
// 地址: 0x4ca690
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73385e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result

if (*arg1 != 0)
    int32_t eax_3 = *(arg2 + 0x1c)
    int32_t edi_1 = *(arg2 + 0x18)
    int32_t ecx_1 = *(arg2 + 0x10)
    int32_t edx_1 = *(arg2 + 0x14)
    int32_t ebx_1 = *(arg2 + 0x2c)
    int32_t eax_4 = *(arg2 + 0x20)
    int32_t eax_5 = *(arg2 + 0x30)
    int32_t eax_6 = *(arg2 + 0xc)
    int32_t edi_2 = *(arg2 + 8)
    int32_t var_78 = eax_6
    int32_t var_90_1 = eax_6
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
    
    char var_44
    void* var_2c
    
    if (sub_54db70(&var_10c, &var_5c, &var_98, var_120_3) == 0)
        sub_403360(&var_2c, 0x763a68)
        var_8_1.b = 3
        var_8_1.b = 4
        sub_45aae0(sub_4cb560(&var_78, &var_2c, &var_44, &var_78, ecx_1, edx_1, edi_1, eax_3, 
            eax_4, ebx_1, eax_5))
        int32_t var_30
        
        if (var_30 u>= 0x10)
            sub_403160(var_44.d, var_30 + 1, 1)
        
        int32_t var_30_1 = 0xf
        int32_t var_34_1 = 0
        var_44 = 0
        int32_t var_18
        
        if (var_18 u< 0x10)
            ebx_1.b = 0
        else
            sub_403160(var_2c, var_18 + 1, 1)
            ebx_1.b = 0
    else
        char* eax_18
        int32_t edi_3
        
        if (edi_2 != 1)
            edi_3 = eax_5
            
            if (edi_2 == 2)
                if (sub_54e0c0(&var_10c, ebx_1, edi_3) != 0)
                    goto label_4ca8cd
                
                sub_403360(&var_2c, 0x763e38)
                var_8_1.b = 7
                eax_18 = sub_4cb560(&var_78, &var_2c, &var_44, &var_78, ecx_1, edx_1, edi_1, eax_3, 
                    eax_4, ebx_1, edi_3)
                var_8_1.b = 8
                goto label_4ca998
            
        label_4ca8cd:
            void* eax_23 = var_10c
            int32_t* ecx_14
            int32_t esi_5
            
            if (eax_23 != 0)
                char var_f6
                char ecx_4 = var_f6
                int32_t var_dc
                
                if (ecx_4 == 0)
                    int32_t* edx_5 = *(eax_23 + 0x118)
                    
                    if (edx_5 != 0)
                        ecx_4 = var_f6
                        esi_5 = (*(*edx_5 + 0x14))(eax_2)
                        eax_23 = var_10c
                    else
                        esi_5 = 0
                else
                    esi_5 = var_dc
                
                if (eax_23 != 0)
                    int32_t* var_e0
                    
                    if (ecx_4 == 0)
                        ecx_14 = *(eax_23 + 0x118)
                        
                        if (ecx_14 != 0)
                            ecx_14 = (*(*ecx_14 + 0x10))(eax_2)
                            eax_23 = var_10c
                    else
                        ecx_14 = var_e0
                    
                    if (eax_23 != 0)
                        eax_23 = *(eax_23 + 0x118)
                else
                    ecx_14 = nullptr
            else
                esi_5 = 0
                ecx_14 = nullptr
            
            int32_t var_120_9 = esi_5
            int32_t* var_124_10 = ecx_14
            void* var_130_4 = eax_23
            int32_t var_134_4 = eax_4
            
            if (sub_54f840(arg1, eax_3) == 0)
                sub_403360(&var_2c, 0x763d80)
                var_8_1.b = 9
                eax_18 = sub_4cb560(&var_78, &var_2c, &var_44, &var_78, ecx_1, edx_1, edi_1, eax_3, 
                    eax_4, ebx_1, edi_3)
                var_8_1.b = 0xa
                goto label_4ca998
            
            ebx_1.b = 1
        else
            edi_3 = eax_5
            
            if (sub_54dfa0(&var_10c, ebx_1, edi_3) != 0)
                goto label_4ca8cd
            
            sub_403360(&var_2c, 0x7639b0)
            var_8_1.b = 5
            eax_18 = sub_4cb560(&var_78, &var_2c, &var_44, &var_78, ecx_1, edx_1, edi_1, eax_3, 
                eax_4, ebx_1, edi_3)
            var_8_1.b = 6
        label_4ca998:
            sub_45aae0(eax_18)
            sub_403320(&var_44)
            sub_403320(&var_2c)
            ebx_1.b = 0
    int32_t var_48
    
    if (var_48 u>= 0x10)
        sub_403160(var_5c.d, var_48 + 1, 1)
    
    int32_t var_48_1 = 0xf
    int32_t var_4c_1 = 0
    var_5c = 0
    Concurrency::details::AllocatorBucket::~AllocatorBucket(&var_10c)
    result.b = ebx_1.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
