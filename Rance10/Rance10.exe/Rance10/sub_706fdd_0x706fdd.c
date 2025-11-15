// 函数: sub_706fdd
// 地址: 0x706fdd
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_30 = edi

if (__crt_strtox::input_adapter_character_source<class __crt_stdio_input::stream_input_adapter<wchar_t> >::validate(
        arg2) == 0)
    return 7

int32_t var_1c = arg2[4]
int32_t eax_2 = arg2[5]
char i_4 = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
    arg2)
char i_3
char* var_24_1 = &i_3
int32_t* var_28 = arg2
int32_t* var_20_1 = &var_1c

while (true)
    i_3 = i_4
    
    if (__ischartype_l(zx.d(i_4), 8, arg1) == 0)
        break
    
    i_4 = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
        arg2)

char i = i_3
int32_t eax_4
eax_4.b = i == 0x2d
arg3[0xc2].b = eax_4.b

if (i == 0x2d || i == 0x2b)
    i = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
        arg2).b
    i_3 = i

if (i == 0x49 || i == 0x69)
    int32_t var_38_7 = eax_2
    int32_t var_3c_2 = var_1c
    return __crt_strtox::parse_floating_point_possible_infinity<char,class __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char> >,uint64_t>(
        &i_3, arg2)

if (i == 0x4e || i == 0x6e)
    int32_t var_38_6 = eax_2
    int32_t var_3c_1 = var_1c
    return __crt_strtox::parse_floating_point_possible_nan<char,class __crt_strtox::input_adapter_character_source<class __crt_stdio_input::stream_input_adapter<char> >,uint64_t>(
        &i_3, arg2)

bool var_5_1 = false

if (i == 0x30)
    int32_t eax_5 = arg2[5]
    int32_t edi_1 = arg2[4]
    char eax_6 = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
        arg2)
    
    if (eax_6 == 0x78 || eax_6 == 0x58)
        var_5_1 = true
        i = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
            arg2)
        var_1c = edi_1
        i_3 = i
        int32_t var_18_2 = eax_5
    else
        __crt_strtox::input_adapter_character_source<class __crt_stdio_input::stream_input_adapter<char> >::unget(
            arg2, eax_6)
        i = i_3

int32_t* edx_2 = arg3
int32_t var_10_1 = 0
char var_6_1 = 0
void* edi_2 = &edx_2[2]

if (i == 0x30)
    var_6_1 = 1
    
    do
        i = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
            arg2).b
        i_3 = i
    while (i == 0x30)
    
    edx_2 = arg3

int32_t ebx_2
ebx_2.b = var_5_1 == 0

while (true)
    eax_4.b = i
    eax_4.b -= 0x30
    int32_t eax_9
    
    if (eax_4.b u> 9)
        eax_4.b = i
        eax_4.b -= 0x61
        
        if (eax_4.b u> 0x19)
            eax_4.b = i
            eax_4.b -= 0x41
            
            if (eax_4.b u> 0x19)
                eax_9 = 0xffffffff
            else
                eax_9 = sx.d(i) - 0x37
        else
            eax_9 = sx.d(i) - 0x57
    else
        eax_9 = sx.d(i) - 0x30
    
    if (eax_9 u> ((ebx_2 - 1) & 6) + 9)
        break
    
    var_6_1 = 1
    
    if (edi_2 != &edx_2[0xc2])
        *edi_2 = eax_9.b
        edi_2 += 1
    
    var_10_1 += 1
    edx_2 = arg3
    i = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
        arg2).b
    i_3 = i

int32_t ebx_6 = 0

if (i == ***(*arg1 + 0x88))
    int32_t* edx_3 = arg3
    char i_1 = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
        arg2)
    i_3 = i_1
    
    if (edi_2 == &edx_3[2] && i_1 == 0x30)
        int32_t ebx_7 = var_10_1
        var_6_1 = 1
        
        do
            ebx_7 -= 1
            i_1 = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
                arg2).b
            i_3 = i_1
        while (i_1 == 0x30)
        
        edx_3 = arg3
        var_10_1 = ebx_7
    
    while (true)
        void* eax_17
        eax_17.b = i_1
        eax_17.b -= 0x30
        int32_t eax_19
        
        if (eax_17.b u> 9)
            eax_17.b = i_1
            eax_17.b -= 0x61
            
            if (eax_17.b u> 0x19)
                eax_17.b = i_1
                eax_17.b -= 0x41
                
                if (eax_17.b u> 0x19)
                    eax_19 = 0xffffffff
                else
                    eax_19 = sx.d(i_1) - 0x37
            else
                eax_19 = sx.d(i_1) - 0x57
        else
            eax_19 = sx.d(i_1) - 0x30
        
        if (eax_19 u> ((ebx_2 - 1) & 6) + 9)
            break
        
        var_6_1 = 1
        
        if (edi_2 != &edx_3[0xc2])
            *edi_2 = eax_19.b
            edi_2 += 1
        
        edx_3 = arg3
        i_1 = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
            arg2).b
        i_3 = i_1
    
    ebx_6 = 0

if (var_6_1 != 0)
    __crt_strtox::input_adapter_character_source<class __crt_stdio_input::stream_input_adapter<char> >::unget(
        arg2, (i_3.d).b)
    var_1c = arg2[4]
    int32_t var_18_3 = arg2[5]
    char i_5 = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
        arg2)
    i_3 = i_5
    bool ecx_17 = false
    
    if (i_5 == 0x45)
        ecx_17 = var_5_1 == 0
    else if (i_5 == 0x50)
        ecx_17 = var_5_1
    else if (i_5 == 0x65)
        ecx_17 = var_5_1 == 0
    else if (i_5 == 0x70)
        ecx_17 = var_5_1
    
    if (ecx_17 == 0)
        goto label_7073a4
    
    char i_2 = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
        arg2)
    bool cond:0_1 = i_2 == 0x2d
    i_3 = i_2
    
    if (i_2 == 0x2b || i_2 == 0x2d)
        i_2 = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
            arg2)
        i_3 = i_2
    
    char var_6_2 = 0
    
    if (i_2 == 0x30)
        var_6_2 = 1
        
        do
            i_2 = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
                arg2)
            i_3 = i_2
        while (i_2 == 0x30)
    
    int32_t eax_30
    
    while (true)
        if (i_2 - 0x30 u<= 9)
            eax_30 = sx.d(i_2) - 0x30
        else if (i_2 - 0x61 u<= 0x19)
            eax_30 = sx.d(i_2) - 0x57
        else if (i_2 - 0x41 u> 0x19)
            eax_30 = 0xffffffff
        else
            eax_30 = sx.d(i_2) - 0x37
        
        if (eax_30 u>= 0xa)
            break
        
        var_6_2 = 1
        ebx_6 = ebx_6 * 0xa + eax_30
        
        if (ebx_6 s> 0x1450)
            ebx_6 = 0x1451
            break
        
        i_2 = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
            arg2)
        i_3 = i_2
    
    int32_t eax_34
    
    while (true)
        eax_30.b = i_2
        eax_30.b -= 0x30
        
        if (eax_30.b u> 9)
            eax_30.b = i_2
            eax_30.b -= 0x61
            
            if (eax_30.b u> 0x19)
                eax_30.b = i_2
                eax_30.b -= 0x41
                
                if (eax_30.b u> 0x19)
                    eax_34 = 0xffffffff
                else
                    eax_34 = sx.d(i_2) - 0x37
            else
                eax_34 = sx.d(i_2) - 0x57
        else
            eax_34 = sx.d(i_2) - 0x30
        
        if (eax_34 u>= 0xa)
            break
        
        i_2 = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
            arg2).b
        i_3 = i_2
    
    if (cond:0_1 != 0)
        ebx_6 = neg.d(ebx_6)
    
    eax_34.b = var_6_2
    
    if (eax_34.b != 0)
        goto label_7073a4
    
    if (<lambda_1b3fd67d98fc4313a561b89752468e10>::operator()(&var_28) != 0)
        i_3 = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
            arg2)
    label_7073a4:
        __crt_strtox::input_adapter_character_source<class __crt_stdio_input::stream_input_adapter<char> >::unget(
            arg2, (i_3.d).b)
        
        if (edi_2 != &arg3[2])
            while (*(edi_2 - 1) == 0)
                edi_2 -= 1
                
                if (edi_2 == &arg3[2])
                    break
            
            if (edi_2 != &arg3[2])
                if (ebx_6 s<= 0x1450)
                    if (ebx_6 s< 0xffffebb0)
                        return 8
                    
                    int32_t eax_39
                    eax_39.b = var_5_1 == 0
                    int32_t ebx_10 = ebx_6 + (((eax_39 - 1) & 3) + 1) * var_10_1
                    
                    if (ebx_10 s<= 0x1450)
                        if (ebx_10 s< 0xffffebb0)
                            return 8
                        
                        *arg3 = ebx_10
                        arg3[1] = edi_2 - &arg3[2]
                        void* result
                        result.b = var_5_1 != 0
                        return result
                
                return 9
        
        return 2
else if (<lambda_1b3fd67d98fc4313a561b89752468e10>::operator()(&var_28) != 0)
    int32_t eax_23
    eax_23.b = var_5_1 == 0
    return ((eax_23 - 1) & 0xfffffffb) + 7

return 7
