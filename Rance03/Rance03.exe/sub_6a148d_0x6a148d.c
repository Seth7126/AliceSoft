// 函数: sub_6a148d
// 地址: 0x6a148d
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t ebx = 0
void* var_220 = arg4
int32_t var_258 = 0
char* esi = nullptr
int32_t var_21c = 0
int32_t var_244 = 0
char* i_1 = nullptr
int32_t* var_238 = nullptr
int32_t var_260 = 0
int32_t var_250 = 0
int32_t var_23c = 0
void var_274
sub_69beb0(&var_274, arg3)
void* eax_4 = __errno()
int32_t result

if (arg1 == 0)
label_6a1fdd:
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 0xffffffff
else
    if ((arg1[3].b & 0x40) == 0)
        int32_t eax_6 = __fileno(arg1)
        void* edx_4
        
        if (eax_6 == 0xffffffff || eax_6 == 0xfffffffe)
            edx_4 = &data_74a630
        else
            edx_4 = ((eax_6 & 0x1f) << 6) + (&data_75ca40)[eax_6 s>> 5]
        
        if ((*(edx_4 + 0x24) & 0x7f) != 0)
            goto label_6a1fdd
        
        void* ecx_4
        
        if (eax_6 == 0xffffffff || eax_6 == 0xfffffffe)
            ecx_4 = &data_74a630
        else
            ecx_4 = ((eax_6 & 0x1f) << 6) + (&data_75ca40)[eax_6 s>> 5]
        
        if ((*(ecx_4 + 0x24) & 0x80) != 0 || arg2 == 0)
            goto label_6a1fdd
    else if (arg2 == 0)
        goto label_6a1fdd
    
    char* edx_5
    edx_5.b = *arg2
    void* var_228 = nullptr
    int32_t result_1 = 0
    int32_t result_2 = 0
    int32_t var_248_1 = 0
    char* var_254_1 = nullptr
    char var_215_1 = edx_5.b
    char var_24c_1 = edx_5.b
    
    if (edx_5.b != 0)
        char* eax_10 = arg2
        
        while (true)
            void* var_214_1 = &eax_10[1]
            
            if (result_1 s< 0)
                break
            
            int32_t eax_15
            
            if (edx_5.b - 0x20 u> 0x58)
                eax_15 = 0
            else
                eax_15 = sx.d((*"leW")[sx.d(edx_5.b)]) & 0xf
            
            int32_t edi_2 = sx.d(*(var_248_1 + (eax_15 << 3) + 0x6d58d8))
            int32_t var_248_2 = edi_2
            int32_t* edi_3 = var_220
            int32_t eax_17 = edi_2 s>> 4
            var_248_1 = eax_17
            
            if (eax_17 u> 7)
                eax_10 = var_214_1
            else
                switch (eax_17)
                    case 0
                        goto label_6a1820
                    case 1
                        i_1 = 0xffffffff
                        ebx = 0
                        var_260 = 0
                        var_250 = 0
                        var_244 = 0
                        var_238 = nullptr
                        var_21c = 0
                        var_23c = 0
                        eax_10 = var_214_1
                    case 2
                        int32_t eax_18 = sx.d(edx_5.b)
                        
                        if (eax_18 == 0x20)
                            ebx |= 2
                            var_21c = ebx
                            eax_10 = var_214_1
                        else if (eax_18 == 0x23)
                            ebx |= 0x80
                            var_21c = ebx
                            eax_10 = var_214_1
                        else if (eax_18 == 0x2b)
                            ebx |= 1
                            var_21c = ebx
                            eax_10 = var_214_1
                        else if (eax_18 == 0x2d)
                            ebx |= 4
                            var_21c = ebx
                            eax_10 = var_214_1
                        else
                            eax_10 = var_214_1
                            
                            if (eax_18 == 0x30)
                                ebx |= 8
                                var_21c = ebx
                    case 3
                        if (edx_5.b != 0x2a)
                            var_244 = sx.d(edx_5.b) + var_244 * 0xa - 0x30
                            result_1 = result_2
                            eax_10 = var_214_1
                        else
                            int32_t eax_24 = *edi_3
                            var_220 = &edi_3[1]
                            var_244 = eax_24
                            
                            if (eax_24 s< 0)
                                ebx |= 4
                                var_21c = ebx
                                var_244 = neg.d(eax_24)
                            
                            eax_10 = var_214_1
                    case 4
                        i_1 = nullptr
                        eax_10 = var_214_1
                    case 5
                        if (edx_5.b != 0x2a)
                            i_1 = sx.d(edx_5.b) + i_1 * 0xa - 0x30
                            result_1 = result_2
                            eax_10 = var_214_1
                        else
                            char* i_2 = *edi_3
                            i_1 = i_2
                            eax_10 = var_214_1
                            var_220 = &edi_3[1]
                            
                            if (i_2 s< 0)
                                i_1 = 0xffffffff
                    case 6
                        if (edx_5.b == 0x49)
                            void* eax_30
                            eax_30.b = *var_214_1
                            
                            if (eax_30.b == 0x36 && *(var_214_1 + 1) == 0x34)
                                eax_10 = var_214_1 + 2
                                ebx |= 0x8000
                                var_21c = ebx
                            else if (eax_30.b == 0x33 && *(var_214_1 + 1) == 0x32)
                                eax_10 = var_214_1 + 2
                                ebx &= 0xffff7fff
                                var_21c = ebx
                            else if (eax_30.b == 0x64 || eax_30.b == 0x69 || eax_30.b == 0x6f
                                    || eax_30.b == 0x75 || eax_30.b == 0x78 || eax_30.b == 0x58)
                                eax_10 = var_214_1
                            else
                                var_248_1 = 0
                            label_6a1820:
                                var_23c = 0
                                
                                if (sub_6a774d(edx_5.b, &var_274) != 0)
                                    sub_6a2ba9(var_24c_1, arg1, &result_2)
                                    char eax_35 = *var_214_1
                                    var_24c_1 = eax_35
                                    var_214_1 += 1
                                    
                                    if (eax_35 == 0)
                                        goto label_6a1fdd
                                
                                sub_6a2ba9(var_24c_1, arg1, &result_2)
                                result_1 = result_2
                                eax_10 = var_214_1
                        else if (edx_5.b == 0x68)
                            ebx |= 0x20
                            var_21c = ebx
                            eax_10 = var_214_1
                        else
                            eax_10 = var_214_1
                            
                            if (edx_5.b == 0x6c)
                                if (*eax_10 != 0x6c)
                                    ebx |= 0x10
                                else
                                    eax_10 = &eax_10[1]
                                    ebx |= 0x1000
                                
                                var_21c = ebx
                            else if (edx_5.b == 0x77)
                                ebx |= 0x800
                                var_21c = ebx
                    case 7
                        int32_t eax_36 = sx.d(edx_5.b)
                        char var_230
                        void* eax_46
                        
                        if (eax_36 s> 0x64)
                            int32_t var_294_11
                            
                            if (eax_36 s> 0x70)
                                if (eax_36 != 0x73)
                                    if (eax_36 == 0x75)
                                        goto label_6a1b00
                                    
                                    if (eax_36 != 0x78)
                                        goto label_6a1dde
                                    
                                    var_294_11 = 0x27
                                    goto label_6a1c75
                                
                            label_6a1947:
                                char* i = 0x7fffffff
                                
                                if (i_1 != 0xffffffff)
                                    i = i_1
                                
                                esi = *edi_3
                                var_220 = &edi_3[1]
                                
                                if ((ebx & 0x810) == 0)
                                    if (esi == 0)
                                        esi = data_74a568
                                    
                                    char* eax_81 = esi
                                    
                                    while (i != 0)
                                        i -= 1
                                        
                                        if (*eax_81 == 0)
                                            break
                                        
                                        eax_81 = &eax_81[1]
                                    
                                    eax_46 = eax_81 - esi
                                else
                                    if (esi == 0)
                                        esi = data_74a56c
                                    
                                    var_23c = 1
                                    char* eax_44 = esi
                                    
                                    while (i != 0)
                                        i -= 1
                                        
                                        if (*eax_44 == 0)
                                            break
                                        
                                        eax_44 = &eax_44[2]
                                    
                                    eax_46 = (eax_44 - esi) s>> 1
                                
                                goto label_6a1dd8
                            
                            if (eax_36 == 0x70)
                                i_1 = 8
                            label_6a1c55:
                                var_294_11 = 7
                            label_6a1c75:
                                var_228 = 0x10
                                var_258 = var_294_11
                                
                                if (ebx.b s< 0)
                                    int32_t eax_69
                                    eax_69.b = var_294_11.b + 0x51
                                    var_230 = 0x30
                                    char var_22f_1 = eax_69.b
                                    var_238 = 2
                                
                                goto label_6a1b18
                            
                            if (eax_36 s< 0x65)
                                goto label_6a1dde
                            
                            if (eax_36 s<= 0x67)
                                goto label_6a18d9
                            
                            if (eax_36 == 0x69)
                                goto label_6a1af7
                            
                            if (eax_36 != 0x6e)
                                if (eax_36 != 0x6f)
                                    goto label_6a1dde
                                
                                var_228 = 8
                                
                                if (ebx.b s< 0)
                                    ebx |= 0x200
                                    var_21c = ebx
                                
                                goto label_6a1b18
                            
                            var_220 = &edi_3[1]
                            int16_t* edi_12 = *edi_3
                            
                            if (__get_printf_count_output() == 0)
                                goto label_6a1fdd
                            
                            int32_t result_3 = result_2
                            
                            if ((ebx.b & 0x20) == 0)
                                *edi_12 = result_3
                            else
                                *edi_12 = result_3.w
                            
                            var_250 = 1
                            result_1 = result_2
                        else
                            if (eax_36 == 0x64)
                            label_6a1af7:
                                ebx |= 0x40
                                var_21c = ebx
                            label_6a1b00:
                                var_228 = 0xa
                            label_6a1b18:
                                int32_t ecx_13
                                int32_t edi_14
                                
                                if ((ebx & 0x8000) != 0 || (ebx & 0x1000) != 0)
                                    ecx_13 = *edi_3
                                    var_220 = &edi_3[2]
                                    edi_14 = edi_3[1]
                                else
                                    var_220 = &edi_3[1]
                                    int32_t eax_70
                                    
                                    if ((ebx.b & 0x20) != 0)
                                        if ((ebx.b & 0x40) == 0)
                                            eax_70 = zx.d(*edi_3)
                                        else
                                            eax_70 = sx.d(*edi_3)
                                        
                                        goto label_6a1cd5
                                    
                                    if ((ebx.b & 0x40) == 0)
                                        ecx_13 = *edi_3
                                        edi_14 = 0
                                    else
                                        eax_70 = *edi_3
                                    label_6a1cd5:
                                        int32_t eax_71
                                        int32_t edx_6
                                        edx_6:eax_71 = sx.q(eax_70)
                                        ecx_13 = eax_71
                                        edi_14 = edx_6
                                
                                if ((ebx.b & 0x40) != 0 && edi_14 s<= 0
                                        && (edi_14 s< 0 || ecx_13 u< 0))
                                    int32_t temp17_1 = ecx_13
                                    ecx_13 = neg.d(ecx_13)
                                    edi_14 = neg.d(adc.d(edi_14, 0, temp17_1 != 0))
                                    ebx |= 0x100
                                    var_21c = ebx
                                
                                if ((ebx & 0x9000) == 0)
                                    edi_14 = 0
                                
                                char* i_4 = i_1
                                
                                if (i_4 s>= 0)
                                    ebx &= 0xfffffff7
                                    var_21c = ebx
                                    
                                    if (i_4 s> 0x200)
                                        i_4 = 0x200
                                else
                                    i_4 = 1
                                
                                if ((ecx_13 | edi_14) == 0)
                                    var_238 = nullptr
                                
                                void var_11
                                void* esi_1 = &var_11
                                
                                while (true)
                                    i_1 = i_4 - 1
                                    
                                    if (i_4 s<= 0 && (ecx_13 | edi_14) == 0)
                                        break
                                    
                                    int32_t eax_78
                                    uint32_t edx_7
                                    edx_7:eax_78 = sx.q(var_228)
                                    uint32_t eax_79
                                    int32_t ecx_17
                                    int32_t edx_8
                                    eax_79, ecx_17, edx_8 =
                                        __aulldvrm(ecx_13, edi_14, eax_78, edx_7)
                                    int32_t ecx_18 = ecx_17 + 0x30
                                    int32_t var_280_1 = ebx
                                    edi_14 = edx_8
                                    
                                    if (ecx_18 s> 0x39)
                                        ecx_18 += var_258
                                    
                                    i_4 = i_1
                                    *esi_1 = ecx_18.b
                                    esi_1 -= 1
                                    ecx_13 = eax_79
                                
                                ebx = var_21c
                                void* eax_80 = &var_11 - esi_1
                                esi = esi_1 + 1
                                var_228 = eax_80
                                
                                if ((ebx & 0x200) != 0 && (eax_80 == 0 || *esi != 0x30))
                                    esi -= 1
                                    var_228 += 1
                                    *esi = 0x30
                                
                                goto label_6a1dde
                            
                            char var_210
                            
                            if (eax_36 s<= 0x53)
                                if (eax_36 == 0x53)
                                    if ((ebx & 0x830) == 0)
                                        ebx |= 0x800
                                        var_21c = ebx
                                    
                                    goto label_6a1947
                                
                                if (eax_36 != 0x41)
                                    if (eax_36 == 0x43)
                                        if ((ebx & 0x830) == 0)
                                            ebx |= 0x800
                                            var_21c = ebx
                                        
                                        goto label_6a19bd
                                    
                                    if (eax_36 == 0x45 || eax_36 == 0x47)
                                        goto label_6a18c6
                                    
                                    goto label_6a1dde
                                
                            label_6a18c6:
                                edx_5.b += 0x20
                                var_260 = 1
                                var_215_1 = edx_5.b
                            label_6a18d9:
                                char* i_3 = i_1
                                esi = &var_210
                                ebx |= 0x40
                                var_21c = ebx
                                void* var_240_1 = 0x200
                                
                                if (i_3 s< 0)
                                    i_1 = 6
                                else if (i_3 != 0)
                                    if (i_3 s> 0x200)
                                        i_3 = 0x200
                                        i_1 = 0x200
                                    
                                    if (i_3 s> 0xa3)
                                        char* eax_58
                                        eax_58, edx_5 = sub_69e76b(&i_3[0x15d])
                                        edx_5.b = var_215_1
                                        var_254_1 = eax_58
                                        
                                        if (eax_58 == 0)
                                            i_1 = 0xa3
                                        else
                                            esi = eax_58
                                            var_240_1 = &i_3[0x15d]
                                        
                                        edi_3 = var_220
                                else if (edx_5.b == 0x67)
                                    i_1 = 1
                                
                                int32_t var_27c = *edi_3
                                var_220 = &edi_3[2]
                                int32_t var_278_1 = edi_3[1]
                                DecodePointer(data_74b088)(&var_27c, esi, var_240_1, sx.d(edx_5.b), 
                                    i_1, var_260, &var_274)
                                int32_t edi_18 = ebx & 0x80
                                
                                if (edi_18 != 0 && i_1 == 0)
                                    DecodePointer(data_74b094)(esi, &var_274)
                                
                                if (var_215_1 == 0x67 && edi_18 == 0)
                                    DecodePointer(data_74b090)(esi, &var_274)
                                
                                if (*esi == 0x2d)
                                    ebx |= 0x100
                                    esi = &esi[1]
                                    var_21c = ebx
                                
                                goto label_6a1a62
                            
                            if (eax_36 == 0x58)
                                goto label_6a1c55
                            
                            if (eax_36 != 0x5a)
                                if (eax_36 == 0x61)
                                    goto label_6a18d9
                                
                                if (eax_36 != 0x63)
                                    goto label_6a1dde
                                
                            label_6a19bd:
                                var_220 = &edi_3[1]
                                
                                if ((ebx & 0x810) == 0)
                                    int32_t eax_39
                                    eax_39.b = *edi_3
                                    var_210 = eax_39.b
                                    var_228 = 1
                                else
                                    int32_t eax_53
                                    eax_53, edx_5 =
                                        __mbccpy_s(&var_228, &var_210, 0x200, zx.d(*edi_3))
                                    
                                    if (eax_53 != 0)
                                        var_250 = 1
                                
                                esi = &var_210
                                goto label_6a1dde
                            
                            int16_t* eax_54 = *edi_3
                            var_220 = &edi_3[1]
                            
                            if (eax_54 != 0)
                                esi = *(eax_54 + 4)
                            
                            if (eax_54 != 0 && esi != 0)
                                eax_46 = sx.d(*eax_54)
                                
                                if ((ebx & 0x800) == 0)
                                    var_23c = 0
                                else
                                    int32_t eax_55
                                    edx_5:eax_55 = sx.q(eax_46)
                                    var_23c = 1
                                    eax_46 = (eax_55 - edx_5) s>> 1
                                
                                goto label_6a1dd8
                            
                            esi = data_74a568
                        label_6a1a62:
                            eax_46, edx_5 = _strlen(esi)
                        label_6a1dd8:
                            var_228 = eax_46
                        label_6a1dde:
                            
                            if (var_250 != 0)
                                result_1 = result_2
                            else
                                if ((ebx.b & 0x40) != 0)
                                    if ((ebx & 0x100) != 0)
                                        var_230 = 0x2d
                                        var_238 = 1
                                    else if ((ebx.b & 1) != 0)
                                        var_230 = 0x2b
                                        var_238 = 1
                                    else if ((ebx.b & 2) != 0)
                                        var_230 = 0x20
                                        var_238 = 1
                                
                                int32_t* eax_82 = var_238
                                void* edi_23 = var_244 - var_228 - eax_82
                                
                                if ((ebx.b & 0xc) == 0)
                                    _write_multi_char(0x20, edi_23, arg1, &result_2)
                                    eax_82 = var_238
                                
                                sub_6a2c1d(&var_230, eax_82, arg1, &result_2, eax_4)
                                
                                if ((ebx.b & 8) != 0 && (ebx.b & 4) == 0)
                                    _write_multi_char(0x30, edi_23, arg1, &result_2)
                                
                                void* eax_83 = var_228
                                
                                if (var_23c == 0 || eax_83 s<= 0)
                                    sub_6a2c1d(esi, eax_83, arg1, &result_2, eax_4)
                                label_6a1f4a:
                                    result_1 = result_2
                                else
                                    char* ecx_19 = esi
                                    
                                    while (true)
                                        int32_t* var_264
                                        void var_10
                                        int32_t eax_86
                                        eax_86, edx_5 =
                                            __mbccpy_s(&var_264, &var_10, 6, zx.d(*ecx_19))
                                        
                                        if (eax_86 != 0 || var_264 == eax_86)
                                            result_1 = 0xffffffff
                                            result_2 = 0xffffffff
                                            break
                                        
                                        sub_6a2c1d(&var_10, var_264, arg1, &result_2, eax_4)
                                        eax_83 -= 1
                                        ecx_19 = &ecx_19[2]
                                        
                                        if (eax_83 == 0)
                                            goto label_6a1f4a
                                        
                                        continue
                                
                                if (result_1 s>= 0 && (ebx.b & 4) != 0)
                                    _write_multi_char(0x20, edi_23, arg1, &result_2)
                                    result_1 = result_2
                        
                        if (var_254_1 == 0)
                            eax_10 = var_214_1
                        else
                            _free(var_254_1)
                            var_254_1 = nullptr
                            result_1 = result_2
                            eax_10 = var_214_1
            
            edx_5.b = *eax_10
            var_215_1 = edx_5.b
            var_24c_1 = edx_5.b
            
            if (edx_5.b == 0)
                break
    
    result = result_1

char var_268
void* var_26c

if (var_268 != 0)
    *(var_26c + 0x70) &= 0xfffffffd
sub_69a5bc(eax_1 ^ &__saved_ebp)
return result
