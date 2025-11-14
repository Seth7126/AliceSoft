// 函数: sub_6a6870
// 地址: 0x6a6870
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t result_1 = 0
int32_t var_70 = 1
void* esi = nullptr
int32_t eax_4 = 0
int16_t var_74 = 0
void var_24
void* edi = &var_24
void* i_1 = nullptr
int32_t var_64 = 0
int32_t var_60 = 0
int32_t var_68 = 0
int32_t var_58 = 0
int32_t result

if (arg8 != 0)
    char* edx_1 = arg3
    void* var_54_1 = edx_1
    void* ecx_1
    
    while (true)
        ecx_1.b = *edx_1
        
        if (ecx_1.b != 0x20 && ecx_1.b != 9 && ecx_1.b != 0xa && ecx_1.b != 0xd)
            break
        
        edx_1 = &edx_1[1]
    
    void* i_4
    
    while (true)
        ecx_1.b = *edx_1
        edx_1 = &edx_1[1]
        char var_59_1 = ecx_1.b
        
        if (eax_4 u> 0xb)
            goto label_6a6b7a
        
        int32_t var_94_1
        bool cond:1_1
        
        switch (eax_4)
            case 0
                if (ecx_1.b - 0x31 u<= 8)
                label_6a690d:
                    var_94_1 = 3
                    goto label_6a690f
                
                if (ecx_1.b != ***(*arg8 + 0x84))
                    int32_t eax_11 = sx.d(ecx_1.b)
                    
                    if (eax_11 == 0x2b)
                        eax_4 = 2
                        var_74 = 0
                        continue
                        continue
                    else if (eax_11 == 0x2d)
                        eax_4 = 2
                        var_74 = -0x8000
                        continue
                        continue
                    else
                        if (eax_11 != 0x30)
                            goto label_6a6bcc
                        
                        eax_4 = 1
                        continue
                        continue
                else
                label_6a6924:
                    eax_4 = 5
                    continue
                    continue
            case 1
                var_64 = 1
                
                if (ecx_1.b - 0x31 u<= 8)
                    goto label_6a690d
                
                if (ecx_1.b == ***(*arg8 + 0x84))
                label_6a6976:
                    eax_4 = 4
                    continue
                    continue
                else if (ecx_1.b == 0x2b || ecx_1.b == 0x2d)
                label_6a69aa:
                    edx_1 -= 1
                    eax_4 = 0xb
                    continue
                    continue
                else
                    if (ecx_1.b != 0x30)
                        goto label_6a6989
                    
                    eax_4 = 1
                    continue
                    continue
            case 2
                if (ecx_1.b - 0x31 u<= 8)
                    goto label_6a690d
                
                if (ecx_1.b == ***(*arg8 + 0x84))
                    goto label_6a6924
                
                if (ecx_1.b != 0x30)
                    goto label_6a69db
                
                eax_4 = 1
                continue
                continue
            case 3
                var_64 = 1
                
                if (ecx_1.b s>= 0x30)
                    void* i_3 = i_1
                    int32_t esi_1 = var_58
                    
                    while (ecx_1.b s<= 0x39)
                        if (i_3 u>= 0x19)
                            esi_1 += 1
                        else
                            ecx_1.b -= 0x30
                            i_3 += 1
                            *edi = ecx_1.b
                            edi += 1
                        
                        ecx_1.b = *edx_1
                        edx_1 = &edx_1[1]
                        
                        if (ecx_1.b s< 0x30)
                            break
                    
                    var_58 = esi_1
                    esi = nullptr
                    i_1 = i_3
                
                if (ecx_1.b == ***(*arg8 + 0x84))
                    goto label_6a6976
                
                if (ecx_1.b == 0x2b || ecx_1.b == 0x2d)
                    goto label_6a69aa
                
            label_6a6989:
                
                if (ecx_1.b s<= 0x43)
                    goto label_6a6bcc
                
                if (ecx_1.b s<= 0x45)
                label_6a69a3:
                    eax_4 = 6
                    continue
                    continue
                
                ecx_1.b -= 0x64
                
                if (ecx_1.b u> 1)
                    goto label_6a6bcc
                
                goto label_6a69a3
            case 4
                var_64 = 1
                var_60 = 1
                i_4 = i_1
                bool cond:0_1
                
                if (i_4 != 0)
                    cond:0_1 = ecx_1.b s< 0x30
                else
                    cond:0_1 = ecx_1.b s< 0x30
                    
                    if (ecx_1.b == 0x30)
                        int32_t eax_30 = var_58
                        
                        do
                            ecx_1.b = *edx_1
                            eax_30 -= 1
                            edx_1 = &edx_1[1]
                        while (ecx_1.b == 0x30)
                        
                        var_58 = eax_30
                        i_4 = i_1
                        cond:0_1 = ecx_1.b s< 0x30
                
                if (not(cond:0_1))
                    int32_t esi_2 = var_58
                    
                    while (ecx_1.b s<= 0x39)
                        if (i_4 u< 0x19)
                            ecx_1.b -= 0x30
                            i_4 += 1
                            *edi = ecx_1.b
                            edi += 1
                            esi_2 -= 1
                        
                        ecx_1.b = *edx_1
                        edx_1 = &edx_1[1]
                        
                        if (ecx_1.b s< 0x30)
                            break
                    
                    var_58 = esi_2
                    esi = nullptr
                    i_1 = i_4
                
                if (ecx_1.b == 0x2b || ecx_1.b == 0x2d)
                    goto label_6a69aa
                
                if (ecx_1.b s<= 0x43)
                    edx_1 -= 1
                    break
                
                if (ecx_1.b s> 0x45)
                    ecx_1.b -= 0x64
                    
                    if (ecx_1.b u> 1)
                        edx_1 -= 1
                        break
                
                goto label_6a69a3
            case 5
                ecx_1.b -= 0x30
                var_60 = 1
                
                if (ecx_1.b u> 9)
                label_6a69db:
                    edx_1 = var_54_1
                    i_4 = i_1
                    break
                    break
                
                var_94_1 = 4
            label_6a690f:
                eax_4 = var_94_1
                edx_1 -= 1
                continue
                continue
            case 6
                var_54_1 = &edx_1[0xfffffffe]
                
                if (ecx_1.b - 0x31 u<= 8)
                    var_94_1 = 9
                    goto label_6a690f
                
                int32_t eax_33 = sx.d(ecx_1.b)
                
                if (eax_33 == 0x2b)
                label_6a6b1e:
                    eax_4 = 7
                    continue
                    continue
                else if (eax_33 == 0x2d)
                    eax_4 = 7
                    var_70 = 0xffffffff
                    continue
                else
                    cond:1_1 = eax_33 != 0x30
            case 7
                if (ecx_1.b - 0x31 u<= 8)
                    var_94_1 = 9
                    goto label_6a690f
                
                cond:1_1 = ecx_1.b != 0x30
            case 8
                var_68 = 1
                
                while (ecx_1.b == 0x30)
                    ecx_1.b = *edx_1
                    edx_1 = &edx_1[1]
                
                ecx_1.b -= 0x31
                
                if (ecx_1.b u<= 8)
                    var_94_1 = 9
                    goto label_6a690f
                
            label_6a6bcc:
                edx_1 -= 1
                i_4 = i_1
                break
                break
            case 9
                esi = nullptr
                var_68 = 1
                
                while (ecx_1.b s>= 0x30)
                    if (ecx_1.b s> 0x39)
                        break
                    
                    esi = sx.d(var_59_1) - 0x30 + esi * 0xa
                    
                    if (esi s> 0x1450)
                        ecx_1.b = var_59_1
                        esi = 0x1451
                        break
                    
                    ecx_1.b = *edx_1
                    edx_1 = &edx_1[1]
                    var_59_1 = ecx_1.b
                
                while (ecx_1.b s>= 0x30)
                    if (ecx_1.b s> 0x39)
                        break
                    
                    ecx_1.b = *edx_1
                    edx_1 = &edx_1[1]
                
                goto label_6a6bcc
            case 0xa
                goto label_6a6b7a
            case 0xb
                if (arg7 == 0)
                    eax_4 = 0xa
                    edx_1 -= 1
                label_6a6b7a:
                    
                    if (eax_4 == 0xa)
                        i_4 = i_1
                        break
                        break
                    
                    continue
                
                var_54_1 = &edx_1[0xffffffff]
                int32_t eax_40 = sx.d(ecx_1.b)
                
                if (eax_40 == 0x2b)
                    goto label_6a6b1e
                
                if (eax_40 != 0x2d)
                    goto label_6a69db
                
                var_70 = 0xffffffff
                eax_4 = 7
                continue
        
        if (cond:1_1)
            goto label_6a69db
        
        eax_4 = 8
    
    *arg2 = edx_1
    uint16_t eax_79
    int16_t ecx_16
    int32_t edx_10
    uint32_t j_11
    int32_t result_2
    
    if (var_64 == 0)
        eax_79 = 0
        j_11 = 0
        result_2 = 4
    label_6a6fbd:
        ecx_16 = 0
        edx_10 = 0
        result_1 = result_2
    else
        int32_t ecx_5
        
        if (i_4 u<= 0x18)
            ecx_5 = var_58
        else
            char var_d
            i_4.b = var_d
            
            if (i_4.b s>= 5)
                i_4.b += 1
                char var_d_1 = i_4.b
            
            edi -= 1
            ecx_5 = var_58 + 1
            i_4 = 0x18
            var_58 = ecx_5
        
        if (i_4 == 0)
            ecx_16 = 0
            eax_79 = 0
            j_11 = 0
            edx_10 = 0
        else
            void* edi_1 = edi - 1
            
            if (*edi_1 == 0)
                do
                    i_4 -= 1
                    ecx_5 += 1
                    edi_1 -= 1
                while (*edi_1 == 0)
                
                var_58 = ecx_5
            
            int16_t var_40
            sub_6aba96(&var_24, i_4, &var_40)
            
            if (var_70 s< 0)
                esi = neg.d(esi)
            
            void* i = esi + var_58
            
            if (var_68 == 0)
                i += arg5
            
            if (var_60 == 0)
                i -= arg6
            
            if (i s> 0x1450)
                eax_79 = 0x7fff
                j_11 = 0x80000000
                result_2 = 2
                goto label_6a6fbd
            
            if (i s< 0xffffebb0)
                ecx_16 = 0
                eax_79 = 0
                j_11 = 0
                edx_10 = 0
                result_1 = 1
            else
                int32_t* edx_2 = &data_74b0e8
                int32_t var_3e
                uint32_t j_10
                int32_t var_38
                
                if (i != 0)
                    if (i s< 0)
                        i = neg.d(i)
                        edx_2 = &data_74b248
                    
                    if (arg4 == 0)
                        var_40 = 0
                    
                    while (i != 0)
                        void* i_2 = i
                        edx_2 = &edx_2[0x15]
                        i s>>= 3
                        i_1 = i
                        void* eax_46 = i_2 & 7
                        
                        if (eax_46 != 0)
                            void* ecx_8 = eax_46 * 0xc + edx_2
                            void* var_54_2 = ecx_8
                            
                            if (*ecx_8 u>= 0x8000)
                                void* esi_5 = ecx_8
                                int32_t var_4c
                                ecx_8 = &var_4c
                                var_54_2 = &var_4c
                                var_4c = *esi_5
                                void var_48
                                void** edi_2 = &var_48
                                void** esi_6 = esi_5 + 4
                                *edi_2 = *esi_6
                                edi_2[1] = esi_6[1]
                                var_4c -= 1
                            
                            int16_t edi_5 = *(ecx_8 + 0xa)
                            int16_t edx_3 = var_38:2.w
                            int16_t eax_49 = (edi_5 ^ edx_3) & 0x8000
                            int32_t var_30_1 = 0
                            int16_t edx_4 = edx_3 & 0x7fff
                            int32_t var_2c = 0
                            int16_t edi_6 = edi_5 & 0x7fff
                            uint32_t j_7 = 0
                            uint32_t esi_9 = zx.d(edi_6 + edx_4)
                            uint32_t var_70_1 = esi_9
                            
                            if (edx_4 u>= 0x7fff || edi_6 u>= 0x7fff || esi_9.w u> 0xbffd)
                                int32_t eax_74
                                eax_74.b = eax_49 == 0
                                var_38 = ((eax_74 - 1) & 0x80000000) + 0x7fff8000
                                var_3e = 0
                                var_40.d = 0
                            else if (esi_9.w u> 0x3fbf)
                                if (edx_4 == 0)
                                    esi_9 += 1
                                    var_70_1 = esi_9
                                
                                if (edx_4 != 0 || (var_38 & 0x7fffffff) != 0 || var_3e != 0
                                        || var_40.d != 0)
                                    if (edi_6 == 0)
                                        var_70_1 = esi_9 + 1
                                    
                                    if (edi_6 == 0 && (*(ecx_8 + 8) & 0x7fffffff) == 0
                                            && *(ecx_8 + 4) == 0 && *ecx_8 == 0)
                                        goto label_6a6d2b
                                    
                                    int32_t eax_51 = 0
                                    int32_t* edx_5 = &var_2c
                                    int32_t j = 5
                                    int32_t var_78_1 = 0
                                    int32_t j_3 = 5
                                    
                                    do
                                        int32_t j_5 = j
                                        
                                        if (j s> 0)
                                            void* esi_11 = &(&var_40)[eax_51]
                                            void* var_68_1 = ecx_8 + 8
                                            
                                            do
                                                int32_t ecx_10 = zx.d(*esi_11) * zx.d(*var_68_1)
                                                int32_t ecx_11 = ecx_10 + edx_5[-1]
                                                int32_t eax_56
                                                
                                                if (ecx_11 u< edx_5[-1] || ecx_11 u< ecx_10)
                                                    eax_56 = 1
                                                else
                                                    eax_56 = 0
                                                
                                                edx_5[-1] = ecx_11
                                                
                                                if (eax_56 != 0)
                                                    *edx_5 += 1
                                                
                                                var_68_1 -= 2
                                                esi_11 += 2
                                                j -= 1
                                            while (j s> 0)
                                            
                                            ecx_8 = var_54_2
                                            j = j_3
                                            eax_51 = var_78_1
                                        
                                        edx_5 += 2
                                        eax_51 += 1
                                        j -= 1
                                        var_78_1 = eax_51
                                        j_3 = j
                                    while (j s> 0)
                                    
                                    uint32_t j_2 = j_7
                                    int32_t esi_13 = var_70_1 + 0xc002
                                    int32_t edi_7 = var_30_1
                                    uint32_t j_6 = j_2
                                    
                                    if (esi_13.w s<= 0)
                                    label_6a6e4a:
                                        esi_13 += 0xffff
                                        
                                        if (esi_13.w s>= 0)
                                            eax_51.w = var_30_1.w
                                        else
                                            int32_t ebx = 0
                                            uint32_t j_8 = zx.d((neg.d(esi_13)).w)
                                            uint32_t j_4 = j_8
                                            esi_13 += j_8
                                            uint32_t j_1
                                            
                                            do
                                                if ((var_30_1.b & 1) != 0)
                                                    ebx += 1
                                                
                                                int32_t ecx_14 = var_2c
                                                int32_t var_54_5 = ecx_14 u>> 1 | j_2 << 0x1f
                                                j_2 u>>= 1
                                                edi_7 = edi_7 u>> 1 | ecx_14 << 0x1f
                                                j_1 = j_4
                                                j_4 -= 1
                                                j_7 = j_2
                                                var_2c = var_54_5
                                                var_30_1 = edi_7
                                            while (j_1 != 1)
                                            j_6 = j_2
                                            result_1 = 0
                                            
                                            if (ebx == 0)
                                                eax_51.w = var_30_1.w
                                            else
                                                eax_51.w = edi_7.w
                                                eax_51.w |= 1
                                                var_30_1.w = eax_51.w
                                                edi_7 = var_30_1
                                    else
                                        while (j_2 s>= 0)
                                            int32_t eax_57 = var_2c
                                            int32_t eax_59 = (eax_57 * 2) | edi_7 u>> 0x1f
                                            edi_7 *= 2
                                            var_2c = eax_59
                                            var_30_1 = edi_7
                                            j_2 = (j_6 * 2) | eax_57 u>> 0x1f
                                            esi_13 += 0xffff
                                            j_6 = j_2
                                            j_7 = j_2
                                            
                                            if (esi_13.w s<= 0)
                                                break
                                        
                                        if (esi_13.w s<= 0)
                                            goto label_6a6e4a
                                        
                                        eax_51.w = var_30_1.w
                                    
                                    uint32_t j_9
                                    
                                    if (eax_51.w u<= 0x8000 && (edi_7 & 0x1ffff) != 0x18000)
                                        j_9 = j_6
                                    else if (var_30_1 != 0xffffffff)
                                        var_30_1 += 1
                                        j_9 = j_6
                                    else
                                        int32_t eax_65 = var_2c
                                        var_30_1 = 0
                                        
                                        if (eax_65 != 0xffffffff)
                                            var_2c = eax_65 + 1
                                        else
                                            eax_65.w = j_7:2.w
                                            var_2c = 0
                                            
                                            if (eax_65.w != 0xffff)
                                                eax_65.w += 1
                                                j_7:2.w = eax_65.w
                                            else
                                                j_7:2.w = 0x8000
                                                esi_13 += 1
                                        
                                        j_9 = j_7
                                    
                                    if (esi_13.w u< 0x7fff)
                                        var_40 = var_30_1:2.w
                                        var_3e = var_2c
                                        j_10 = j_9
                                        var_38:2.w = esi_13.w | eax_49
                                    else
                                        var_3e = 0
                                        var_40.d = 0
                                        int32_t eax_69
                                        eax_69.b = eax_49 == 0
                                        var_38 = ((eax_69 - 1) & 0x80000000) + 0x7fff8000
                                else
                                    var_38:2.w = 0
                            else
                            label_6a6d2b:
                                var_38 = 0
                                var_3e = 0
                                var_40.d = 0
                            
                            i = i_1
                
                ecx_16 = var_40
                edx_10 = var_3e
                j_11 = j_10
                eax_79 = (var_38 u>> 0x10).w
    arg1[5] = eax_79 | var_74
    result = result_1
    *arg1 = ecx_16
    *(arg1 + 2) = edx_10
    *(arg1 + 6) = j_11
else
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 0

sub_69a5bc(eax_1 ^ &__saved_ebp)
return result
