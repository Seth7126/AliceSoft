// 函数: sub_6b6db0
// 地址: 0x6b6db0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_184
int32_t eax_1 = __security_cookie ^ &var_184
int32_t* ebx = arg5
int32_t* var_16c = ebx
void* ebp = arg4
void* var_180 = ebp
void* eax_5 = *(*(*(arg2 + 0x40) + 4) + 0x1c)
int32_t* edx = *(ebp + 0x510)
int32_t eax_6 = *(eax_5 + 0xb20)
var_184 = edx
int32_t edi = *(ebp + 0x504)
int32_t result

if (ebx == 0)
    sub_6b2cf0(arg3, 0, 1)
    int32_t eax_89
    int32_t edx_19
    edx_19:eax_89 = sx.q(*(arg2 + 0x24))
    _memset(arg6, 0, (eax_89 - edx_19) s>> 1 << 2)
    result = 0
else
    int32_t esi_1 = 0
    
    if (edi s> 0)
        do
            int32_t ecx = var_16c[esi_1]
            uint32_t edx_2 = ecx & 0x7fff
            
            switch (edx[0xd0] - 1)
                case 0
                    edx_2 u>>= 2
                case 1
                    edx_2 u>>= 3
                case 2
                    edx_2 = (ecx & 0x7fff) u/ 0xc
                case 3
                    edx_2 u>>= 4
            
            var_16c[esi_1] = (ecx & 0x8000) | edx_2
            esi_1 += 1
        while (esi_1 s< edi)
        
        ebp = var_180
        ebx = var_16c
    
    int32_t esi_9 = *ebx
    int32_t ebx_2 = ebx[1]
    int32_t var_108 = esi_9
    
    if (edi s> 2)
        int32_t* esi_2 = var_16c
        void* var_17c_1 = &edx[0xd3]
        void* ecx_4 = var_180 + 0x30c
        void* var_168_1 = ecx_4
        void* eax_11 = &var_108 - esi_2
        int32_t* ebp_2 = &esi_2[2]
        int32_t i_7 = edi - 2
        int32_t i
        
        do
            int32_t eax_12 = *(ecx_4 + 0xfc)
            int32_t ecx_5 = *ecx_4
            int32_t ebx_3 = edx[eax_12 + 0xd1]
            int32_t* eax_13 = &esi_2[eax_12]
            void* edx_3 = &esi_2[ecx_5]
            int32_t eax_15 = *eax_13 & 0x7fff
            int32_t edi_4 = (esi_2[ecx_5] & 0x7fff) - eax_15
            int32_t eax_17
            int32_t edx_4
            edx_4:eax_17 = sx.q(edi_4)
            int32_t temp0_1 = divs.dp.d(sx.q(((eax_17 ^ edx_4) - edx_4) * (*var_17c_1 - ebx_3)), 
                var_184[ecx_5 + 0xd1] - ebx_3)
            int32_t edx_8
            
            if (edi_4 s>= 0)
                edx_8 = temp0_1 + eax_15
            else
                edx_8 = eax_15 - temp0_1
            
            int32_t ecx_8 = *ebp_2
            
            if ((ecx_8 & 0x8000) != 0 || edx_8 == ecx_8)
                *ebp_2 = edx_8 | 0x8000
                *(eax_11 + ebp_2) = 0
            else
                int32_t esi_7 = edx_8
                int32_t eax_27 = *(var_180 + 0x50c) - edx_8
                
                if (eax_27 s< edx_8)
                    esi_7 = eax_27
                
                int32_t ecx_9 = ecx_8 - edx_8
                int32_t ecx_10
                
                if (ecx_8 - edx_8 s>= 0)
                    if (ecx_9 s< esi_7)
                        ecx_10 = ecx_9 * 2
                    else
                        ecx_10 = ecx_9 + esi_7
                else if (ecx_9 s>= neg.d(esi_7))
                    ecx_10 = not.d(ecx_9 * 2)
                else
                    ecx_10 = esi_7 - ecx_9 - 1
                
                *(eax_11 + ebp_2) = ecx_10
                *eax_13 = eax_15
                *edx_3 &= 0x7fff
            
            ebp_2 = &ebp_2[1]
            var_17c_1 += 4
            ecx_4 = var_168_1 + 4
            i = i_7
            i_7 -= 1
            edx = var_184
            esi_2 = var_16c
            var_168_1 = ecx_4
        while (i != 1)
        esi_9 = var_108
        ebp = var_180
    
    sub_6b2cf0(arg3, 1, 1)
    int32_t ecx_13 = *(ebp + 0x50c)
    *(ebp + 0x51c) += 1
    int32_t edx_10 = 0
    uint32_t i_2 = ecx_13 - 1
    uint32_t i_1 = i_2
    
    if (ecx_13 != 1)
        do
            edx_10 += 1
            i_1 u>>= 1
        while (i_1 != 0)
    
    *(ebp + 0x518) += edx_10 * 2
    int32_t eax_35 = 0
    
    for (; i_2 != 0; i_2 u>>= 1)
        eax_35 += 1
    
    sub_6b2cf0(arg3, esi_9, eax_35)
    void* esi_10 = var_180
    int32_t ecx_14 = 0
    int32_t eax_36 = *(esi_10 + 0x50c)
    uint32_t i_3 = eax_36 - 1
    
    if (eax_36 != 1)
        do
            ecx_14 += 1
            i_3 u>>= 1
        while (i_3 != 0)
    
    sub_6b2cf0(arg3, ebx_2, ecx_14)
    int32_t* ebx_4 = var_184
    int32_t i_8 = 0
    int32_t var_17c_2 = 2
    
    if (*ebx_4 s> 0)
        void* ecx_15 = &ebx_4[1]
        void* var_168_2 = ecx_15
        int32_t i_4
        
        do
            int32_t eax_37 = *ecx_15
            int32_t ebp_3 = 0
            int128_t var_148
            __builtin_memset(&var_148, 0, 0x20)
            int32_t edi_7 = ebx_4[eax_37 + 0x20]
            int32_t eax_38 = ebx_4[eax_37 + 0x30]
            int32_t edx_11 = 1 << eax_38.b
            int32_t ebx_5 = 0
            int32_t var_174_2 = edi_7
            
            if (eax_38 == 0)
                ebx_4 = var_184
            else
                int32_t ecx_17 = 0
                int32_t var_128[0x8]
                
                if (edx_11 s> 0)
                    void* esi_14 = &var_184[(eax_37 + 0xa) * 8]
                    
                    do
                        int32_t eax_39 = *esi_14
                        
                        if (eax_39 s>= 0)
                            var_128[ecx_17] = *(*(eax_5 + (eax_39 << 2) + 0x720) + 4)
                        else
                            var_128[ecx_17] = 1
                        
                        ecx_17 += 1
                        esi_14 += 4
                    while (ecx_17 s< edx_11)
                    
                    edi_7 = var_174_2
                
                int32_t esi_15 = 0
                
                if (edi_7 s> 0)
                    void* edi_9 = &(&var_108)[var_17c_2]
                    
                    do
                        int32_t eax_43 = 0
                        
                        if (edx_11 s> 0)
                            do
                                if (*edi_9 s< var_128[eax_43])
                                    *(&var_148 + (esi_15 << 2)) = eax_43
                                    break
                                
                                eax_43 += 1
                            while (eax_43 s< edx_11)
                        
                        int32_t eax_45 = *(&var_148 + (esi_15 << 2)) << ebx_5.b
                        esi_15 += 1
                        ebp_3 |= eax_45
                        edi_9 += 4
                        ebx_5 += var_184[eax_37 + 0x30]
                    while (esi_15 s< var_174_2)
                
                ebx_4 = var_184
                void* esi_16 = eax_6 + ebx_4[eax_37 + 0x40] * 0x38
                void* eax_50
                
                if (ebp_3 s>= 0)
                    eax_50 = *(esi_16 + 0xc)
                
                if (ebp_3 s< 0 || ebp_3 s>= *(eax_50 + 4))
                    esi_10 = var_180
                    *(esi_10 + 0x514) = *(esi_10 + 0x514)
                else
                    sub_6b2cf0(arg3, *(*(esi_16 + 0x14) + (ebp_3 << 2)), 
                        *(*(eax_50 + 8) + (ebp_3 << 2)))
                    esi_10 = var_180
                    *(esi_10 + 0x514) += *(*(*(esi_16 + 0xc) + 8) + (ebp_3 << 2))
            
            int32_t edx_12 = var_174_2
            int32_t edi_10 = 0
            
            if (edx_12 s> 0)
                void* ecx_23 = (eax_37 << 3) + 0x50
                void* var_15c_2 = ecx_23
                void* ebp_4 = &(&var_108)[var_17c_2]
                
                do
                    int32_t ecx_24 = ebx_4[*(&var_148 + (edi_10 << 2)) + ecx_23]
                    
                    if (ecx_24 s>= 0)
                        int32_t esi_17 = *ebp_4
                        int32_t eax_61 = ecx_24 * 7
                        void* ebx_6 = eax_6 + (eax_61 << 3)
                        
                        if (esi_17 s>= *(eax_6 + (eax_61 << 3) + 4))
                            esi_10 = var_180
                        else
                            void* eax_62
                            
                            if (esi_17 s>= 0)
                                eax_62 = *(ebx_6 + 0xc)
                            
                            if (esi_17 s< 0 || esi_17 s>= *(eax_62 + 4))
                                esi_10 = var_180
                                *(esi_10 + 0x518) = *(esi_10 + 0x518)
                            else
                                sub_6b2cf0(arg3, *(*(ebx_6 + 0x14) + (esi_17 << 2)), 
                                    *(*(eax_62 + 8) + (esi_17 << 2)))
                                edx_12 = var_174_2
                                esi_10 = var_180
                                *(esi_10 + 0x518) += *(*(*(ebx_6 + 0xc) + 8) + (esi_17 << 2))
                        
                        ebx_4 = var_184
                    
                    ecx_23 = var_15c_2
                    edi_10 += 1
                    ebp_4 += 4
                while (edi_10 s< edx_12)
            
            i_4 = i_8 + 1
            var_17c_2 += edx_12
            ecx_15 = var_168_2 + 4
            i_8 = i_4
            var_168_2 = ecx_15
        while (i_4 s< *ebx_4)
    
    int32_t i_6 = 0
    int32_t i_5 = 1
    void* ebx_7 = arg2
    int32_t i_9 = 0
    int32_t ecx_28 = ebx_4[0xd0] * *var_16c
    int32_t eax_72
    int32_t edx_14
    edx_14:eax_72 = sx.q(*(eax_5 + (*(ebx_7 + 0x1c) << 2)))
    int32_t var_170_1 = ecx_28
    
    if (*(esi_10 + 0x504) s> 1)
        void* ebx_8 = esi_10 + 0x108
        
        do
            int32_t edx_15 = *ebx_8
            int32_t eax_76 = var_16c[edx_15]
            int32_t ecx_30 = eax_76 & 0x7fff
            
            if (ecx_30 != eax_76)
                ecx_28 = var_170_1
            else
                int32_t* eax_77 = var_184
                i_6 = eax_77[edx_15 + 0xd1]
                int32_t esi_19 = eax_77[0xd0] * ecx_30
                sub_6b5950(eax_77, i_9, (eax_72 - edx_14) s>> 1, i_6, var_170_1, esi_19, arg6)
                ecx_28 = esi_19
                i_9 = i_6
                esi_10 = var_180
                var_170_1 = ecx_28
            
            i_5 += 1
            ebx_8 += 4
        while (i_5 s< *(esi_10 + 0x504))
        
        ebx_7 = arg2
    
    int32_t eax_79
    int32_t edx_17
    edx_17:eax_79 = sx.q(*(ebx_7 + 0x24))
    
    if (i_6 s< (eax_79 - edx_17) s>> 1)
        int32_t eax_84
        int32_t edx_18
        
        do
            (*arg6)[i_6] = ecx_28
            i_6 += 1
            edx_18:eax_84 = sx.q(*(ebx_7 + 0x24))
        while (i_6 s< (eax_84 - edx_18) s>> 1)
    
    result = 1

@__security_check_cookie@4(eax_1 ^ &var_184)
return result
