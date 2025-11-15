// 函数: ??$parse_floating_point_from_source@V?$c_string_character_source@D@__crt_strtox@@@__crt_strtox@@YA?AW4floating_point_parse_result@0@QAU__crt_locale_pointers@@AAV?$c_string_character_source@D@0@AAUfloating_point_string@0@@Z
// 地址: 0x70c15e
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_30 = edi
char eax
int16_t ecx_1
eax, ecx_1 = __crt_stdio_input::stream_input_adapter<wchar_t>::validate(arg2)

if (eax == 0)
    return 7

char* eax_1 = *arg2
char* var_14 = eax_1
ecx_1.b = *eax_1
*arg2 = &eax_1[1]
char var_9
char* var_24_1 = &var_9
int32_t* var_28 = arg2
int32_t* var_20_1 = &var_14
void* eax_6

while (true)
    var_9 = ecx_1.b
    eax_6, ecx_1 = __ischartype_l(zx.d(ecx_1.b), 8, arg1)
    
    if (eax_6 == 0)
        break
    
    char* eax_3 = *arg2
    ecx_1.b = *eax_3
    *arg2 = &eax_3[1]

ecx_1.b = var_9
eax_6.b = ecx_1.b == 0x2d
arg3[0xc2].b = eax_6.b

if (ecx_1.b == 0x2d || ecx_1.b == 0x2b)
    char* eax_7 = *arg2
    ecx_1.b = *eax_7
    var_9 = ecx_1.b
    *arg2 = &eax_7[1]

if (ecx_1.b == 0x49 || ecx_1.b == 0x69)
    char* var_38_7 = var_14
    return __crt_strtox::parse_floating_point_possible_infinity<char,class __crt_strtox::c_string_character_source<char>,char const*>(
        &var_9, arg2)

if (ecx_1.b == 0x4e || ecx_1.b == 0x6e)
    char* var_38_6 = var_14
    return __crt_strtox::parse_floating_point_possible_nan<char,class __crt_strtox::c_string_character_source<char>,char const*>(
        &var_9, arg2)

int32_t ebx_2 = 0
char var_5_1 = 0

if (ecx_1.b == 0x30)
    char* edx_3 = *arg2
    eax_6.b = *edx_3
    char var_1c = eax_6.b
    *arg2 = &edx_3[1]
    
    if (eax_6.b == 0x78 || eax_6.b == 0x58)
        ecx_1.b = edx_3[1]
        var_5_1 = 1
        var_9 = ecx_1.b
        *arg2 = &edx_3[2]
        var_14 = edx_3
    else
        __crt_strtox::c_string_character_source<char>::unget(arg2, var_1c)
        ecx_1.b = var_9

ecx_1:1.b = 0
void* var_1c_1 = &arg3[2]
void* edi_2 = &arg3[2]

if (ecx_1.b == 0x30)
    ecx_1:1.b = 1
    
    do
        char* eax_11 = *arg2
        ecx_1.b = *eax_11
        var_9 = ecx_1.b
        *arg2 = &eax_11[1]
    while (ecx_1.b == 0x30)

int32_t edx_4
edx_4.b = var_5_1 == 0

while (true)
    void* eax_10
    eax_10.b = ecx_1.b
    eax_10.b -= 0x30
    int32_t eax_13
    
    if (eax_10.b u> 9)
        eax_10.b = ecx_1.b
        eax_10.b -= 0x61
        
        if (eax_10.b u> 0x19)
            eax_10.b = ecx_1.b
            eax_10.b -= 0x41
            
            if (eax_10.b u> 0x19)
                eax_13 = 0xffffffff
            else
                eax_13 = sx.d(ecx_1.b) - 0x37
        else
            eax_13 = sx.d(ecx_1.b) - 0x57
    else
        eax_13 = sx.d(ecx_1.b) - 0x30
    
    if (eax_13 u> ((edx_4 - 1) & 6) + 9)
        break
    
    ecx_1:1.b = 1
    
    if (edi_2 != &arg3[0xc2])
        *edi_2 = eax_13.b
        edi_2 += 1
    
    char* eax_16 = *arg2
    ebx_2 += 1
    ecx_1.b = *eax_16
    var_9 = ecx_1.b
    *arg2 = &eax_16[1]

int32_t var_10_1 = ebx_2
int32_t ebx_3 = 0

if (ecx_1.b == ***(*arg1 + 0x88))
    char* eax_21 = *arg2
    ecx_1.b = *eax_21
    void* eax_22 = &eax_21[1]
    var_9 = ecx_1.b
    *arg2 = eax_22
    
    if (edi_2 == var_1c_1 && ecx_1.b == 0x30)
        ecx_1:1.b = 1
        
        do
            ecx_1.b = *eax_22
            var_10_1 -= 1
            eax_22 += 1
            var_9 = ecx_1.b
            *arg2 = eax_22
        while (ecx_1.b == 0x30)
    
    while (true)
        eax_22.b = ecx_1.b
        eax_22.b -= 0x30
        int32_t eax_24
        
        if (eax_22.b u> 9)
            eax_22.b = ecx_1.b
            eax_22.b -= 0x61
            
            if (eax_22.b u> 0x19)
                eax_22.b = ecx_1.b
                eax_22.b -= 0x41
                
                if (eax_22.b u> 0x19)
                    eax_24 = 0xffffffff
                else
                    eax_24 = sx.d(ecx_1.b) - 0x37
            else
                eax_24 = sx.d(ecx_1.b) - 0x57
        else
            eax_24 = sx.d(ecx_1.b) - 0x30
        
        if (eax_24 u> ((edx_4 - 1) & 6) + 9)
            break
        
        ecx_1:1.b = 1
        
        if (edi_2 != &arg3[0xc2])
            *edi_2 = eax_24.b
            edi_2 += 1
        
        char* eax_27 = *arg2
        ecx_1.b = *eax_27
        var_9 = ecx_1.b
        *arg2 = &eax_27[1]

if (ecx_1:1.b != 0)
    __crt_strtox::c_string_character_source<char>::unget(arg2, (var_9.d).b)
    char* eax_32 = *arg2
    var_14 = eax_32
    int16_t ecx_5
    ecx_5.b = *eax_32
    void* edx_8 = &eax_32[1]
    var_9 = ecx_5.b
    eax_32.b = 0
    *arg2 = edx_8
    
    if (ecx_5.b == 0x45)
        eax_32.b = var_5_1 == 0
    else if (ecx_5.b == 0x50)
        eax_32.b = var_5_1
    else if (ecx_5.b == 0x65)
        eax_32.b = var_5_1 == 0
    else if (ecx_5.b == 0x70)
        eax_32.b = var_5_1
    
    if (eax_32.b == 0)
        goto label_70c4b9
    
    ecx_5.b = *edx_8
    var_9 = ecx_5.b
    *arg2 = edx_8 + 1
    ecx_5:1.b = ecx_5.b == 0x2d
    
    if (ecx_5.b == 0x2b || ecx_5.b == 0x2d)
        ecx_5.b = *(edx_8 + 1)
        var_9 = ecx_5.b
        *arg2 = edx_8 + 2
    
    edx_8.b = 0
    
    if (ecx_5.b == 0x30)
        edx_8.b = 1
        
        do
            char* eax_34 = *arg2
            ecx_5.b = *eax_34
            var_9 = ecx_5.b
            *arg2 = &eax_34[1]
        while (ecx_5.b == 0x30)
    
    void* eax_36
    
    while (true)
        void* eax_33
        eax_33.b = ecx_5.b
        eax_33.b -= 0x30
        
        if (eax_33.b u> 9)
            eax_33.b = ecx_5.b
            eax_33.b -= 0x61
            
            if (eax_33.b u> 0x19)
                eax_33.b = ecx_5.b
                eax_33.b -= 0x41
                
                if (eax_33.b u> 0x19)
                    eax_36 = 0xffffffff
                else
                    eax_36 = sx.d(ecx_5.b) - 0x37
            else
                eax_36 = sx.d(ecx_5.b) - 0x57
        else
            eax_36 = sx.d(ecx_5.b) - 0x30
        
        if (eax_36 u>= 0xa)
            break
        
        edx_8.b = 1
        ebx_3 = ebx_3 * 0xa + eax_36
        
        if (ebx_3 s> 0x1450)
            ebx_3 = 0x1451
            break
        
        char* eax_39 = *arg2
        ecx_5.b = *eax_39
        var_9 = ecx_5.b
        *arg2 = &eax_39[1]
    
    while (true)
        eax_36.b = ecx_5.b
        eax_36.b -= 0x30
        int32_t eax_41
        
        if (eax_36.b u> 9)
            eax_36.b = ecx_5.b
            eax_36.b -= 0x61
            
            if (eax_36.b u> 0x19)
                eax_36.b = ecx_5.b
                eax_36.b -= 0x41
                
                if (eax_36.b u> 0x19)
                    eax_41 = 0xffffffff
                else
                    eax_41 = sx.d(ecx_5.b) - 0x37
            else
                eax_41 = sx.d(ecx_5.b) - 0x57
        else
            eax_41 = sx.d(ecx_5.b) - 0x30
        
        if (eax_41 u>= 0xa)
            break
        
        char* eax_44 = *arg2
        ecx_5.b = *eax_44
        var_9 = ecx_5.b
        *arg2 = &eax_44[1]
    
    if (ecx_5:1.b != 0)
        ebx_3 = neg.d(ebx_3)
    
    if (edx_8.b != 0)
        goto label_70c4b9
    
    if (<lambda_3a2f1c4b88a94fdfdc7bccff06592946>::operator()(&var_28) != 0)
        char* ecx_7 = *arg2
        var_9 = *ecx_7
        *arg2 = &ecx_7[1]
    label_70c4b9:
        __crt_strtox::c_string_character_source<char>::unget(arg2, (var_9.d).b)
        
        if (edi_2 != var_1c_1)
            while (*(edi_2 - 1) == 0)
                edi_2 -= 1
                
                if (edi_2 == var_1c_1)
                    break
            
            if (edi_2 != var_1c_1)
                if (ebx_3 s<= 0x1450)
                    if (ebx_3 s< 0xffffebb0)
                        return 8
                    
                    int32_t eax_47
                    eax_47.b = var_5_1 == 0
                    int32_t ebx_5 = ebx_3 + (((eax_47 - 1) & 3) + 1) * var_10_1
                    
                    if (ebx_5 s<= 0x1450)
                        if (ebx_5 s< 0xffffebb0)
                            return 8
                        
                        *arg3 = ebx_5
                        arg3[1] = edi_2 - var_1c_1
                        void* result
                        result.b = var_5_1 != 0
                        return result
                
                return 9
        
        return 2
else if (<lambda_3a2f1c4b88a94fdfdc7bccff06592946>::operator()(&var_28) != 0)
    int32_t eax_29
    eax_29.b = var_5_1 == 0
    return ((eax_29 - 1) & 0xfffffffb) + 7

return 7
