// 函数: sub_10004a3d
// 地址: 0x10004a3d
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
char* ebx = arg2
int32_t edi
int32_t var_288 = edi
void* edi_1 = arg4
void* var_228 = edi_1
int32_t var_260 = 0
char* i_5 = nullptr
uint32_t var_238 = 0
uint32_t i_4 = 0
uint32_t var_234 = 0
int32_t var_25c = 0
int32_t var_23c = 0
void var_254
char* i
void* edx
i, edx = sub_10004910(&var_254, arg3)
uint32_t result
void* var_24c
char var_248

if (arg1 != 0)
    if ((arg1[3].b & 0x40) == 0)
        int32_t eax_4 = sub_10009f7a(arg1)
        
        if (eax_4 == 0xffffffff || eax_4 == 0xfffffffe)
            i = &data_100202b0
        else
            i = ((eax_4 & 0x1f) << 6) + (&data_10023540)[eax_4 s>> 5]
        
        if ((i[0x24] & 0x7f) != 0)
            goto label_10004aad
        
        void* eax_7
        
        if (eax_4 == 0xffffffff || eax_4 == 0xfffffffe)
            eax_7 = &data_100202b0
        else
            eax_7 = ((eax_4 & 0x1f) << 6) + (&data_10023540)[eax_4 s>> 5]
        
        if ((*(eax_7 + 0x24) & 0x80) != 0 || ebx == 0)
            goto label_10004aad
    else if (ebx == 0)
        goto label_10004aad
    
    edx.b = *ebx
    uint32_t result_1 = 0
    uint32_t i_9 = 0
    uint32_t i_21 = 0
    void* i_19 = nullptr
    char var_215_1 = edx.b
    
    if (edx.b != 0)
        while (true)
            int32_t eax_8 = 0
            void* var_240_1 = &ebx[1]
            
            if (result_1 s>= 0)
                i.b = edx.b
                i.b -= 0x20
                
                if (i.b u<= 0x58)
                    eax_8 = zx.d(*(sx.d(edx.b) + 0x1001a948)) & 0xf
                
                uint32_t i_20 = zx.d(*(eax_8 * 9 + i_21 + 0x1001a968)) u>> 4
                i_21 = i_20
                
                if (i_20 == 8)
                    goto label_10004aad
                
                i = 7
                int32_t var_270
                
                switch (i_20)
                    case 0
                        goto label_10004dd7
                    case 1
                        i_4 = 0xffffffff
                        var_270 = 0
                        var_25c = 0
                        var_238 = 0
                        var_234 = 0
                        i_5 = nullptr
                        var_23c = 0
                    case 2
                        int32_t eax_13 = sx.d(edx.b)
                        
                        if (eax_13 == 0x20)
                            i_5 |= 2
                        else if (eax_13 == 0x23)
                            i_5 |= 0x80
                        else if (eax_13 == 0x2b)
                            i_5 |= 1
                        else if (eax_13 == 0x2d)
                            i_5 |= 4
                        else if (eax_13 == 0x30)
                            i_5 |= 8
                    case 3
                        if (edx.b != 0x2a)
                            var_238 = &sx.d(edx.b)[var_238 * 0xa - 0x30]
                        else
                            var_228 = edi_1 + 4
                            uint32_t edi_3 = *edi_1
                            var_238 = edi_3
                            
                            if (edi_3 s< 0)
                                i_5 |= 4
                                var_238 = neg.d(var_238)
                    case 4
                        i_4 = 0
                    case 5
                        if (edx.b != 0x2a)
                            i_4 = &sx.d(edx.b)[i_4 * 0xa - 0x30]
                        else
                            var_228 = edi_1 + 4
                            uint32_t i_17 = *edi_1
                            i_4 = i_17
                            
                            if (i_17 s< 0)
                                i_4 = 0xffffffff
                    case 6
                        if (edx.b == 0x49)
                            i_20.b = ebx[1]
                            
                            if (i_20.b == 0x36 && ebx[2] == 0x34)
                                i_5 |= 0x8000
                                var_240_1 = &ebx[3]
                            else if (i_20.b == 0x33 && ebx[2] == 0x32)
                                i_5 &= 0xffff7fff
                                var_240_1 = &ebx[3]
                            else if (i_20.b != 0x64 && i_20.b != 0x69 && i_20.b != 0x6f
                                    && i_20.b != 0x75 && i_20.b != 0x78 && i_20.b != 0x58)
                                i_21 = 0
                            label_10004dd7:
                                var_23c = 0
                                uint32_t eax_20
                                int32_t edx_1
                                eax_20, edx_1 = sub_1000a14b(edx.b, &var_254)
                                bool cond:1_1 = eax_20 == 0
                                eax_20.b = var_215_1
                                
                                if (not(cond:1_1))
                                    eax_20, edx_1 = sub_10004997(eax_20, edx_1, arg1, &result_1)
                                    eax_20.b = ebx[1]
                                    var_240_1 = &ebx[2]
                                    
                                    if (eax_20.b == 0)
                                        goto label_10004aad
                                
                                i_20, edx = sub_10004997(eax_20, edx_1, arg1, &result_1)
                        else if (edx.b == 0x68)
                            i_5 |= 0x20
                        else if (edx.b == 0x6c)
                            if (ebx[1] != 0x6c)
                                i_5 |= 0x10
                            else
                                i_5 |= 0x1000
                                var_240_1 = &ebx[2]
                        else if (edx.b == 0x77)
                            i_5 |= 0x800
                    case 7
                        i_20 = sx.d(edx.b)
                        char var_230
                        void* i_3
                        
                        if (i_20 s> 0x64)
                            if (i_20 s> 0x70)
                                if (i_20 != 0x73)
                                    if (i_20 == 0x75)
                                        goto label_100050c2
                                    
                                    if (i_20 != 0x78)
                                        goto label_100053f7
                                    
                                    var_260 = 0x27
                                    goto label_10005251
                                
                            label_10004eea:
                                i = i_4
                                
                                if (i == 0xffffffff)
                                    i = 0x7fffffff
                                
                                var_228 = edi_1 + 4
                                void* i_18 = *edi_1
                                i_3 = i_18
                                
                                if ((i_5 & 0x810) == 0)
                                    if (i_18 == 0)
                                        i_3 = data_100202a4
                                    
                                    void* i_14 = i_3
                                    
                                    while (i != 0)
                                        i -= 1
                                        
                                        if (*i_14 == 0)
                                            break
                                        
                                        i_14 += 1
                                    
                                    i_20 = i_14 - i_3
                                else
                                    if (i_18 == 0)
                                        i_3 = data_100202a8
                                    
                                    void* i_13 = i_3
                                    var_23c = 1
                                    
                                    while (i != 0)
                                        i -= 1
                                        
                                        if (*i_13 == 0)
                                            break
                                        
                                        i_13 += 2
                                    
                                    i_20 = (i_13 - i_3) s>> 1
                                
                                goto label_100053f1
                            
                            if (i_20 == 0x70)
                                i_4 = 8
                            label_1000521e:
                                var_260 = 7
                            label_10005251:
                                i_9 = 0x10
                                
                                if ((i_5.b & 0x80) != 0)
                                    i_20.b = var_260.b
                                    i_20.b += 0x51
                                    var_230 = 0x30
                                    char var_22f_1 = i_20.b
                                    var_234 = 2
                                
                                goto label_100050cc
                            
                            if (i_20 s< 0x65)
                                goto label_100053f7
                            
                            if (i_20 s<= 0x67)
                                goto label_10004e7b
                            
                            if (i_20 == 0x69)
                                goto label_100050bb
                            
                            if (i_20 != 0x6e)
                                if (i_20 != 0x6f)
                                    goto label_100053f7
                                
                                i_9 = 8
                                
                                if ((i_5.b & 0x80) != 0)
                                    i_5 |= 0x200
                                
                                goto label_100050cc
                            
                            int16_t* esi_5 = *edi_1
                            var_228 = edi_1 + 4
                            i_20, i = sub_10009fac()
                            
                            if (i_20 == 0)
                                goto label_10004aad
                            
                            if ((i_5.b & 0x20) == 0)
                                *esi_5 = result_1
                            else
                                i_20.w = result_1.w
                                *esi_5 = i_20.w
                            
                            var_25c = 1
                        else
                            if (i_20 == 0x64)
                            label_100050bb:
                                i_5 |= 0x40
                            label_100050c2:
                                i_9 = 0xa
                            label_100050cc:
                                i = i_5
                                int32_t eax_36
                                void* edi_9
                                
                                if ((i & 0x8000) == 0 && (i & 0x1000) == 0)
                                    edi_9 = edi_1 + 4
                                    
                                    if ((i.b & 0x20) == 0)
                                        eax_36 = *(edi_9 - 4)
                                        
                                        if ((i.b & 0x40) == 0)
                                            edx = nullptr
                                        else
                                            edx:eax_36 = sx.q(eax_36)
                                        
                                        var_228 = edi_9
                                    else
                                        var_228 = edi_9
                                        int32_t eax_46
                                        
                                        if ((i.b & 0x40) == 0)
                                            eax_46 = zx.d(*(edi_9 - 4))
                                        else
                                            eax_46 = sx.d(*(edi_9 - 4))
                                        
                                        edx:eax_36 = sx.q(eax_46)
                                else
                                    edi_9 = edi_1 + 8
                                    eax_36 = *(edi_9 - 8)
                                    edx = *(edi_9 - 4)
                                    var_228 = edi_9
                                
                                if ((i.b & 0x40) != 0 && edx s<= 0 && (edx s< 0 || eax_36 u< 0))
                                    int32_t temp18_1 = eax_36
                                    eax_36 = neg.d(eax_36)
                                    edx = neg.d(adc.d(edx, 0, temp18_1 != 0))
                                    i_5 |= 0x100
                                
                                void* ebx_8 = edx
                                int32_t edi_13 = eax_36
                                
                                if ((i_5 & 0x9000) == 0)
                                    ebx_8 = nullptr
                                
                                if (i_4 s>= 0)
                                    i_5 &= 0xfffffff7
                                    
                                    if (i_4 s> 0x200)
                                        i_4 = 0x200
                                else
                                    i_4 = 1
                                
                                int32_t eax_48 = edi_13 | ebx_8
                                
                                if (eax_48 == 0)
                                    var_234 &= eax_48
                                
                                void var_11
                                char* esi_8 = &var_11
                                
                                while (true)
                                    uint32_t i_12 = i_4
                                    i_4 -= 1
                                    
                                    if (i_12 s<= 0 && (edi_13 | ebx_8) == 0)
                                        break
                                    
                                    int32_t eax_52
                                    uint32_t edx_3
                                    edx_3:eax_52 = sx.q(i_9)
                                    uint32_t eax_53
                                    void* ecx_15
                                    eax_53, ecx_15, edx = __aulldvrm(edi_13, ebx_8, eax_52, edx_3)
                                    i = ecx_15 + 0x30
                                    void* var_268_2 = ebx_8
                                    edi_13 = eax_53
                                    ebx_8 = edx
                                    
                                    if (i s> 0x39)
                                        i = &i[var_260]
                                    
                                    *esi_8 = i.b
                                    esi_8 -= 1
                                
                                i_20 = &var_11 - esi_8
                                i_9 = i_20
                                i_3 = &esi_8[1]
                                
                                if ((i_5 & 0x200) == 0)
                                    goto label_100053f7
                                
                                if (i_20 != 0)
                                    i = &esi_8[1]
                                
                                if (i_20 != 0 && *i == 0x30)
                                    goto label_100053f7
                                
                                i_3 -= 1
                                i = i_3
                                *i = 0x30
                                i_20 += 1
                                goto label_100053f1
                            
                            char* i_1
                            char var_210
                            
                            if (i_20 s<= 0x53)
                                if (i_20 == 0x53)
                                    if ((i_5 & 0x830) == 0)
                                        i_5 |= 0x800
                                    
                                    goto label_10004eea
                                
                                if (i_20 != 0x41)
                                    int32_t eax_22 = i_20 - 0x42
                                    
                                    if (eax_22 == 1)
                                        if ((i_5 & 0x830) == 0)
                                            i_5 |= 0x800
                                        
                                        goto label_10004f6a
                                    
                                    if (eax_22 == 3 || eax_22 == 5)
                                        goto label_10004e68
                                    
                                    goto label_100053f7
                                
                            label_10004e68:
                                edx.b += 0x20
                                var_270 = 1
                                var_215_1 = edx.b
                            label_10004e7b:
                                i_5 |= 0x40
                                char* i_15 = &var_210
                                i_3 = &var_210
                                uint32_t var_268_1 = 0x200
                                
                                if (i_4 s< 0)
                                    i_4 = 6
                                else if (i_4 != 0)
                                    if (i_4 s> 0x200)
                                        i_4 = 0x200
                                    
                                    if (i_4 s> 0xa3)
                                        void* i_11
                                        i_11, edx = sub_10004125(i_4 + 0x15d)
                                        edx.b = var_215_1
                                        i_19 = i_11
                                        
                                        if (i_11 == 0)
                                            i_4 = 0xa3
                                        else
                                            i_3 = i_11
                                            var_268_1 = i_4 + 0x15d
                                            i_15 = i_11
                                else if (edx.b == 0x67)
                                    i_4 = 1
                                
                                int32_t var_27c = *edi_1
                                int32_t var_278_1 = *(edi_1 + 4)
                                var_228 = edi_1 + 8
                                sub_10003063(data_10020a80)(&var_27c, i_15, var_268_1, sx.d(edx.b), 
                                    i_4, var_270, &var_254)
                                void* edi_12 = i_5 & 0x80
                                
                                if (edi_12 != 0 && i_4 == 0)
                                    sub_10003063(data_10020a8c)(i_15, &var_254)
                                
                                if (var_215_1 == 0x67 && edi_12 == 0)
                                    sub_10003063(data_10020a88)(i_15, &var_254)
                                
                                if (*i_15 == 0x2d)
                                    i_5 |= 0x100
                                    i_15 = &i_15[1]
                                    i_3 = i_15
                                
                                i_1 = i_15
                                goto label_1000501d
                            
                            if (i_20 == 0x58)
                                goto label_1000521e
                            
                            int32_t eax_27 = i_20 - 0x59
                            
                            if (eax_27 != 1)
                                if (eax_27 == 8)
                                    goto label_10004e7b
                                
                                if (eax_27 != 0xa)
                                    goto label_100053f7
                                
                            label_10004f6a:
                                var_228 = edi_1 + 4
                                
                                if ((i_5 & 0x810) == 0)
                                    i_20.b = *edi_1
                                    var_210 = i_20.b
                                    i_9 = 1
                                else
                                    int32_t eax_32
                                    eax_32, i, edx = __mbccpy_s(&i_9, &var_210, 0x200, zx.d(*edi_1))
                                    
                                    if (eax_32 != 0)
                                        var_25c = 1
                                
                                i_3 = &var_210
                                goto label_100053f7
                            
                            int16_t* eax_33 = *edi_1
                            var_228 = edi_1 + 4
                            
                            if (eax_33 != 0)
                                i = *(eax_33 + 4)
                            
                            if (eax_33 != 0 && i != 0)
                                i_20 = sx.d(*eax_33)
                                i_3 = i
                                
                                if ((i_5 & 0x800) == 0)
                                    var_23c = 0
                                else
                                    int32_t eax_34
                                    edx:eax_34 = sx.q(i_20)
                                    i_20 = (eax_34 - edx) s>> 1
                                    var_23c = 1
                                
                                goto label_100053f1
                            
                            char* i_10 = data_100202a4
                            i_3 = i_10
                            i_1 = i_10
                        label_1000501d:
                            i_20, edx = _strlen(i_1)
                            i = i_1
                        label_100053f1:
                            i_9 = i_20
                        label_100053f7:
                            
                            if (var_25c == 0)
                                if ((i_5.b & 0x40) != 0)
                                    if ((i_5 & 0x100) != 0)
                                        var_230 = 0x2d
                                        var_234 = 1
                                    else if ((i_5.b & 1) != 0)
                                        var_230 = 0x2b
                                        var_234 = 1
                                    else if ((i_5.b & 2) != 0)
                                        var_230 = 0x20
                                        var_234 = 1
                                
                                uint32_t ebx_11 = var_238 - i_9 - var_234
                                
                                if ((i_5.b & 0xc) == 0)
                                    int32_t* var_28c_9 = arg1
                                    uint32_t var_290_6 = ebx_11
                                    edx = sub_100049ca(&result_1, edx.b, i, 0x20)
                                
                                int32_t edx_4 =
                                    sub_100049f0(&result_1, edx, &var_230, arg1, var_234)
                                
                                if ((i_5.b & 8) != 0 && (i_5.b & 4) == 0)
                                    int32_t* var_28c_11 = arg1
                                    uint32_t var_290_7 = ebx_11
                                    edx_4 = sub_100049ca(&result_1, edx_4.b, var_234, 0x30)
                                
                                uint32_t i_6 = i_9
                                
                                if (var_23c == 0 || i_6 s<= 0)
                                    i_20, edx = sub_100049f0(&result_1, edx_4, i_3, arg1, i_6)
                                    i = i_6
                                else
                                    void* i_16 = i_3
                                    uint32_t i_8 = i_6
                                    
                                    while (true)
                                        uint32_t eax_61 = zx.d(*i_16)
                                        i_8 -= 1
                                        i_16 += 2
                                        uint32_t i_7
                                        char var_10
                                        i_20, i, edx = __mbccpy_s(&i_7, &var_10, 6, eax_61)
                                        
                                        if (i_20 != 0 || i_7 == i_20)
                                            result_1 = 0xffffffff
                                            break
                                        
                                        uint32_t i_2 = i_7
                                        i_20, edx = sub_100049f0(&result_1, edx, &var_10, arg1, i_2)
                                        i = i_2
                                        
                                        if (i_8 == 0)
                                            break
                                        
                                        continue
                                
                                if (result_1 s>= 0 && (i_5.b & 4) != 0)
                                    int32_t* var_28c_14 = arg1
                                    uint32_t var_290_8 = ebx_11
                                    i_20, i, edx = sub_100049ca(&result_1, edx.b, i, 0x20)
                        
                        if (i_19 != 0)
                            i_20, edx = sub_10003602(i_19)
                            i_19 = nullptr
                
                ebx = var_240_1
                i_20.b = *ebx
                var_215_1 = i_20.b
                
                if (i_20.b != 0)
                    edi_1 = var_228
                    edx.b = i_20.b
                    continue
            
            if (i_21 == 0)
                break
            
            if (i_21 == 7)
                break
            
            *__errno() = 0x16
            int32_t var_29c_3
            __builtin_memset(&var_29c_3, 0, 0x14)
            goto label_10004aba
    
    if (var_248 != 0)
        *(var_24c + 0x70) &= 0xfffffffd
    
    result = result_1
else
label_10004aad:
    *__errno() = 0x16
    int32_t var_29c_1
    __builtin_memset(&var_29c_1, 0, 0x14)
label_10004aba:
    sub_100020e4(0, 0, 0, 0, 0)
    
    if (var_248 != 0)
        *(var_24c + 0x70) &= 0xfffffffd
    
    result = 0xffffffff
sub_10001d19(eax_1 ^ &__saved_ebp)
return result
