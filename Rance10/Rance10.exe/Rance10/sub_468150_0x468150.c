// 函数: sub_468150
// 地址: 0x468150
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72cad8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_88 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3

if (*(arg3 + 0x20) != 0)
    eax_3 = *(arg3 + 0x24)

void* edx

if (*(arg3 + 0x20) == 0 || eax_3 == *(arg3 + 0x1c))
    edx = nullptr
else
    edx = eax_3 + 8

void* ecx

if (*(arg3 + 0x20) != 0)
    ecx = *(arg3 + 0x24)

int32_t* ecx_1

if (*(arg3 + 0x20) == 0 || ecx == *(arg3 + 0x1c))
    ecx_1 = nullptr
else
    ecx_1 = ecx + 8

int32_t* edx_1 = edx + 0x18
int32_t* ebx = &edx_1[4]

if (edx_1[5] u>= 0x10)
    edx_1 = *edx_1

void* eax_4 = &ecx_1[4]

if (ecx_1[5] u>= 0x10)
    ecx_1 = *ecx_1

int32_t eax_5 = *ebx
int32_t edi_1 = *eax_4

if (edi_1 u< *ebx)
    eax_5 = edi_1

int32_t eax_6 = sub_406ac0(eax_5, edx_1, ecx_1, eax_5)
void* ebx_2 = arg1
int32_t eax_7
int32_t ecx_2

if (eax_6 == 0)
    eax_7 = *ebx
    ecx_2 = *eax_4
    ebx_2 = arg1

if (eax_6 != 0 || ecx_2 u< eax_7 || ecx_2 u> eax_7)
    void* eax_8
    
    if (*(arg3 + 0x20) != 0)
        eax_8 = *(arg3 + 0x24)
    
    void* eax_9
    
    if (*(arg3 + 0x20) == 0 || eax_8 == *(arg3 + 0x1c))
        eax_9 = nullptr
    else
        eax_9 = eax_8 + 8
    
    sub_46df20(arg2, eax_9 + 0x18)

void* eax_11

if (*(arg3 + 0x20) != 0)
    eax_11 = *(arg3 + 0x24)

void* eax_12

if (*(arg3 + 0x20) == 0 || eax_11 == *(arg3 + 0x1c))
    eax_12 = nullptr
else
    eax_12 = eax_11 + 8

char* result

if (*(eax_12 + 0x30) == 0x12)
    *(arg2 + 8) = 3
    void* eax_13
    
    if (*(arg3 + 0x20) != 0)
        eax_13 = *(arg3 + 0x24)
    
    if (*(arg3 + 0x20) == 0 || eax_13 == *(arg3 + 0x1c))
        sub_470960(arg2, nullptr)
        result.b = 1
    else
        sub_470960(arg2, eax_13 + 8)
        result.b = 1
else
    void* var_30
    
    if (*(arg3 + 0x20) == 0)
    label_46866f:
        sub_403360(&var_30, 0x75f01c)
        int32_t var_8_2 = 0
        sub_45eb40(*(ebx_2 + 4), &var_30)
        char* var_1c
        
        if (var_1c u>= 0x10)
            sub_403160(var_30, &var_1c[1], 1)
        
        result.b = 0
    else
        int32_t* eax_15 = *(arg3 + 0x24)
        
        if (eax_15 == *(arg3 + 0x1c) || eax_15 == 0xfffffff8)
            goto label_46866f
        
        int32_t ecx_7 = eax_15[0xe]
        
        if (ecx_7 == 0xf)
            if (*(arg3 + 0x20) == 0 || eax_15 == *(arg3 + 0x1c))
                goto label_46866f
            
            int32_t eax_16 = *eax_15
            *(arg3 + 0x24) = eax_16
            
            if (*(arg3 + 0x20) == 0 || eax_16 == *(arg3 + 0x1c) || eax_16 == 0xfffffff8)
                goto label_46866f
            
            goto label_4682db
        
        char var_62_1
        
        if (ecx_7 != 0x10)
        label_4682db:
            var_62_1 = 0
        else
            if (*(arg3 + 0x20) == 0 || eax_15 == *(arg3 + 0x1c))
                goto label_46866f
            
            int32_t eax_20 = *eax_15
            *(arg3 + 0x24) = eax_20
            
            if (*(arg3 + 0x20) == 0 || eax_20 == *(arg3 + 0x1c) || eax_20 == 0xfffffff8)
                goto label_46866f
            
            var_62_1 = 1
        
        int32_t* var_60
        sub_403360(&var_60, 0x75cdfb)
        int32_t var_8_1 = 1
        
        if (sub_467380(&var_60, arg3) != 0)
            struct exfile::CNumeral::VTable* const var_28 = &exfile::CNumeral::`vftable'
            int32_t var_24_1 = 0
            int32_t var_20_1 = 0
            float var_1c_1 = 0f
            var_8_1.b = 4
            void* edi_3
            
            if (*(arg3 + 0x20) != 0)
                edi_3 = *(arg3 + 0x24)
            
            int32_t* edi_4
            
            if (*(arg3 + 0x20) == 0 || edi_3 == *(arg3 + 0x1c))
                edi_4 = nullptr
            else
                edi_4 = edi_3 + 8
            
            int32_t eax_26 = edi_4[0xc]
            void var_48
            
            if (eax_26 != 0x11)
                int32_t* var_8c_6
                
                if (eax_26 != 6)
                    sub_403360(&var_48, 0x75f150)
                    var_8_1.b = 0xb
                label_468635:
                    var_8c_6 = edi_4
                else
                    if (sub_467420(&var_28, arg3) != 0)
                        goto label_468479
                    
                    void* ecx_22 = &var_48
                    
                    if (sub_471ff0(arg3) == 0)
                        sub_403360(ecx_22, 0x75f1dc)
                        var_8_1.b = 7
                        goto label_468635
                    
                    sub_403360(ecx_22, 0x75f1f8)
                    var_8_1.b = 6
                    var_8c_6 = sub_471ff0(arg3)
                
                sub_45ebd0(*(ebx_2 + 4), &var_48, var_8c_6)
                sub_403320(&var_48)
                ebx_2.b = 0
            else
                sub_470aa0(&var_28, edi_4)
                int32_t eax_27 = var_24_1
                
                if (eax_27 == 0)
                    sub_403360(&var_48, 0x75f1ac)
                    var_8_1.b = 5
                    goto label_468635
                
                if (*(arg3 + 0x20) == 0)
                    ebx_2.b = 0
                else
                    if (*(arg3 + 0x24) == *(arg3 + 0x1c))
                        goto label_468479
                    
                    int32_t eax_30 = **(arg3 + 0x24)
                    *(arg3 + 0x24) = eax_30
                    
                    if (*(arg3 + 0x20) == 0 || eax_30 == *(arg3 + 0x1c) || eax_30 == 0xfffffff8)
                        goto label_468479
                    
                    ebx_2.b = sub_407560(sub_471e40(sub_471ff0(arg3), &var_48), 0x75f1a8)
                    sub_403320(&var_48)
                    
                    if (ebx_2.b == 0)
                        *(arg3 + 0x24) = *(*(arg3 + 0x24) + 4)
                    label_468479:
                        eax_27 = var_24_1
                        ebx_2.b = 0
                    else
                        eax_27 = var_24_1
                        ebx_2.b = 1
                
                if (var_62_1 != 0)
                    int32_t eax_38
                    float xmm0_2
                    
                    if (eax_27 == 2)
                        xmm0_2 = var_1c_1 * -1f
                        var_24_1 = 2
                        eax_38 = int.d(xmm0_2)
                    else
                        eax_38 = neg.d(var_20_1)
                        var_24_1 = 1
                        xmm0_2 = _mm_cvtepi32_ps(zx.o(eax_38))
                    
                    var_1c_1 = xmm0_2
                    var_20_1 = eax_38
                
                sub_467590(&var_28, &var_60)
                int32_t eax_42
                int32_t ecx_25
                int32_t xmm1_1
                
                if (ebx_2.b == 0)
                    xmm1_1 = var_1c_1
                    ecx_25 = var_20_1
                    eax_42 = var_24_1
                else
                    xmm1_1 = (zx.o(0)).d
                    
                    if (not(var_1c_1 f< 0))
                        xmm1_1 = 0x3f800000
                        eax_42 = 2
                        ecx_25 = 1
                        int32_t var_24_2 = 2
                        int32_t var_20_2 = 1
                        int32_t var_1c_2 = 0x3f800000
                    else if (-100f < var_1c_1)
                        xmm1_1 = fconvert.s(sub_40d0b0(0x41200000, var_1c_1 * 0.0500000007f))
                        eax_42 = 2
                        ecx_25 = int.d(xmm1_1)
                        int32_t var_24_4 = 2
                        int32_t var_1c_4 = xmm1_1
                        int32_t var_20_4 = ecx_25
                    else
                        eax_42 = 2
                        int32_t var_1c_3 = 0
                        ecx_25 = 0
                        int32_t var_24_3 = 2
                        int32_t var_20_3 = 0
                
                int32_t var_24_5
                
                if (arg4 == 1)
                    eax_42 = arg4
                    xmm1_1 = _mm_cvtepi32_ps(zx.o(ecx_25))
                    int32_t var_1c_5 = xmm1_1
                    var_24_5 = eax_42
                else if (arg4 == 2)
                    ecx_25 = int.d(xmm1_1)
                    eax_42 = arg4
                    int32_t var_20_5 = ecx_25
                    var_24_5 = eax_42
                
                if (eax_42 == 1)
                    ebx_2.b = 1
                    *(arg2 + 8) = 1
                    *(arg2 + 0x24) = ecx_25 ^ 0x65656565
                else if (eax_42 != 2)
                    ebx_2.b = 0
                else
                    *(arg2 + 8) = 2
                    int32_t xmm0_5
                    result, xmm0_5 = sub_462f40(xmm1_1)
                    *(arg2 + 0x28) = xmm0_5
                    ebx_2.b = 1
        else
            if (*(arg3 + 0x20) == 0 || *(arg3 + 0x24) == *(arg3 + 0x1c))
                *(arg3 + 0x24) = *(*(arg3 + 0x24) + 4)
                sub_403360(&var_30, 0x75f068)
                var_8_1.b = 2
            else
                sub_403360(&var_30, 0x75f038)
                var_8_1.b = 3
            
            void* eax_24
            
            if (*(arg3 + 0x20) != 0)
                eax_24 = *(arg3 + 0x24)
            
            void* eax_25
            
            if (*(arg3 + 0x20) == 0 || eax_24 == *(arg3 + 0x1c))
                eax_25 = nullptr
            else
                eax_25 = eax_24 + 8
            
            sub_45ebd0(*(ebx_2 + 4), &var_30, eax_25)
            sub_403320(&var_30)
            ebx_2.b = 0
        
        int32_t var_4c
        
        if (var_4c u>= 0x10)
            sub_403160(var_60, var_4c + 1, 1)
        
        result.b = ebx_2.b

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
