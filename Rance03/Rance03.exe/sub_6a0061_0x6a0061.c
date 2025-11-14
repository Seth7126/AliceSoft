// 函数: sub_6a0061
// 地址: 0x6a0061
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void var_188
void* var_1c0 = &var_188
char* edi = arg2
uint32_t ebx = 0
char* var_19c = edi
void* var_1ec = arg4
int32_t var_1e4 = 0x15e
int32_t var_1f8 = 0
int32_t var_1dc = 0
int32_t var_1c8 = 0
uint32_t i_4 = 0
int32_t var_1f4 = 0
uint32_t var_1a8 = 0
void* var_1f0 = nullptr
int32_t result

if (edi == 0 || arg1 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 0xffffffff
else if ((arg1[3].b & 0x40) != 0)
label_6a0178:
    void* var_208
    sub_69beb0(&var_208, arg3)
    uint32_t i_24 = 0
    char var_18b_1 = 0
    uint32_t i_10 = 0
    uint32_t i_1
    i_1.b = *edi
    uint32_t i_9 = 0
    int32_t result_1 = 0
    
    if (i_1.b == 0)
        result = 0
    else
        while (true)
            if (_isspace(zx.d(i_1.b)) == 0)
                int32_t eax_9
                eax_9.b = *edi
                
                if (eax_9.b != 0x25)
                label_6a1177:
                    i_24 += 1
                    i_10 = i_24
                    i_9 = i_24
                    ebx = __getc_nolock(arg1)
                    uint32_t eax_93 = zx.d(*edi)
                    edi = &edi[1]
                    var_1a8 = ebx
                    var_19c = edi
                    int32_t* var_218_51
                    
                    if (eax_93 != ebx)
                    label_6a1280:
                        
                        if (ebx == 0xffffffff)
                            break
                        
                        var_218_51 = arg1
                    label_6a128c:
                        __ungetc_nolock(ebx, var_218_51)
                        break
                        break
                    
                    if (__forcdecpt(ebx.b) != 0)
                        i_1 = __getc_nolock(arg1)
                        uint32_t ecx_67 = zx.d(*edi)
                        edi = &edi[1]
                        var_19c = edi
                        
                        if (ecx_67 != i_1)
                            if (i_1 != 0xffffffff)
                                __ungetc_nolock(i_1, arg1)
                            
                            if (ebx == 0xffffffff)
                                break
                            
                            var_218_51 = arg1
                            goto label_6a128c
                        
                        i_10 = i_24
                        i_9 = i_24
                else
                    if (edi[1] == 0x25)
                        if (eax_9.b == 0x25 && edi[1] == 0x25)
                            edi = &edi[1]
                        
                        goto label_6a1177
                    
                    char* esi_3 = var_19c
                    uint32_t i_2 = 0
                    void* i_16 = nullptr
                    char var_1b5_1 = 0
                    ebx:1.b = 1
                    int32_t var_1c4_1 = 0
                    ebx.b = 0
                    int32_t var_1cc_1 = 0
                    uint32_t var_1d8_1 = 0
                    char var_1ad_1 = 0
                    char var_1ae_1 = 0
                    char var_18a_1 = 0
                    char var_19d_1 = 0
                    char var_189_1 = 0
                    int32_t var_1e0_1 = 0
                    uint32_t eax_15
                    
                    do
                        esi_3 = &esi_3[1]
                        uint32_t eax_12 = zx.d(*esi_3)
                        
                        if (_isdigit(zx.d(eax_12.b)) != 0)
                            var_1cc_1 += 1
                            i_16 = eax_12 - 0x30 + i_16 * 0xa
                            eax_15:1.b = var_18a_1
                            eax_15.b = var_189_1
                        else if (eax_12 s> 0x4e)
                            if (eax_12 == 0x68)
                                eax_15.b = var_189_1
                                ebx:1.b -= 1
                                eax_15.b -= 1
                                var_189_1 = eax_15.b
                                eax_15:1.b = var_18a_1
                            else if (eax_12 != 0x6c)
                                if (eax_12 == 0x77)
                                    goto label_6a03ba
                                
                            label_6a03a2:
                                ebx.b += 1
                                eax_15:1.b = var_18a_1
                                eax_15.b = var_189_1
                            else if (esi_3[1] != 0x6c)
                                ebx:1.b += 1
                            label_6a03ba:
                                eax_15.b = var_189_1
                                eax_15.b += 1
                                var_189_1 = eax_15.b
                                eax_15:1.b = var_18a_1
                            else
                                esi_3 = &esi_3[1]
                            label_6a032f:
                                var_1e0_1 += 1
                                var_1c8 = 0
                                i_4 = 0
                                eax_15:1.b = var_18a_1
                                eax_15.b = var_189_1
                        else if (eax_12 == 0x4e)
                            eax_15:1.b = var_18a_1
                            eax_15.b = var_189_1
                        else if (eax_12 == 0x2a)
                            eax_15:1.b = var_18a_1
                            eax_15:1.b += 1
                            var_18a_1 = eax_15:1.b
                            eax_15.b = var_189_1
                        else if (eax_12 == 0x46)
                            eax_15:1.b = var_18a_1
                            eax_15.b = var_189_1
                        else if (eax_12 == 0x49)
                            eax_15.b = esi_3[1]
                            
                            if (eax_15.b == 0x36 && esi_3[2] == 0x34)
                                esi_3 = &esi_3[2]
                                goto label_6a032f
                            
                            if (eax_15.b == 0x33 && esi_3[2] == 0x32)
                                esi_3 = &esi_3[2]
                                eax_15:1.b = var_18a_1
                                eax_15.b = var_189_1
                            else if (eax_15.b == 0x64)
                                eax_15:1.b = var_18a_1
                                eax_15.b = var_189_1
                            else if (eax_15.b == 0x69)
                                eax_15.b = var_189_1
                                eax_15:1.b = var_18a_1
                            else
                                if (eax_15.b != 0x6f && eax_15.b != 0x78 && eax_15.b != 0x58)
                                    goto label_6a03a2
                                
                                eax_15:1.b = var_18a_1
                                eax_15.b = var_189_1
                        else
                            if (eax_12 != 0x4c)
                                goto label_6a03a2
                            
                            ebx:1.b += 1
                            eax_15:1.b = var_18a_1
                            eax_15.b = var_189_1
                    while (ebx.b == 0)
                    
                    char var_19e_1 = ebx:1.b
                    ebx = var_1a8
                    char* var_19c_1 = esi_3
                    uint32_t i_8 = i_10
                    void* i_5 = i_16
                    uint32_t* i_3
                    
                    if (eax_15:1.b != 0)
                        i_3 = nullptr
                    else
                        var_1f0 = var_1ec
                        void* ecx_11 = var_1ec + 4
                        var_1ec = ecx_11
                        i_3 = *(ecx_11 - 4)
                    
                    char var_18c_1 = 0
                    
                    if (eax_15.b == 0)
                        eax_15.b = *var_19c_1
                        
                        if (eax_15.b != 0x53)
                            var_189_1 = 0xff
                        
                        if (eax_15.b == 0x53 || eax_15.b == 0x43)
                            var_189_1 = 1
                    
                    int32_t ecx_15 = zx.d(*var_19c_1) | 0x20
                    int32_t var_1ac_1 = ecx_15
                    
                    if (ecx_15 != 0x6e)
                        if (ecx_15 == 0x63 || ecx_15 == 0x7b)
                            i_8 += 1
                            i_10 = i_8
                            i_9 = i_8
                            eax_15 = __getc_nolock(arg1)
                        else
                            eax_15 = __whiteout(&i_9, arg1)
                            i_8 = i_9
                            i_10 = i_8
                        
                        ebx = eax_15
                        var_1a8 = ebx
                        
                        if (ebx == 0xffffffff)
                            break
                        
                        ecx_15 = var_1ac_1
                        eax_15:1.b = var_18a_1
                    
                    int32_t edx_6 = var_1cc_1
                    
                    if (edx_6 != 0 && i_16 == 0)
                        goto label_6a1280
                    
                    if (eax_15:1.b == 0 && (ecx_15 == 0x63 || ecx_15 == 0x73 || ecx_15 == 0x7b))
                        void* eax_17 = var_1f0 + 4
                        var_1f0 = eax_17
                        uint32_t* i_14 = *(eax_17 - 4)
                        var_1ec = eax_17 + 4
                        i_3 = i_14
                        eax_15 = *eax_17
                        var_1d8_1 = eax_15
                        
                        if (eax_15 u< 1)
                            eax_15.b = var_189_1
                            
                            if (eax_15.b s<= 0)
                                *i_14 = 0
                            else
                                *i_14 = 0
                            
                            *__errno() = 0xc
                            break
                        
                        edx_6 = var_1cc_1
                    
                    char* edi_2
                    
                    if (ecx_15 s> 0x6f)
                        if (ecx_15 != 0x70)
                            char var_28[0xb]
                            
                            if (ecx_15 != 0x73)
                                if (ecx_15 == 0x75)
                                    goto label_6a0e08
                                
                                if (ecx_15 == 0x78)
                                    goto label_6a0563
                                
                                if (ecx_15 == 0x7b)
                                    if (var_189_1 s> 0)
                                        var_19d_1 = 1
                                    
                                    void* esi_6 = &var_19c_1[1]
                                    
                                    if (*esi_6 == 0x5e)
                                        esi_6 += 1
                                        var_1ad_1 = 0xff
                                    
                                    int16_t eax_65
                                    uint32_t edx_13
                                    eax_65, edx_13 = _memset(&var_28, 0, 0x20)
                                    
                                    if (*esi_6 != 0x5d)
                                        edx_13.b = var_1b5_1
                                    else
                                        edx_13.b = 0x5d
                                        char var_1d_1 = 0x20
                                        esi_6 += 1
                                    
                                    char i = *esi_6
                                    
                                    if (i != 0x5d)
                                        do
                                            esi_6 += 1
                                            
                                            if (i == 0x2d && edx_13.b != 0)
                                                eax_65.b = *esi_6
                                            
                                            if (i != 0x2d || edx_13.b == 0 || eax_65.b == 0x5d)
                                                eax_65.b = 1
                                                uint32_t i_7 = zx.d(i)
                                                edx_13 = i_7 u>> 3
                                                eax_65.b = 1 << (i_7.b & 7)
                                                var_28[edx_13] |= eax_65.b
                                                edx_13.b = i
                                            else
                                                esi_6 += 1
                                                
                                                if (edx_13.b u>= eax_65.b)
                                                    eax_65:1.b = edx_13.b
                                                    edx_13.b = eax_65.b
                                                else
                                                    eax_65:1.b = eax_65.b
                                                
                                                if (edx_13.b u< eax_65:1.b)
                                                    eax_65.b = eax_65:1.b
                                                    uint32_t esi_7 = zx.d(edx_13.b)
                                                    eax_65.b -= edx_13.b
                                                    uint32_t j_1 = zx.d(eax_65.b)
                                                    uint32_t j
                                                    
                                                    do
                                                        uint32_t edx_15 = esi_7 u>> 3
                                                        eax_65.b = 1
                                                        eax_65.b = 1 << (esi_7.b & 7)
                                                        var_28[edx_15] |= eax_65.b
                                                        esi_7 += 1
                                                        j = j_1
                                                        j_1 -= 1
                                                    while (j != 1)
                                                
                                                uint32_t ecx_49 = zx.d(eax_65:1.b)
                                                eax_65.b = 1
                                                edx_13 = ecx_49 u>> 3
                                                eax_65.b = 1 << (ecx_49.b & 7)
                                                var_28[edx_13] |= eax_65.b
                                                edx_13.b = 0
                                            
                                            i = *esi_6
                                        while (i != 0x5d)
                                        
                                        ebx = var_1a8
                                    
                                    if (*esi_6 == 0)
                                        break
                                    
                                    var_19c_1 = esi_6
                                    goto label_6a0956
                                
                                goto label_6a0b07
                            
                        label_6a093f:
                            eax_15.b = var_189_1
                            
                            if (eax_15.b s> 0)
                                var_19d_1 = 1
                            
                        label_6a0956:
                            uint32_t* i_15 = i_3
                            uint32_t i_23 = i_10 - 1
                            i_10 = i_23
                            i_9 = i_23
                            
                            if (ebx != 0xffffffff)
                                __ungetc_nolock(ebx, arg1)
                                i_23 = i_10
                            
                            if (var_1ac_1 != 0x63)
                                var_1d8_1 -= 1
                            
                            while (true)
                                void* i_12
                                
                                if (var_1cc_1 != 0)
                                    i_12 = i_5
                                    i_5 -= 1
                                
                                if (var_1cc_1 == 0 || i_12 != 0)
                                    i_10 = i_23 + 1
                                    i_9 = i_23 + 1
                                    ebx = __getc_nolock(arg1)
                                    var_1a8 = ebx
                                    
                                    if (ebx != 0xffffffff)
                                        if (var_1ac_1 == 0x63)
                                        label_6a0a2f:
                                            
                                            if (var_18a_1 != 0)
                                                i_15 += 1
                                            else
                                                if (var_1d8_1 == 0)
                                                    *__errno() = 0xc
                                                    
                                                    if (var_19d_1 == 0)
                                                        *i_15 = 0
                                                    else
                                                        *i_15 = 0
                                                    
                                                    break
                                                
                                                if (var_19d_1 == 0)
                                                    *i_3 = ebx.b
                                                    i_3 += 1
                                                    var_1d8_1 -= 1
                                                else
                                                    char var_1e8 = ebx.b
                                                    
                                                    if (__forcdecpt(ebx.b) != 0)
                                                        uint32_t i_21 = i_10 + 1
                                                        i_10 = i_21
                                                        i_9 = i_21
                                                        char var_1e7_1 = __getc_nolock(arg1)
                                                    
                                                    var_1f4 = 0x3f
                                                    sub_6aa09b(&var_1f4, &var_1e8, 
                                                        *(var_208 + 0x74), &var_208)
                                                    *i_3 = var_1f4.w
                                                    var_1d8_1 -= 1
                                                    i_3 += 2
                                            
                                            i_23 = i_10
                                            continue
                                        else if (var_1ac_1 != 0x73)
                                        label_6a09fa:
                                            
                                            if (var_1ac_1 == 0x7b && ((sx.d(var_28[ebx s>> 3])
                                                    ^ sx.d(var_1ad_1)) & 1 << (ebx.b & 7)) != 0)
                                                goto label_6a0a2f
                                        else if (ebx s< 9 || ebx s> 0xd)
                                            if (ebx != 0x20)
                                                goto label_6a0a2f
                                            
                                            goto label_6a09fa
                                    
                                    uint32_t i_22 = i_10 - 1
                                    i_10 = i_22
                                    i_9 = i_22
                                    
                                    if (ebx != 0xffffffff)
                                        __ungetc_nolock(ebx, arg1)
                                
                                i_1 = i_3
                                
                                if (i_15 == i_1)
                                    goto label_6a1293
                                
                                if (var_18a_1 != 0)
                                    goto label_6a0531
                                
                                result_1 += 1
                                
                                if (var_1ac_1 == 0x63)
                                    goto label_6a0531
                                
                                edi_2 = var_19c_1
                                
                                if (var_19d_1 == 0)
                                    *i_1 = 0
                                else
                                    *i_1 = 0
                                
                                goto label_6a0537_1
                            
                            break
                            break
                        
                        var_19e_1 = 1
                    label_6a0e08:
                        
                        if (ebx != 0x2d)
                            if (ebx != 0x2b)
                                goto label_6a0e53
                            
                            goto label_6a0e1c
                        
                        var_1ae_1 = 1
                    label_6a0e1c:
                        i_5 = i_16 - 1
                        
                        if (i_16 != 1 || edx_6 == 0)
                            i_8 += 1
                            i_10 = i_8
                            i_9 = i_8
                            ebx = __getc_nolock(arg1)
                            var_1a8 = ebx
                        label_6a0e4d:
                            ecx_15 = var_1ac_1
                        label_6a0e53:
                            eax_15.b = var_18c_1
                        else
                            eax_15.b = 1
                        
                        int32_t edi_12
                        
                        if (var_1e0_1 == 0)
                            if (eax_15.b != 0)
                                edi_12 = var_1ac_1
                            label_6a10da:
                                i_1 = i_2
                            else
                                while (true)
                                    uint32_t eax_86
                                    
                                    if (ecx_15 != 0x78 && ecx_15 != 0x70)
                                        edi_12 = var_1ac_1
                                        
                                        if (_isdigit(zx.d(ebx.b)) == 0)
                                            goto label_6a10b3
                                        
                                        if (edi_12 != 0x6f)
                                            eax_86 = i_2 * 0xa
                                            goto label_6a105e
                                        
                                        if (ebx s>= 0x38)
                                            goto label_6a10b3
                                        
                                        eax_86 = i_2 << 3
                                        goto label_6a105e
                                    
                                    if (_isxdigit(zx.d(ebx.b)) == 0)
                                        edi_12 = var_1ac_1
                                    label_6a10b3:
                                        i_10 = i_8 - 1
                                        i_9 = i_8 - 1
                                        
                                        if (ebx != 0xffffffff)
                                            __ungetc_nolock(ebx, arg1)
                                        
                                        goto label_6a10da
                                    
                                    uint32_t var_1d0_1 = i_2 << 4
                                    edi_12 = var_1ac_1
                                    ebx = sub_6a001e(ebx.b)
                                    eax_86 = var_1d0_1
                                    var_1a8 = ebx
                                label_6a105e:
                                    var_1c4_1 += 1
                                    i_1 = eax_86 - 0x30 + ebx
                                    i_2 = i_1
                                    
                                    if (var_1cc_1 != 0)
                                        void* i_18 = i_5
                                        i_5 -= 1
                                        
                                        if (i_18 == 1)
                                            break
                                    
                                    i_8 += 1
                                    i_10 = i_8
                                    i_9 = i_8
                                    ecx_15 = var_1ac_1
                                    ebx = __getc_nolock(arg1)
                                    var_1a8 = ebx
                            
                            if (var_1ae_1 != 0)
                                i_2 = neg.d(i_1)
                        else
                            if (eax_15.b != 0)
                                edi_12 = var_1ac_1
                            label_6a0fb1:
                                ecx_15 = var_1c8
                                i_1 = i_4
                            else
                                while (true)
                                    uint32_t var_1b4
                                    int32_t ecx_59
                                    
                                    if (ecx_15 != 0x78 && ecx_15 != 0x70)
                                        edi_12 = var_1ac_1
                                        
                                        if (_isdigit(zx.d(ebx.b)) == 0)
                                            goto label_6a0f8a
                                        
                                        if (edi_12 != 0x6f)
                                            int32_t eax_72
                                            uint32_t edx_20
                                            eax_72, edx_20 = __allmul(var_1c8, i_4, 0xa, 0)
                                            ecx_59 = eax_72
                                            var_1b4 = edx_20
                                            goto label_6a0f26
                                        
                                        if (ebx s>= 0x38)
                                            goto label_6a0f8a
                                        
                                        var_1b4 = i_4 << 3 | var_1c8 u>> 0xffffffe3
                                        ecx_59 = var_1c8 << 3
                                        goto label_6a0f26
                                    
                                    if (_isxdigit(zx.d(ebx.b)) == 0)
                                        edi_12 = var_1ac_1
                                    label_6a0f8a:
                                        i_10 = i_8 - 1
                                        i_9 = i_8 - 1
                                        
                                        if (ebx != 0xffffffff)
                                            __ungetc_nolock(ebx, arg1)
                                        
                                        goto label_6a0fb1
                                    
                                    var_1b4 = i_4 << 4 | var_1c8 u>> 0xffffffe4
                                    edi_12 = var_1ac_1
                                    ebx = sub_6a001e(ebx.b)
                                    ecx_59 = var_1c8 << 4
                                    var_1a8 = ebx
                                label_6a0f26:
                                    var_1c4_1 += 1
                                    int32_t eax_79
                                    int32_t edx_21
                                    edx_21:eax_79 = sx.q(ebx - 0x30)
                                    ecx_15 = ecx_59 + eax_79
                                    var_1c8 = ecx_15
                                    i_1 = adc.d(var_1b4, edx_21, ecx_59 + eax_79 u< ecx_59)
                                    i_4 = i_1
                                    
                                    if (var_1cc_1 != 0)
                                        void* i_19 = i_5
                                        i_5 -= 1
                                        
                                        if (i_19 == 1)
                                            break
                                    
                                    i_8 += 1
                                    i_10 = i_8
                                    i_9 = i_8
                                    ecx_15 = var_1ac_1
                                    ebx = __getc_nolock(arg1)
                                    var_1a8 = ebx
                            
                            if (var_1ae_1 != 0)
                                var_1c8 = neg.d(ecx_15)
                                i_4 = neg.d(adc.d(i_1, 0, ecx_15 != 0))
                        
                        int32_t edi_14 = neg.d(edi_12 - 0x46)
                        
                        if ((sbb.d(edi_14, edi_14, edi_12 != 0x46) & var_1c4_1) == 0)
                            break
                        
                        if (var_18a_1 != 0)
                            goto label_6a0531
                        
                        result_1 += 1
                        i_1 = i_2
                    label_6a111d:
                        
                        if (var_1e0_1 == 0)
                            ecx_15.b = var_19e_1
                            edi_2 = var_19c_1
                            
                            if (ecx_15.b == 0)
                                *i_3 = i_1.w
                            else
                                *i_3 = i_1
                            
                        label_6a0537:
                            i_1.b = var_18b_1
                        else
                            i_1 = i_3
                            *i_1 = var_1c8
                            *(i_1 + 4) = i_4
                        label_6a0531:
                            edi_2 = var_19c_1
                        label_6a0537_1:
                            i_1.b = var_18b_1
                    else
                        if (ecx_15 == 0x6f)
                            goto label_6a0e08
                        
                        if (ecx_15 == 0x63)
                            if (edx_6 == 0)
                                var_1cc_1 = 1
                                i_5 = i_16 + 1
                            
                            goto label_6a093f
                        
                        if (ecx_15 == 0x64)
                            goto label_6a0e08
                        
                        if (ecx_15 s> 0x64)
                            if (ecx_15 s> 0x67)
                                if (ecx_15 == 0x69)
                                    var_1ac_1 = 0x64
                                label_6a0563:
                                    void* i_17
                                    
                                    if (ebx != 0x2d)
                                        if (ebx == 0x2b)
                                            goto label_6a0c45
                                        
                                        i_17 = i_5
                                    else
                                        var_1ae_1 = 1
                                    label_6a0c45:
                                        i_17 = i_5 - 1
                                        bool cond:4_1 = i_5 != 1
                                        i_5 = i_17
                                        
                                        if (cond:4_1 || edx_6 == 0)
                                            i_8 += 1
                                            i_10 = i_8
                                            i_9 = i_8
                                            ebx = __getc_nolock(arg1)
                                            var_1a8 = ebx
                                        else
                                            var_18c_1 = 1
                                    
                                    if (ebx != 0x30)
                                        goto label_6a0e4d
                                    
                                    i_8 += 1
                                    i_10 = i_8
                                    i_9 = i_8
                                    ebx = __getc_nolock(arg1)
                                    var_1a8 = ebx
                                    
                                    if (ebx.b == 0x78 || ebx.b == 0x58)
                                        i_8 += 1
                                        i_10 = i_8
                                        i_9 = i_8
                                        ebx = __getc_nolock(arg1)
                                        var_1a8 = ebx
                                        
                                        if (var_1cc_1 != 0)
                                            i_5 = i_17 - 2
                                            
                                            if (i_17 - 2 s< 1)
                                                var_18c_1 += 1
                                        
                                        ecx_15 = 0x78
                                        var_1ac_1 = ecx_15
                                    else
                                        ecx_15 = var_1ac_1
                                        var_1c4_1 = 1
                                        
                                        if (ecx_15 == 0x78)
                                            i_8 -= 1
                                            i_10 = i_8
                                            i_9 = i_8
                                            
                                            if (ebx != 0xffffffff)
                                                __ungetc_nolock(ebx, arg1)
                                                ecx_15 = var_1ac_1
                                            
                                            ebx = 0x30
                                            var_1a8 = 0x30
                                        else
                                            if (var_1cc_1 != 0)
                                                i_5 = i_17 - 1
                                                
                                                if (i_17 == 1)
                                                    var_18c_1 += 1
                                            
                                            ecx_15 = 0x6f
                                            var_1ac_1 = ecx_15
                                    
                                    goto label_6a0e53
                                
                                if (ecx_15 != 0x6e)
                                    goto label_6a0b07
                                
                                i_1 = i_8
                                
                                if (var_18a_1 == 0)
                                    goto label_6a111d
                                
                                goto label_6a0531
                            
                            char* esi_4 = nullptr
                            uint32_t i_25
                            
                            if (ebx != 0x2d)
                                if (ebx == 0x2b)
                                    goto label_6a0593
                                
                                i_25 = i_10
                            else
                                esi_4 = 1
                                *var_1c0 = ebx.b
                            label_6a0593:
                                i_5 = i_16 - 1
                                i_25 = i_10 + 1
                                ebx = __getc_nolock(arg1)
                                var_1a8 = ebx
                            
                            if (var_1cc_1 == 0)
                                i_5 = 0xffffffff
                            
                            int32_t eax_22 = _isdigit(zx.d(ebx.b))
                            
                            while (true)
                                void* i_13 = i_5
                                
                                if (eax_22 != 0)
                                    void* i_20 = i_13
                                    i_13 -= 1
                                    i_5 = i_13
                                    
                                    if (i_20 != 0)
                                        var_1c4_1 += 1
                                        *(esi_4 + var_1c0) = ebx.b
                                        esi_4 = &esi_4[1]
                                        
                                        if (sub_69ffbf(esi_4, &var_1e4, &var_1c0, &var_188, 
                                                &var_1dc) == 0)
                                            break
                                        
                                        i_25 += 1
                                        ebx = __getc_nolock(arg1)
                                        var_1a8 = ebx
                                        eax_22 = _isdigit(zx.d(ebx.b))
                                        continue
                                
                                i_1.b = ***(var_208 + 0x84)
                                char var_1ad_2 = i_1.b
                                
                                if (i_1.b == ebx.b)
                                    i_5 = i_13 - 1
                                    
                                    if (i_13 != 0)
                                        i_25 += 1
                                        ebx = __getc_nolock(arg1)
                                        uint32_t eax_29
                                        eax_29.b = var_1ad_2
                                        var_1a8 = ebx
                                        *(esi_4 + var_1c0) = eax_29.b
                                        esi_4 = &esi_4[1]
                                        
                                        if (sub_69ffbf(esi_4, &var_1e4, &var_1c0, &var_188, 
                                                &var_1dc) == 0)
                                            goto label_6a1293
                                        
                                        for (i_1 = _isdigit(zx.d(ebx.b)); i_1 != 0; 
                                                i_1 = _isdigit(zx.d(ebx.b)))
                                            i_1 = i_5
                                            i_5 -= 1
                                            
                                            if (i_1 == 0)
                                                break
                                            
                                            var_1c4_1 += 1
                                            *(esi_4 + var_1c0) = ebx.b
                                            esi_4 = &esi_4[1]
                                            
                                            if (sub_69ffbf(esi_4, &var_1e4, &var_1c0, &var_188, 
                                                    &var_1dc) == 0)
                                                goto label_6a1293
                                            
                                            i_25 += 1
                                            ebx = __getc_nolock(arg1)
                                            var_1a8 = ebx
                                
                                if (var_1c4_1 != 0 && (ebx == 0x65 || ebx == 0x45))
                                    void* i_6 = i_5 - 1
                                    
                                    if (i_5 != 0)
                                        *(esi_4 + var_1c0) = 0x65
                                        esi_4 = &esi_4[1]
                                        
                                        if (sub_69ffbf(esi_4, &var_1e4, &var_1c0, &var_188, 
                                                &var_1dc) != 0)
                                            i_25 += 1
                                            ebx = __getc_nolock(arg1)
                                            var_1a8 = ebx
                                            
                                            if (ebx != 0x2d)
                                                if (ebx == 0x2b)
                                                label_6a080a:
                                                    void* i_11 = i_6
                                                    i_6 -= 1
                                                    
                                                    if (i_11 != 0)
                                                        i_25 += 1
                                                        ebx = __getc_nolock(arg1)
                                                        var_1a8 = ebx
                                                    else
                                                        i_6 &= i_11
                                                    
                                                    goto label_6a0838
                                                
                                            label_6a0838:
                                                i_1 = _isdigit(zx.d(ebx.b))
                                                
                                                while (true)
                                                    if (i_1 == 0)
                                                        goto label_6a08b3
                                                    
                                                    i_1 = i_6
                                                    i_6 -= 1
                                                    
                                                    if (i_1 == 0)
                                                        goto label_6a08b3
                                                    
                                                    var_1c4_1 += 1
                                                    *(esi_4 + var_1c0) = ebx.b
                                                    esi_4 = &esi_4[1]
                                                    
                                                    if (sub_69ffbf(esi_4, &var_1e4, &var_1c0, 
                                                            &var_188, &var_1dc) == 0)
                                                        break
                                                    
                                                    i_25 += 1
                                                    ebx = __getc_nolock(arg1)
                                                    var_1a8 = ebx
                                                    i_1 = _isdigit(zx.d(ebx.b))
                                            else
                                                *(esi_4 + var_1c0) = ebx.b
                                                esi_4 = &esi_4[1]
                                                
                                                if (sub_69ffbf(esi_4, &var_1e4, &var_1c0, &var_188, 
                                                        &var_1dc) != 0)
                                                    goto label_6a080a
                                        
                                        goto label_6a1293
                                
                            label_6a08b3:
                                i_10 = i_25 - 1
                                i_9 = i_25 - 1
                                
                                if (ebx != 0xffffffff)
                                    __ungetc_nolock(ebx, arg1)
                                
                                if (var_1c4_1 == 0)
                                    goto label_6a1293
                                
                                if (var_18a_1 == 0)
                                    void* eax_47 = var_1c0
                                    result_1 += 1
                                    *(esi_4 + eax_47) = 0
                                    DecodePointer(data_74b08c)(sx.d(var_19e_1) - 1, i_3, eax_47, 
                                        &var_208)
                                
                                goto label_6a0531
                            
                            break
                            break
                        
                    label_6a0b07:
                        edi_2 = var_19c_1
                        
                        if (zx.d(*edi_2) != ebx)
                            if (ebx != 0xffffffff)
                                __ungetc_nolock(ebx, arg1)
                            
                            var_1f8 = 1
                            break
                        
                        i_1.b = var_18b_1
                        i_1.b -= 1
                        
                        if (var_18a_1 == 0)
                            var_1ec = var_1f0
                    
                    i_24 = i_10
                    i_1.b += 1
                    edi = &edi_2[1]
                    var_18b_1 = i_1.b
                    var_19c = edi
                
                if (ebx == 0xffffffff)
                    if (*edi != 0x25)
                        break
                    
                    if (edi[1] != 0x6e)
                        break
            else
                i_9 = i_24 - 1
                uint32_t eax_10 = __whiteout(&i_9, arg1)
                
                if (eax_10 != 0xffffffff)
                    __ungetc_nolock(eax_10, arg1)
                
                do
                    edi = &edi[1]
                    i_1 = _isspace(zx.d(*edi))
                while (i_1 != 0)
                
                i_24 = i_9
                var_19c = edi
                i_10 = i_24
            
            i_1.b = *edi
            
            if (i_1.b == 0)
                break
        
    label_6a1293:
        
        if (var_1dc == 1)
            _free(var_1c0)
        
        result = 0xffffffff
        
        if (ebx == 0xffffffff)
            if (result_1 != 0 || var_18b_1 != result_1.b)
                result = result_1
        else if (var_1f8 != 1)
            result = result_1
        else
            *__errno() = 0x16
            __invalid_parameter_noinfo()
            result = result_1
    
    char var_1fc
    void* var_200
    
    if (var_1fc != 0)
        *(var_200 + 0x70) &= 0xfffffffd
else
    int32_t eax_3 = __fileno(arg1)
    void* edx_4
    
    if (eax_3 == 0xffffffff || eax_3 == 0xfffffffe)
        edx_4 = &data_74a630
    else
        edx_4 = ((eax_3 & 0x1f) << 6) + (&data_75ca40)[eax_3 s>> 5]
    
    void* ecx_4
    
    if ((*(edx_4 + 0x24) & 0x7f) == 0)
        if (eax_3 == 0xffffffff || eax_3 == 0xfffffffe)
            ecx_4 = &data_74a630
        else
            ecx_4 = ((eax_3 & 0x1f) << 6) + (&data_75ca40)[eax_3 s>> 5]
    
    if ((*(edx_4 + 0x24) & 0x7f) == 0 && (*(ecx_4 + 0x24) & 0x80) == 0)
        goto label_6a0178
    
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 0xffffffff

sub_69a5bc(eax_1 ^ &__saved_ebp)
return result
