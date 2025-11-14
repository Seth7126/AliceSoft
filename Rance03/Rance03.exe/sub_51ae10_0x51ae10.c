// 函数: sub_51ae10
// 地址: 0x51ae10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c2923
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_bc = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** var_4c = nullptr
int32_t var_48 = 0
int32_t var_44 = 0
int32_t var_4 = 0
int32_t result_1 = 0
int32_t var_64 = 0
int32_t var_60 = 0
var_4.b = 1
bool var_a2 = true
sub_414b60(&result_1, &var_a2)
var_a2 = true
sub_414b60(&result_1, &var_a2)
sub_51b860(&var_4c, arg1, &result_1)
int32_t result_2 = result_1
var_a2 = true
sub_414b60(&result_1, &var_a2)
void* eax_4 = arg2
struct partsengine::CCharSpriteProperty::VTable* const var_40 =
    &partsengine::CCharSpriteProperty::`vftable'
uint128_t xmm1 = *(eax_4 + 0x10)
int32_t ebp = *(eax_4 + 8)
uint128_t xmm0 = *(eax_4 + 0x28)
int32_t ecx_3 = *(eax_4 + 0xc)
int32_t xmm2 = *(eax_4 + 0x20)
int32_t xmm3 = *(eax_4 + 0x24)
int32_t var_a0 = ebp
int32_t var_3c = ebp
int32_t var_58 = ecx_3
int32_t var_38 = ecx_3
uint128_t var_98 = xmm1
uint128_t var_34 = xmm1
int32_t var_50 = xmm2
int32_t var_24 = xmm2
int32_t var_5c = xmm3
int32_t var_20 = xmm3
uint128_t var_78 = xmm0
uint128_t var_1c = xmm0
var_4.b = 2
struct _EXCEPTION_REGISTRATION_RECORD** edi = var_4c
struct _EXCEPTION_REGISTRATION_RECORD** esi = edi
int32_t ebx = var_48

if (edi != ebx)
    do
        struct _EXCEPTION_REGISTRATION_RECORD** var_84 = nullptr
        int32_t var_80_1 = 0
        int32_t var_7c_1 = 0
        var_4.b = 3
        sub_51b860(&var_84, esi, &result_1)
        struct _EXCEPTION_REGISTRATION_RECORD** edi_1 = var_84
        
        if ((var_80_1 - edi_1) s/ 0x18 == 2)
            void* ebx_2 = &edi_1[6]
            void* eax_9
            
            if (edi_1[0xb] u< 0x10)
                eax_9 = ebx_2
            else
                eax_9 = *ebx_2
            
            int32_t var_9c
            int32_t* var_c0_10 = &var_9c
            bool var_a1_1 = sub_69b31c(eax_9, 0x6dcf3c) == 1
            
            if (*(ebx_2 + 0x14) u>= 0x10)
                ebx_2 = *ebx_2
            
            int32_t var_54
            int32_t* var_c0_11 = &var_54
            int32_t eax_11 = sub_69b31c(ebx_2, 0x6dcf38)
            int32_t ebp_1 = edi_1[5]
            int32_t ebx_3 = edi_1[4]
            var_a2 = eax_11 == 1
            struct _EXCEPTION_REGISTRATION_RECORD* ecx_8
            
            if (ebp_1 u< 0x10)
                ecx_8 = edi_1
            else
                ecx_8 = *edi_1
            
            int32_t eax_12 = 4
            
            if (ebx_3 u< 4)
                eax_12 = ebx_3
            
            int32_t eax_13 = sub_405190(eax_12, "type", ecx_8, eax_12)
            bool cond:1_1 = eax_13 == 0
            
            if (eax_13 == 0)
                if (ebx_3 u>= 4)
                    eax_13.b = ebx_3 != 4
                else
                    eax_13 = 0xffffffff
                
                cond:1_1 = eax_13 == 0
            
            eax_13.b = cond:1_1
            
            if (eax_13.b == 0 || var_a1_1 == 0)
                struct _EXCEPTION_REGISTRATION_RECORD* ecx_9
                
                if (ebp_1 u< 0x10)
                    ecx_9 = edi_1
                else
                    ecx_9 = *edi_1
                
                int32_t eax_14 = 4
                
                if (ebx_3 u< 4)
                    eax_14 = ebx_3
                
                int32_t eax_15 = sub_405190(eax_14, "size", ecx_9, eax_14)
                bool cond:2_1 = eax_15 == 0
                
                if (eax_15 == 0)
                    if (ebx_3 u>= 4)
                        eax_15.b = ebx_3 != 4
                    else
                        eax_15 = 0xffffffff
                    
                    cond:2_1 = eax_15 == 0
                
                eax_15.b = cond:2_1
                
                if (eax_15.b == 0 || var_a1_1 == 0)
                    struct _EXCEPTION_REGISTRATION_RECORD* ecx_10
                    
                    if (ebp_1 u< 0x10)
                        ecx_10 = edi_1
                    else
                        ecx_10 = *edi_1
                    
                    int32_t eax_17 = 1
                    
                    if (ebx_3 u< 1)
                        eax_17 = ebx_3
                    
                    int32_t eax_18 = sub_405190(eax_17, 0x6e2d14, ecx_10, eax_17)
                    bool cond:3_1 = eax_18 == 0
                    
                    if (eax_18 == 0)
                        if (ebx_3 u>= 1)
                            eax_18.b = ebx_3 != 1
                        else
                            eax_18 = 0xffffffff
                        
                        cond:3_1 = eax_18 == 0
                    
                    ebx_3.b = var_a1_1
                    eax_18.b = cond:3_1
                    uint128_t var_98_1
                    int32_t eax_21
                    int32_t ecx_12
                    
                    if (eax_18.b != 0 && ebx_3.b != 0)
                        int32_t eax_19 = var_9c
                        int32_t ecx_11 = 0
                        
                        if (eax_19 s> 0)
                            ecx_11 = eax_19
                        
                        int32_t xmm0_2 = _mm_bsrli_si128(var_98, 4)
                        var_98_1 = var_98
                        
                        if (ecx_11 s> 0xff)
                            ecx_11 = 0xff
                        
                        int32_t xmm1_2 = _mm_bsrli_si128(var_98, 8)
                        var_98_1.d = ecx_11
                        ecx_12 = 0
                        
                        if (xmm0_2 s> 0)
                            ecx_12 = xmm0_2
                        
                        eax_21 = xmm1_2
                        goto label_51b260
                    
                    int32_t ecx_13
                    
                    if (sub_40c250(edi_1, 0x6e2d18) != 0 && ebx_3.b != 0)
                        int32_t ecx_15 = 0
                        int32_t eax_23 = var_98
                        var_98_1 = var_98
                        int32_t xmm0_5 = _mm_bsrli_si128(var_98, 8)
                        
                        if (eax_23 s> 0)
                            ecx_15 = eax_23
                        
                        int32_t eax_24 = var_9c
                        
                        if (ecx_15 s> 0xff)
                            ecx_15 = 0xff
                        
                        var_98_1.d = ecx_15
                        ecx_12 = 0
                        
                        if (eax_24 s> 0)
                            ecx_12 = eax_24
                        
                        eax_21 = xmm0_5
                    label_51b260:
                        var_98_1:0xc.d = 0xff
                        
                        if (ecx_12 s> 0xff)
                            ecx_12 = 0xff
                        
                        var_98_1:4.d = ecx_12
                        ecx_13 = 0
                        
                        if (eax_21 s> 0)
                            ecx_13 = eax_21
                        
                        if (ecx_13 s> 0xff)
                            ecx_13 = 0xff
                        
                        goto label_51b277
                    
                    if (sub_40c250(edi_1, 0x6e2e04) == 0 || ebx_3.b == 0)
                        char eax_29 = sub_40c250(edi_1, "bold")
                        ebx_3:1.b = var_a2
                        
                        if (eax_29 == 0 || ebx_3:1.b == 0)
                            if (sub_40c250(edi_1, "edge") == 0 || ebx_3:1.b == 0)
                                char eax_31
                                int32_t ecx_22
                                eax_31, ecx_22 = sub_40c250(edi_1, 0x6e2e18)
                                int32_t var_cc_1
                                int32_t var_c8_4
                                int32_t var_c4_3
                                
                                if (eax_31 == 0 || ebx_3.b == 0)
                                    char eax_34
                                    int32_t ecx_24
                                    eax_34, ecx_24 = sub_40c250(edi_1, 0x6e2dec)
                                    uint128_t xmm1_5
                                    
                                    if (eax_34 != 0 && ebx_3.b != 0)
                                        xmm1_5 = var_78
                                        int32_t var_c0_16 = ecx_24
                                        var_c4_3 = _mm_bsrli_si128(xmm1_5, 8)
                                        var_c8_4 = var_9c
                                    label_51b459:
                                        var_78 = xmm1_5
                                        var_cc_1 = xmm1_5
                                        goto label_51b464
                                    
                                    char eax_36
                                    int32_t ecx_26
                                    eax_36, ecx_26 = sub_40c250(edi_1, 0x6e2df0)
                                    
                                    if (eax_36 != 0 && ebx_3.b != 0)
                                        xmm1_5 = var_78
                                        int32_t var_c0_17 = ecx_26
                                        var_c4_3 = var_9c
                                        var_c8_4 = _mm_bsrli_si128(xmm1_5, 4)
                                        goto label_51b459
                                else
                                    uint128_t xmm1_3 = var_78
                                    int32_t var_c0_15 = ecx_22
                                    int32_t xmm0_11 = _mm_bsrli_si128(xmm1_3, 8)
                                    var_78 = xmm1_3
                                    var_c4_3 = xmm0_11
                                    var_c8_4 = _mm_bsrli_si128(xmm1_3, 4)
                                    var_cc_1 = var_9c
                                label_51b464:
                                    sub_517c20(&var_78, var_cc_1, var_c8_4, var_c4_3)
                                    uint128_t xmm0_16 = var_78
                                    uint128_t var_1c_1 = xmm0_16
                                    var_78 = xmm0_16
                            else
                                int32_t xmm0_9 = var_54
                                var_5c = xmm0_9
                                int32_t var_20_1 = xmm0_9
                        else
                            int32_t xmm0_8 = var_54
                            var_50 = xmm0_8
                            int32_t var_24_1 = xmm0_8
                    else
                        int32_t ecx_17 = 0
                        int32_t eax_26 = var_98
                        var_98_1 = var_98
                        var_98_1:0xc.d = 0xff
                        int32_t xmm0_7 = _mm_bsrli_si128(var_98, 4)
                        
                        if (eax_26 s> 0)
                            ecx_17 = eax_26
                        
                        if (ecx_17 s> 0xff)
                            ecx_17 = 0xff
                        
                        var_98_1.d = ecx_17
                        int32_t ecx_18 = 0
                        
                        if (xmm0_7 s> 0)
                            ecx_18 = xmm0_7
                        
                        int32_t eax_28 = var_9c
                        
                        if (ecx_18 s> 0xff)
                            ecx_18 = 0xff
                        
                        var_98_1:4.d = ecx_18
                        ecx_13 = 0
                        
                        if (eax_28 s> 0)
                            ecx_13 = eax_28
                        
                        if (ecx_13 s> 0xff)
                            ecx_13 = 0xff
                        
                    label_51b277:
                        var_98_1:8.d = ecx_13
                        var_98 = var_98_1
                        uint128_t var_34_1 = var_98_1
                else
                    int32_t eax_16 = var_9c
                    var_58 = eax_16
                    int32_t var_38_1 = eax_16
                
                ebp = var_a0
            else
                ebp = var_9c
                var_a0 = ebp
                int32_t var_3c_1 = ebp
            
            var_4.b = 2
            sub_4107c0(edi_1, var_80_1)
            j__free(edi_1)
            var_84 = nullptr
            int32_t var_80_3 = 0
            int32_t var_7c_3 = 0
        else
            var_4.b = 2
            
            if (edi_1 != 0)
                sub_4107c0(edi_1, var_80_1)
                j__free(edi_1)
                var_84 = nullptr
                int32_t var_80_2 = 0
                int32_t var_7c_2 = 0
            
            ebp = var_a0
        
        ebx = var_48
        esi = &esi[6]
    while (esi != ebx)
    
    xmm0 = var_78
    eax_4 = arg2
    xmm1 = var_98
    ecx_3 = var_58
    xmm2 = var_50
    xmm3 = var_5c
    edi = var_4c

*(eax_4 + 8) = ebp
*(eax_4 + 0xc) = ecx_3
*(eax_4 + 0x10) = xmm1
*(eax_4 + 0x20) = xmm2
*(eax_4 + 0x24) = xmm3
*(eax_4 + 0x28) = xmm0
int32_t result = result_1

if (result != 0)
    result = j__free(result)

if (edi != 0)
    struct _EXCEPTION_REGISTRATION_RECORD** esi_1 = edi
    
    if (edi != ebx)
        do
            if (esi_1[5] u>= 0x10)
                j__free(*esi_1)
            
            esi_1[5] = 0xf
            esi_1[4] = 0
            *esi_1 = nullptr
            esi_1 = &esi_1[6]
        while (esi_1 != ebx)
    
    result = j__free(edi)

fsbase->NtTib.ExceptionList = ExceptionList
return result
