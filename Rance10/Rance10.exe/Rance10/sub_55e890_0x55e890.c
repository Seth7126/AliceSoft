// 函数: sub_55e890
// 地址: 0x55e890
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73b70b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_cc = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg2
void* var_34 = ebx
int32_t* var_84 = nullptr
int32_t var_80 = 0
int32_t var_7c = 0
int32_t var_8_1 = 0
void* var_58 = nullptr
int32_t var_54 = 0
int32_t var_50 = 0
var_8_1.b = 1
bool var_2e = true
sub_4263a0(&var_58, &var_2e)
void** ecx_1 = arg1
int32_t esi = ecx_1[5]
void** edx

if (esi u< 0x10)
    edx = ecx_1
else
    edx = *ecx_1

void* eax_5 = ecx_1[4] - 1 + edx

if (esi u>= 0x10)
    ecx_1 = *ecx_1

int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0

if (ecx_1 + 2 != eax_5)
    sub_403490(&var_2c, ecx_1 + 2, eax_5 - (ecx_1 + 2))

var_8_1.b = 2
sub_55f0d0(&var_84, &var_2c, &var_58)
var_8_1.b = 1

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

void* var_54_1 = var_58
var_2e = true
sub_4263a0(&var_58, &var_2e)
uint128_t xmm0 = *(ebx + 0x10)
int32_t eax_10 = *(ebx + 8)
uint128_t xmm1 = *(ebx + 0x28)
int32_t ecx_5 = *(ebx + 0xc)
int32_t xmm2 = *(ebx + 0x20)
int32_t xmm3 = *(ebx + 0x24)
struct textsurface::CTextSurfaceProperty::VTable* const var_b8 =
    &textsurface::CTextSurfaceProperty::`vftable'
int32_t var_68 = eax_10
int32_t var_b4 = eax_10
int32_t var_6c = ecx_5
int32_t var_b0 = ecx_5
uint128_t var_4c = xmm0
uint128_t var_ac = xmm0
int32_t var_60 = xmm2
int32_t var_9c = xmm2
int32_t var_64 = xmm3
int32_t var_98 = xmm3
uint128_t var_24 = xmm1
uint128_t var_94 = xmm1
var_8_1.b = 3
int32_t* esi_1 = var_84

if (esi_1 != var_80)
    do
        struct _EXCEPTION_REGISTRATION_RECORD** var_78 = nullptr
        int32_t var_74_1 = 0
        int32_t var_70_1 = 0
        var_8_1.b = 4
        sub_55f0d0(&var_78, esi_1, &var_58)
        struct _EXCEPTION_REGISTRATION_RECORD** edi_1 = var_78
        
        if ((var_74_1 - edi_1) s/ 0x18 == 2)
            void* ebx_1 = &edi_1[6]
            char* eax_15
            
            if (edi_1[0xb] u< 0x10)
                eax_15 = ebx_1
            else
                eax_15 = *ebx_1
            
            int32_t var_38
            int32_t* var_d0_5 = &var_38
            bool var_2d_1 = sub_6ca310(eax_15, 0x7942e0) == 1
            
            if (*(ebx_1 + 0x14) u>= 0x10)
                ebx_1 = *ebx_1
            
            int32_t var_5c
            int32_t* var_d0_6 = &var_5c
            var_2e = sub_6ca310(ebx_1, 0x79394c) == 1
            struct _EXCEPTION_REGISTRATION_RECORD* ecx_8
            
            if (edi_1[5] u< 0x10)
                ecx_8 = edi_1
            else
                ecx_8 = *edi_1
            
            int32_t ebx_2 = edi_1[4]
            int32_t eax_18 = 4
            
            if (ebx_2 u< 4)
                eax_18 = ebx_2
            
            int32_t eax_19 = sub_406ac0(eax_18, "type", ecx_8, eax_18)
            
            if (eax_19 != 0 || ebx_2 u< 4 || ebx_2 u> 4 || var_2d_1 == eax_19.b)
                struct _EXCEPTION_REGISTRATION_RECORD* ecx_9
                
                if (edi_1[5] u< 0x10)
                    ecx_9 = edi_1
                else
                    ecx_9 = *edi_1
                
                int32_t eax_21 = 4
                
                if (ebx_2 u< 4)
                    eax_21 = ebx_2
                
                int32_t eax_22 = sub_406ac0(eax_21, "size", ecx_9, eax_21)
                
                if (eax_22 != 0 || ebx_2 u< 4 || ebx_2 u> 4 || var_2d_1 == eax_22.b)
                    struct _EXCEPTION_REGISTRATION_RECORD* ecx_10
                    
                    if (edi_1[5] u< 0x10)
                        ecx_10 = edi_1
                    else
                        ecx_10 = *edi_1
                    
                    int32_t eax_24 = 1
                    
                    if (ebx_2 u< 1)
                        eax_24 = ebx_2
                    
                    int32_t eax_25
                    int32_t ecx_11
                    eax_25, ecx_11 = sub_406ac0(eax_24, 0x767990, ecx_10, eax_24)
                    int32_t var_dc_1
                    int32_t var_d8_5
                    int32_t var_d4_5
                    
                    if (eax_25 != 0 || ebx_2 u< 1 || ebx_2 u> 1 || var_2d_1 == eax_25.b)
                        struct _EXCEPTION_REGISTRATION_RECORD* ecx_19
                        
                        if (edi_1[5] u< 0x10)
                            ecx_19 = edi_1
                        else
                            ecx_19 = *edi_1
                        
                        int32_t eax_30 = 1
                        
                        if (ebx_2 u< 1)
                            eax_30 = ebx_2
                        
                        int32_t eax_31
                        int32_t ecx_20
                        eax_31, ecx_20 = sub_406ac0(eax_30, 0x767994, ecx_19, eax_30)
                        
                        if (eax_31 == 0)
                            bool cond:5_1 = ebx_2 u< 1
                            bool cond:6_1 = ebx_2 u> 1
                            ebx_2.b = var_2d_1
                            
                            if (cond:5_1 || cond:6_1 || ebx_2.b == 0)
                                goto label_55ec96
                            
                            uint128_t xmm1_3 = var_4c
                            int32_t var_d0_12 = ecx_20
                            int32_t xmm0_5 = _mm_bsrli_si128(xmm1_3, 8)
                            var_4c = xmm1_3
                            var_d4_5 = xmm0_5
                            var_d8_5 = var_38
                            var_dc_1 = xmm1_3
                            goto label_55eb96
                        
                        ebx_2.b = var_2d_1
                    label_55ec96:
                        char eax_34
                        int32_t ecx_22
                        eax_34, ecx_22 = sub_407560(edi_1, 0x767998)
                        
                        if (eax_34 != 0 && ebx_2.b != 0)
                            uint128_t xmm1_4 = var_4c
                            int32_t var_d0_13 = ecx_22
                            var_d4_5 = var_38
                            int32_t xmm0_7 = _mm_bsrli_si128(xmm1_4, 4)
                            var_4c = xmm1_4
                            var_d8_5 = xmm0_7
                            var_dc_1 = xmm1_4
                            goto label_55eb96
                        
                        char eax_37 = sub_407560(edi_1, "bold")
                        ebx_2:1.b = var_2e
                        
                        if (eax_37 == 0 || ebx_2:1.b == 0)
                            if (sub_407560(edi_1, "edge") == 0 || ebx_2:1.b == 0)
                                char eax_39
                                int32_t ecx_26
                                eax_39, ecx_26 = sub_407560(edi_1, 0x76785c)
                                
                                if (eax_39 == 0 || ebx_2.b == 0)
                                    char eax_42
                                    int32_t ecx_29
                                    eax_42, ecx_29 = sub_407560(edi_1, 0x767860)
                                    int32_t var_d8_8
                                    int32_t var_d4_8
                                    uint128_t xmm1_7
                                    
                                    if (eax_42 == 0 || ebx_2.b == 0)
                                        char eax_45
                                        int32_t ecx_32
                                        eax_45, ecx_32 = sub_407560(edi_1, 0x767864)
                                        
                                        if (eax_45 != 0 && ebx_2.b != 0)
                                            xmm1_7 = var_24
                                            int32_t var_d0_16 = ecx_32
                                            var_d4_8 = var_38
                                            var_d8_8 = _mm_bsrli_si128(xmm1_7, 4)
                                            goto label_55eda2
                                        
                                        if (sub_407560(edi_1, "leading") == 0 || ebx_2.b == 0)
                                            if (sub_407560(edi_1, "tracking") == 0)
                                                ebx = var_34
                                            else
                                                ebx = var_34
                                                
                                                if (ebx_2.b != 0)
                                                    *(ebx + 0x38) = var_38
                                        else
                                            ebx = var_34
                                            *(ebx + 0x3c) = var_38
                                    else
                                        xmm1_7 = var_24
                                        int32_t var_d0_15 = ecx_29
                                        var_d4_8 = _mm_bsrli_si128(xmm1_7, 8)
                                        var_d8_8 = var_38
                                    label_55eda2:
                                        var_24 = xmm1_7
                                        sub_403090(&var_24, xmm1_7, var_d8_8, var_d4_8)
                                        uint128_t xmm0_15 = var_24
                                        var_24 = xmm0_15
                                        uint128_t var_94_2 = xmm0_15
                                        ebx = var_34
                                else
                                    uint128_t xmm1_5 = var_24
                                    int32_t var_d0_14 = ecx_26
                                    int32_t xmm0_11 = _mm_bsrli_si128(xmm1_5, 8)
                                    var_24 = xmm1_5
                                    int32_t xmm1_6 = _mm_bsrli_si128(xmm1_5, 4)
                                    sub_403090(&var_24, var_38, xmm1_6, xmm0_11)
                                    uint128_t xmm0_12 = var_24
                                    var_24 = xmm0_12
                                    uint128_t var_94_1 = xmm0_12
                                    ebx = var_34
                            else
                                int32_t xmm0_9 = var_5c
                                var_64 = xmm0_9
                                int32_t var_98_1 = xmm0_9
                                ebx = var_34
                        else
                            int32_t xmm0_8 = var_5c
                            var_60 = xmm0_8
                            int32_t var_9c_1 = xmm0_8
                            ebx = var_34
                    else
                        uint128_t xmm1_1 = var_4c
                        int32_t var_d0_10 = ecx_11
                        int32_t xmm0_2 = _mm_bsrli_si128(xmm1_1, 8)
                        var_4c = xmm1_1
                        var_d4_5 = xmm0_2
                        var_d8_5 = _mm_bsrli_si128(xmm1_1, 4)
                        var_dc_1 = var_38
                    label_55eb96:
                        sub_403090(&var_4c, var_dc_1, var_d8_5, var_d4_5)
                        uint128_t xmm0_3 = var_4c
                        var_4c = xmm0_3
                        uint128_t var_ac_1 = xmm0_3
                        ebx = var_34
                else
                    int32_t eax_23 = var_38
                    var_6c = eax_23
                    int32_t var_b0_1 = eax_23
                    ebx = var_34
            else
                int32_t eax_20 = var_38
                var_68 = eax_20
                int32_t var_b4_1 = eax_20
                ebx = var_34
        
        var_8_1.b = 3
        sub_417070(&var_78)
        esi_1 = &esi_1[6]
    while (esi_1 != var_80)
    
    xmm0 = var_4c
    eax_10 = var_68
    xmm1 = var_24
    ecx_5 = var_6c
    xmm2 = var_60
    xmm3 = var_64

*(ebx + 0xc) = ecx_5
void* ecx_14 = var_58
*(ebx + 8) = eax_10
*(ebx + 0x20) = xmm2
*(ebx + 0x24) = xmm3
*(ebx + 0x10) = xmm0
*(ebx + 0x28) = xmm1

if (ecx_14 != 0)
    sub_403160(ecx_14, var_50 - ecx_14, 1)

int32_t result = sub_417070(&var_84)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
