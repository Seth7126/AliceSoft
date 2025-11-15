// 函数: sub_4c87c0
// 地址: 0x4c87c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73374e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*arg1 != 0)
    int32_t eax_3 = *(arg2 + 0x20)
    int32_t edx_1 = *(arg2 + 0xc)
    int32_t ecx_1 = *(arg2 + 0x10)
    int32_t ebx_1 = *(arg2 + 0x1c)
    int32_t eax_4 = *(arg2 + 0x2c)
    int32_t var_88 = eax_4
    int32_t eax_5 = *(arg2 + 0x30)
    int32_t var_78 = edx_1
    int32_t edx_2 = *(arg2 + 0x18)
    int32_t ecx_2 = *(arg2 + 0x14)
    int32_t var_80 = eax_5
    int32_t var_84 = ecx_2
    int32_t var_7c
    int32_t* ecx_3 = &var_7c
    var_7c = edx_2
    
    if (eax_5 s>= edx_2)
        ecx_3 = &var_80
    
    int32_t* eax_6 = &var_84
    
    if (eax_4 s>= ecx_2)
        eax_6 = &var_88
    
    struct common::CPoint::VTable* const var_a0_1 = &common::CPoint::`vftable'
    int32_t var_9c_1 = *(arg2 + 0xc)
    int32_t var_98_1 = ecx_1
    struct common::CSize::VTable* const var_94_1 = &common::CSize::`vftable'
    int32_t var_90_1 = *eax_6
    int32_t var_8c_1 = *ecx_3
    struct common::CRect::VTable* const var_a4 = &common::CRect::`vftable'
    int32_t var_8_1 = 0
    void* var_114
    sub_54d5a0(&var_114)
    var_8_1.b = 1
    char var_2c
    sub_4c59c0(&var_2c, arg2 + 0xac)
    var_8_1.b = 2
    char var_128_3
    
    if (sub_4c5910(arg2 + 0xac) == 0)
        var_128_3 = 0
    else
        var_128_3 = 1
    
    void* var_5c
    char var_44
    
    if (sub_54db70(&var_114, &var_2c, &var_a4, var_128_3) != 0)
        void* eax_16 = var_114
        int32_t* ecx_11
        int32_t esi_3
        
        if (eax_16 != 0)
            char var_fe
            char ecx_7 = var_fe
            int32_t var_e4
            
            if (ecx_7 == 0)
                int32_t* edx_7 = *(eax_16 + 0x118)
                
                if (edx_7 != 0)
                    ecx_7 = var_fe
                    esi_3 = (*(*edx_7 + 0x14))(eax_2)
                    eax_16 = var_114
                else
                    esi_3 = 0
            else
                esi_3 = var_e4
            
            if (eax_16 != 0)
                int32_t* var_e8
                
                if (ecx_7 == 0)
                    ecx_11 = *(eax_16 + 0x118)
                    
                    if (ecx_11 != 0)
                        ecx_11 = (*(*ecx_11 + 0x10))(eax_2)
                        eax_16 = var_114
                else
                    ecx_11 = var_e8
                
                if (eax_16 != 0)
                    eax_16 = *(eax_16 + 0x118)
            else
                ecx_11 = nullptr
        else
            esi_3 = 0
            ecx_11 = nullptr
        
        int32_t var_128_5 = esi_3
        int32_t* var_12c_6 = ecx_11
        void* var_138_2 = eax_16
        int32_t var_13c_2 = eax_3
        
        if (sub_54f690(arg1, ebx_1) != 0)
            ebx_1.b = 1
        else
            sub_403360(&var_5c, 0x763600)
            var_8_1.b = 5
            var_8_1.b = 6
            sub_45aae0(sub_4cb560(&var_78, &var_5c, &var_44, &var_78, ecx_1, ecx_2, edx_2, ebx_1, 
                eax_3, eax_4, eax_5))
            sub_403320(&var_44)
            sub_403320(&var_5c)
            ebx_1.b = 0
    else
        sub_403360(&var_5c, 0x762a70)
        var_8_1.b = 3
        var_8_1.b = 4
        sub_45aae0(sub_4cb560(&var_78, &var_5c, &var_44, &var_78, ecx_1, ecx_2, edx_2, ebx_1, 
            eax_3, eax_4, eax_5))
        int32_t var_30
        
        if (var_30 u>= 0x10)
            sub_403160(var_44.d, var_30 + 1, 1)
        
        int32_t var_30_1 = 0xf
        int32_t var_34_1 = 0
        var_44 = 0
        int32_t var_48
        
        if (var_48 u< 0x10)
            ebx_1.b = 0
        else
            sub_403160(var_5c, var_48 + 1, 1)
            ebx_1.b = 0
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c.d, var_18 + 1, 1)
    
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    Concurrency::details::AllocatorBucket::~AllocatorBucket(&var_114)
    result.b = ebx_1.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
