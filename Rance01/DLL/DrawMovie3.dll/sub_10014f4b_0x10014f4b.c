// 函数: sub_10014f4b
// 地址: 0x10014f4b
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t edi
int32_t var_84 = edi
int32_t i_17
int32_t* edi_1 = &i_17
void arg_8
void* esi = &arg_8
*edi_1 = *esi
edi_1[1].w = *(esi + 4)
int16_t var_c
int16_t eax_3 = var_c & 0x8000
int16_t edx_1 = var_c & 0x7fff
char var_34 = 0xcc
char var_33 = 0xcc
char var_32 = 0xcc
char var_31 = 0xcc
char var_30 = 0xcc
char var_2f = 0xcc
char var_2e = 0xcc
char var_2d = 0xcc
char var_2c = 0xcc
char var_2b = 0xcc
char var_2a = 0xfb
char var_29 = 0x3f

if (eax_3 == 0)
    arg4[1].b = 0x20
else
    arg4[1].b = 0x2d

uint32_t i_16 = i_17
int32_t result

if (edx_1 == 0 && i_16 == 0 && arg1 == 0)
    *arg4 = 0
    arg4[1].b = (((eax_3 != 0x8000) - 1) & 0xd) + 0x20
    *(arg4 + 3) = 1
    arg4[2].b = 0x30
    *(arg4 + 5) = 0
    result = 1
else if (edx_1 != 0x7fff)
    uint32_t ecx_1 = zx.d(edx_1)
    uint32_t eax_15 = zx.d(((((ecx_1 u>> 8) + (i_16 u>> 0x18 << 1)) * 0x4d + ecx_1 * 0x4d10
        - 0x134312f4) s>> 0x10).w)
    int16_t var_24_1 = 0
    int32_t i = neg.d(sx.d(eax_15.w))
    uint32_t var_50_1 = eax_15
    int16_t var_1a_1 = edx_1
    uint32_t i_8 = i_16
    int32_t i_19 = arg1
    char* var_6c_1 = &(*class CRendererPosPassThru `RTTI Type Descriptor'.name)[4]
    void* j
    int32_t var_40
    void* var_3c
    
    if (i != 0)
        if (i s< 0)
            i = neg.d(i)
            var_6c_1 = &data_10021260
        
        while (i != 0)
            var_6c_1 = &var_6c_1[0x54]
            int32_t ecx_4 = i & 7
            i s>>= 3
            
            if (ecx_4 != 0)
                void* ecx_6 = ecx_4 * 0xc + var_6c_1
                void* eax_16 = ecx_6
                void* var_48_1 = ecx_6
                
                if (*eax_16 u>= 0x8000)
                    var_40 = *eax_16
                    int32_t* edi_5 = &var_3c
                    void* esi_4 = eax_16 + 4
                    *edi_5 = *esi_4
                    eax_16 = &var_40
                    edi_5[1] = *(esi_4 + 4)
                    var_40 -= 1
                    var_48_1 = &var_40
                
                int32_t var_4c_1 = 0
                int32_t var_14_1 = 0
                i_17 = 0
                uint32_t i_11 = 0
                int16_t ecx_7 = *(eax_16 + 0xa)
                int16_t edx_4 = (ecx_7 ^ var_1a_1) & 0x8000
                int16_t edx_6 = var_1a_1 & 0x7fff
                int16_t ecx_8 = ecx_7 & 0x7fff
                uint32_t edi_8 = zx.d(ecx_8 + edx_6)
                
                if (edx_6 u>= 0x7fff || ecx_8 u>= 0x7fff || edi_8.w u> 0xbffd)
                    int32_t eax_32
                    eax_32.b = edx_4 == 0
                    i_8 = ((eax_32 - 1) & 0x80000000) + 0x7fff8000
                    i_19 = 0
                    var_24_1.d = 0
                else if (edi_8.w u> 0x3fbf)
                    if (edx_6 == 0)
                        edi_8 += 1
                    
                    if (edx_6 != 0 || (i_8 & 0x7fffffff) != 0 || i_19 != 0 || var_24_1.d != 0)
                        if (ecx_8 == 0)
                            edi_8 += 1
                        
                        if (ecx_8 == 0 && (*(eax_16 + 8) & 0x7fffffff) == 0 && *(eax_16 + 4) == 0
                                && *eax_16 == 0)
                            goto label_100151b8
                        
                        int32_t var_58_1 = 0
                        int32_t* esi_8 = &i_17
                        
                        for (j = 5; j s> 0; j -= 1)
                            void* edx_7 = j
                            void* k = edx_7
                            
                            if (edx_7 s> 0)
                                void* var_74_1 = &__saved_ebp + var_58_1 * 2 - 0x20
                                void* var_70_1 = eax_16 + 8
                                
                                do
                                    int32_t edx_8 = esi_8[-1]
                                    int32_t ecx_13 = zx.d(*var_74_1) * zx.d(*var_70_1)
                                    int32_t var_60_1 = 0
                                    int32_t eax_21 = edx_8 + ecx_13
                                    
                                    if (eax_21 u< edx_8 || eax_21 u< ecx_13)
                                        var_60_1 = 1
                                    
                                    esi_8[-1] = eax_21
                                    
                                    if (var_60_1 != 0)
                                        *esi_8 += 1
                                    
                                    var_74_1 += 2
                                    var_70_1 -= 2
                                    k -= 1
                                while (k s> 0)
                                
                                eax_16 = var_48_1
                            
                            esi_8 += 2
                            var_58_1 += 1
                        
                        int32_t edi_9 = edi_8 + 0xc002
                        
                        if (edi_9.w s<= 0)
                        label_100152c9:
                            edi_9 += 0xffff
                            
                            if (edi_9.w s< 0)
                                uint32_t j_3 = zx.d((neg.d(edi_9)).w)
                                edi_9 += j_3
                                uint32_t j_1
                                
                                do
                                    if ((var_14_1.b & 1) != 0)
                                        var_4c_1 += 1
                                    
                                    uint32_t i_18 = i_11
                                    i_11 u>>= 1
                                    int32_t ecx_19 = var_14_1 u>> 1 | i_17 << 0x1f
                                    j_1 = j_3
                                    j_3 -= 1
                                    i_17 = i_17 u>> 1 | i_18 << 0x1f
                                    var_14_1 = ecx_19
                                while (j_1 != 1)
                                
                                if (var_4c_1 != j_3)
                                    var_14_1.w |= 1
                        else
                            while ((i_11 & 0x80000000) == 0)
                                int32_t i_20 = i_17
                                int32_t ecx_14 = var_14_1
                                var_14_1 <<= 1
                                i_17 = (i_20 * 2) | ecx_14 u>> 0x1f
                                edi_9 += 0xffff
                                i_11 = (i_11 * 2) | i_20 u>> 0x1f
                                
                                if (edi_9.w s<= 0)
                                    break
                            
                            if (edi_9.w s<= 0)
                                goto label_100152c9
                        
                        if (var_14_1.w u> 0x8000 || (var_14_1 & 0x1ffff) == 0x18000)
                            if (var_14_1 != 0xffffffff)
                                var_14_1 += 1
                            else
                                var_14_1 = 0
                                
                                if (i_17 != 0xffffffff)
                                    i_17 += 1
                                else
                                    i_17 = 0
                                    
                                    if (i_11:2.w != 0xffff)
                                        i_11:2.w += 1
                                    else
                                        i_11:2.w = 0x8000
                                        edi_9 += 1
                        
                        if (edi_9.w u< 0x7fff)
                            var_24_1 = var_14_1:2.w
                            i_19 = i_17
                            i_8 = i_11
                            var_1a_1 = edi_9.w | edx_4
                        else
                            i_19 = 0
                            int32_t ecx_22
                            ecx_22.b = edx_4 == 0
                            var_24_1.d = 0
                            i_8 = ((ecx_22 - 1) & 0x80000000) + 0x7fff8000
                    else
                        var_1a_1 = 0
                else
                label_100151b8:
                    i_8 = 0
                    i_19 = 0
                    var_24_1.d = 0
    
    uint16_t ecx_27 = (i_8 u>> 0x10).w
    
    if (ecx_27 u>= 0x3fff)
        var_50_1 += 1
        int32_t var_54_1 = 0
        int32_t var_14_2 = 0
        i_17 = 0
        uint32_t i_2 = 0
        int16_t ecx_29 = ecx_27 & 0x7fff
        int16_t edx_14 = var_2a.w & 0x7fff
        int16_t ebx_6 = (var_2a.w ^ ecx_27) & 0x8000
        uint32_t esi_14 = zx.d(edx_14 + ecx_29)
        
        if (ecx_29 u>= 0x7fff || edx_14 u>= 0x7fff || esi_14.w u> 0xbffd)
            int32_t eax_49
            eax_49.b = ebx_6 == 0
            i_19 = 0
            var_24_1.d = 0
            i_8 = ((eax_49 - 1) & 0x80000000) + 0x7fff8000
        else
            int32_t i_12
            
            if (esi_14.w u> 0x3fbf)
                i_12 = 0
                
                if (ecx_29 == 0)
                    esi_14 += 1
                
                if (ecx_29 != 0 || (i_8 & 0x7fffffff) != 0 || i_19 != 0 || var_24_1.d != 0)
                    if (edx_14 == 0)
                        esi_14 += 1
                    
                    if (edx_14 == 0 && (var_2c.d & 0x7fffffff) == 0 && var_30.d == 0
                            && var_34.d == 0)
                        goto label_10015417
                    
                    int32_t var_58_2 = 0
                    int32_t* edi_11 = &i_17
                    
                    for (j = 5; j s> 0; j -= 1)
                        void* j_4 = j
                        void* j_2 = j_4
                        
                        if (j_4 s> 0)
                            char* var_5c_2 = &var_2c
                            void* eax_38 = &__saved_ebp + var_58_2 * 2 - 0x20
                            
                            do
                                int32_t var_48_2 = 0
                                int32_t ecx_32 = zx.d(*var_5c_2) * zx.d(*eax_38)
                                int32_t edx_16 = edi_11[-1]
                                int32_t ebx_7 = edx_16 + ecx_32
                                
                                if (ebx_7 u< edx_16 || ebx_7 u< ecx_32)
                                    var_48_2 = 1
                                
                                edi_11[-1] = ebx_7
                                
                                if (var_48_2 != 0)
                                    *edi_11 += 1
                                
                                var_5c_2 -= 2
                                eax_38 += 2
                                j_2 -= 1
                            while (j_2 s> 0)
                        
                        edi_11 += 2
                        var_58_2 += 1
                    
                    int32_t esi_15 = esi_14 + 0xc002
                    
                    if (esi_15.w s<= 0)
                    label_10015557:
                        esi_15 += 0xffff
                        
                        if (esi_15.w s< 0)
                            uint32_t i_9 = zx.d((neg.d(esi_15)).w)
                            esi_15 += i_9
                            uint32_t i_1
                            
                            do
                                if ((var_14_2.b & 1) != 0)
                                    var_54_1 += 1
                                
                                uint32_t i_10 = i_2
                                i_2 u>>= 1
                                int32_t ecx_38 = var_14_2 u>> 1 | i_17 << 0x1f
                                i_1 = i_9
                                i_9 -= 1
                                i_17 = i_17 u>> 1 | i_10 << 0x1f
                                var_14_2 = ecx_38
                            while (i_1 != 1)
                            
                            if (var_54_1 != i_9)
                                var_14_2.w |= 1
                    else
                        while (i_2 s>= 0)
                            int32_t i_21 = i_17
                            int32_t ecx_33 = var_14_2
                            var_14_2 <<= 1
                            i_17 = (i_21 * 2) | ecx_33 u>> 0x1f
                            esi_15 += 0xffff
                            i_2 = (i_2 * 2) | i_21 u>> 0x1f
                            
                            if (esi_15.w s<= 0)
                                break
                        
                        if (esi_15.w s<= 0)
                            goto label_10015557
                    
                    if (var_14_2.w u> 0x8000 || (var_14_2 & 0x1ffff) == 0x18000)
                        if (var_14_2 != 0xffffffff)
                            var_14_2 += 1
                        else
                            var_14_2 = 0
                            
                            if (i_17 != 0xffffffff)
                                i_17 += 1
                            else
                                i_17 = 0
                                
                                if (i_2:2.w != 0xffff)
                                    i_2:2.w += 1
                                else
                                    i_2:2.w = 0x8000
                                    esi_15 += 1
                    
                    if (esi_15.w u< 0x7fff)
                        var_24_1 = var_14_2:2.w
                        i_19 = i_17
                        i_8 = i_2
                        int16_t var_1a_3 = esi_15.w | ebx_6
                    else
                        i_19 = 0
                        int32_t ecx_41
                        ecx_41.b = ebx_6 == 0
                        var_24_1.d = 0
                        i_8 = ((ecx_41 - 1) & 0x80000000) + 0x7fff8000
                else
                    int16_t var_1a_2 = 0
            else
                i_12 = 0
            label_10015417:
                i_19 = 0
                var_24_1.d = 0
                i_8 = i_12
    
    int16_t eax_52 = var_50_1.w
    int32_t edi_17 = arg2
    *arg4 = eax_52
    
    if ((arg3 & 1) != 0)
        edi_17 += sx.d(eax_52)
    
    if ((arg3 & 1) == 0 || edi_17 s> 0)
        if (edi_17 s> 0x15)
            edi_17 = 0x15
        
        int32_t esi_19 = (i_8 u>> 0x10) - 0x3ffe
        int16_t var_1a_4 = 0
        int32_t i_7 = 8
        int32_t i_3
        
        do
            int32_t eax_55 = var_24_1.d
            var_24_1.d <<= 1
            uint32_t i_13 = (i_8 * 2) | i_19 u>> 0x1f
            i_3 = i_7
            i_7 -= 1
            i_19 = (i_19 * 2) | eax_55 u>> 0x1f
            i_8 = i_13
        while (i_3 != 1)
        
        if (esi_19 s< 0)
            uint32_t i_4 = zx.d((neg.d(esi_19)).b)
            
            while (i_4 s> 0)
                uint32_t i_14 = i_8
                i_8 u>>= 1
                int32_t eax_62 = var_24_1.d u>> 1 | i_19 << 0x1f
                i_4 -= 1
                i_19 = i_19 u>> 1 | i_14 << 0x1f
                var_24_1.d = eax_62
        
        void* j_6 = &arg4[2]
        j = j_6
        uint32_t i_5 = edi_17 + 1
        
        if (edi_17 + 1 s> 0)
            do
                int32_t edx_22 = var_24_1.d
                int32_t i_22 = i_19
                var_40 = var_24_1.d
                void** edi_18 = &var_3c
                void** esi_21 = &i_19:2
                *edi_18 = *esi_21
                edi_18[1] = esi_21[1]
                var_24_1.d <<= 1
                int32_t edi_21 = var_24_1.d
                var_24_1.d <<= 1
                int32_t ecx_50 = (i_22 * 2) | edx_22 u>> 0x1f
                int32_t edx_27 = var_40
                uint32_t ecx_52 = (((i_8 * 2) | i_22 u>> 0x1f) * 2) | ecx_50 u>> 0x1f
                int32_t eax_65 = var_24_1.d
                int32_t esi_27 = (ecx_50 * 2) | edi_21 u>> 0x1f
                int32_t edi_23 = edx_27 + eax_65
                
                if (edi_23 u< eax_65 || edi_23 u< edx_27)
                    int32_t edx_28 = 0
                    
                    if (esi_27 + 1 u< esi_27 || esi_27 + 1 u< 1)
                        edx_28 = 1
                    
                    esi_27 += 1
                    
                    if (edx_28 != 0)
                        ecx_52 += 1
                
                void* eax_67 = var_3c
                void* edx_29 = eax_67 + esi_27
                
                if (edx_29 u< esi_27 || edx_29 u< eax_67)
                    ecx_52 += 1
                
                int32_t var_38
                int32_t i_15 = ((ecx_52 + var_38) * 2) | edx_29 u>> 0x1f
                var_24_1.d = edi_23 * 2
                i_8 = i_15
                *j_6 = (i_15 u>> 0x18).b + 0x30
                j_6 += 1
                i_5 -= 1
                i_19 = (edx_29 * 2) | edi_23 u>> 0x1f
                var_1a_4:1.b = 0
            while (i_5 s> 0)
        
        uint32_t eax_69
        eax_69.b = *(j_6 - 1)
        void* i_6 = j_6 - 2
        int16_t* eax_70
        
        if (eax_69.b s>= 0x35)
            for (; i_6 u>= j; i_6 -= 1)
                if (*i_6 != 0x39)
                    break
                
                *i_6 = 0x30
            
            eax_70 = arg4
            
            if (i_6 u< j)
                i_6 += 1
                *eax_70 += 1
            
            *i_6 += 1
            goto label_10015813
        
        void* j_5
        
        for (j_5 = j; i_6 u>= j_5; i_6 -= 1)
            if (*i_6 != 0x30)
                break
        
        eax_70 = arg4
        
        if (i_6 u>= j_5)
        label_10015813:
            i_6.b -= eax_70.b
            i_6.b -= 3
            *(eax_70 + 3) = i_6.b
            *(sx.d(i_6.b) + eax_70 + 4) = 0
            result = 1
        else
            *eax_70 = 0
            *(eax_70 + 3) = 1
            eax_70[1].b = (((eax_3 != 0x8000) - 1) & 0xd) + 0x20
            *j_5 = 0x30
            *(eax_70 + 5) = 0
            result = 1
    else
        *arg4 = 0
        *(arg4 + 3) = 1
        arg4[1].b = (((eax_3 != 0x8000) - 1) & 0xd) + 0x20
        arg4[2].b = 0x30
        *(arg4 + 5) = 0
        result = 1
else
    *arg4 = 1
    char* var_88_1
    
    if ((i_16 != 0x80000000 || arg1 != 0) && (i_16 & 0x40000000) == 0)
        var_88_1 = "1#SNAN"
    label_1001508d:
        
        if (sub_10003cd0(&arg4[2], 0x16, var_88_1) != 0)
            int32_t var_98_1
            __builtin_memset(&var_98_1, 0, 0x14)
            sub_10001fbc()
            noreturn
        
        *(arg4 + 3) = 6
    else
        char* var_88_2
        
        if (eax_3 == 0 || i_16 != 0xc0000000)
            if (i_16 != 0x80000000 || arg1 != 0)
            label_10015082:
                var_88_1 = "1#QNAN"
                goto label_1001508d
            
            var_88_2 = "1#INF"
        else
            if (arg1 != 0)
                goto label_10015082
            
            var_88_2 = "1#IND"
        
        if (sub_10003cd0(&arg4[2], 0x16, var_88_2) != 0)
            int32_t var_98
            __builtin_memset(&var_98, 0, 0x14)
            sub_10001fbc()
            noreturn
        
        *(arg4 + 3) = 5
    result = 0

sub_10001d19(eax_1 ^ &__saved_ebp)
return result
