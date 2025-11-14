// 函数: sub_63c260
// 地址: 0x63c260
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_184
int32_t eax_1 = __security_cookie ^ &var_184
int32_t* ebp = arg3
void* ecx = arg4
int32_t* esi = arg5
int32_t* edx = *(ecx + 0x510)
int32_t ebx = *(ecx + 0x504)
int32_t* var_15c = ebp
void* eax_5 = *(*(*(arg2 + 0x40) + 4) + 0x1c)
void* var_17c = ecx
int32_t* var_178 = esi
int32_t eax_6 = *(eax_5 + 0xb20)
var_184 = edx
int32_t result

if (esi == 0)
    sub_637ef0(ebp, 0, 1)
    int32_t eax_91
    int32_t edx_19
    edx_19:eax_91 = sx.q(*(arg2 + 0x24))
    _memset(arg6, 0, (eax_91 - edx_19) s>> 1 << 2)
    result = 0
else
    int32_t edi_1 = 0
    
    if (ebx s> 0)
        do
            int32_t ecx_1 = esi[edi_1]
            int32_t esi_2 = ecx_1 & 0x7fff
            
            switch (edx[0xd0] - 1)
                case 0
                    esi_2 s>>= 2
                case 1
                    esi_2 s>>= 3
                case 2
                    esi_2 s/= 0xc
                    edx = var_184
                case 3
                    esi_2 s>>= 4
            
            esi[edi_1] = (ecx_1 & 0x8000) | esi_2
            edi_1 += 1
        while (edi_1 s< ebx)
        
        ecx = var_17c
        ebp = var_15c
        esi = var_178
    
    int32_t esi_5 = *esi
    int32_t var_108 = esi_5
    int32_t edi_3 = var_178[1]
    
    if (ebx s> 2)
        int32_t* esi_6 = var_178
        void* var_180_1 = &edx[0xd3]
        void* ecx_4 = ecx + 0x30c
        void* var_16c_1 = ecx_4
        int32_t* eax_11 = &var_108 - esi_6
        void* ebp_2 = &esi_6[2]
        int32_t i_7 = ebx - 2
        int32_t i
        
        do
            int32_t eax_12 = *(ecx_4 + 0xfc)
            int32_t ecx_5 = *ecx_4
            int32_t ebx_2 = edx[eax_12 + 0xd1]
            void* eax_13 = &esi_6[eax_12]
            void* edx_3 = &esi_6[ecx_5]
            int32_t eax_15 = *eax_13 & 0x7fff
            int32_t edi_7 = (esi_6[ecx_5] & 0x7fff) - eax_15
            int32_t eax_17
            int32_t edx_4
            edx_4:eax_17 = sx.q(edi_7)
            int32_t temp0_1 = divs.dp.d(sx.q(((eax_17 ^ edx_4) - edx_4) * (*var_180_1 - ebx_2)), 
                var_184[ecx_5 + 0xd1] - ebx_2)
            int32_t edx_8
            
            if (edi_7 s>= 0)
                edx_8 = temp0_1 + eax_15
            else
                edx_8 = eax_15 - temp0_1
            
            int32_t ecx_8 = *ebp_2
            
            if ((ecx_8 & 0x8000) != 0 || edx_8 == ecx_8)
                *ebp_2 = edx_8 | 0x8000
                *(eax_11 + ebp_2) = 0
            else
                int32_t esi_11 = edx_8
                int32_t eax_27 = *(var_17c + 0x50c) - edx_8
                
                if (eax_27 s< edx_8)
                    esi_11 = eax_27
                
                int32_t ecx_9 = ecx_8 - edx_8
                int32_t ecx_10
                
                if (ecx_8 - edx_8 s>= 0)
                    if (ecx_9 s< esi_11)
                        ecx_10 = ecx_9 * 2
                    else
                        ecx_10 = ecx_9 + esi_11
                else if (ecx_9 s>= neg.d(esi_11))
                    ecx_10 = 0xffffffff - ecx_9 * 2
                else
                    ecx_10 = esi_11 - ecx_9 - 1
                
                *(eax_11 + ebp_2) = ecx_10
                *eax_13 = eax_15
                *edx_3 &= 0x7fff
            
            ebp_2 += 4
            var_180_1 += 4
            ecx_4 = var_16c_1 + 4
            i = i_7
            i_7 -= 1
            edx = var_184
            esi_6 = var_178
            var_16c_1 = ecx_4
        while (i != 1)
        esi_5 = var_108
        ebp = var_15c
    
    sub_637ef0(ebp, 1, 1)
    void* ebx_3 = var_17c
    int32_t edx_10 = 0
    int32_t ecx_12 = *(ebx_3 + 0x50c)
    *(ebx_3 + 0x51c) += 1
    uint32_t i_2 = ecx_12 - 1
    uint32_t i_1 = i_2
    
    if (ecx_12 != 1)
        do
            edx_10 += 1
            i_1 u>>= 1
        while (i_1 != 0)
    
    *(ebx_3 + 0x518) += edx_10 * 2
    int32_t eax_36 = 0
    
    for (; i_2 != 0; i_2 u>>= 1)
        eax_36 += 1
    
    sub_637ef0(ebp, esi_5, eax_36)
    int32_t eax_37 = *(ebx_3 + 0x50c)
    int32_t ecx_13 = 0
    uint32_t i_3 = eax_37 - 1
    
    if (eax_37 != 1)
        do
            ecx_13 += 1
            i_3 u>>= 1
        while (i_3 != 0)
    
    sub_637ef0(ebp, edi_3, ecx_13)
    int32_t* esi_13 = var_184
    int32_t i_8 = 0
    int32_t var_180_2 = 2
    
    if (*esi_13 s> 0)
        void* ecx_14 = &esi_13[1]
        void* var_16c_2 = ecx_14
        int32_t i_4
        
        do
            int32_t eax_38 = *ecx_14
            int32_t ebp_3 = 0
            int32_t ebx_4 = 0
            int128_t var_148
            __builtin_memset(&var_148, 0, 0x20)
            int32_t edi_9 = esi_13[eax_38 + 0x20]
            int32_t eax_39 = esi_13[eax_38 + 0x30]
            int32_t edx_11 = 1 << eax_39.b
            int32_t var_174_2 = edi_9
            
            if (eax_39 == 0)
                ebx_3 = var_17c
            else
                int32_t ecx_16 = 0
                int32_t var_128[0x8]
                
                if (edx_11 s> 0)
                    void* esi_17 = &var_184[(eax_38 + 0xa) * 8]
                    
                    do
                        int32_t eax_40 = *esi_17
                        
                        if (eax_40 s>= 0)
                            var_128[ecx_16] = *(*(eax_5 + (eax_40 << 2) + 0x720) + 4)
                        else
                            var_128[ecx_16] = 1
                        
                        ecx_16 += 1
                        esi_17 += 4
                    while (ecx_16 s< edx_11)
                    
                    edi_9 = var_174_2
                
                int32_t esi_18 = 0
                int32_t* eax_47
                int32_t ecx_19
                
                if (edi_9 s<= 0)
                    eax_47 = var_184
                    ecx_19 = eax_38
                else
                    void* edi_11 = &(&var_108)[var_180_2]
                    
                    do
                        int32_t eax_44 = 0
                        
                        if (edx_11 s> 0)
                            do
                                if (*edi_11 s< var_128[eax_44])
                                    *(&var_148 + (esi_18 << 2)) = eax_44
                                    break
                                
                                eax_44 += 1
                            while (eax_44 s< edx_11)
                        
                        int32_t eax_46 = *(&var_148 + (esi_18 << 2)) << ebx_4.b
                        esi_18 += 1
                        ecx_19 = eax_38
                        ebp_3 |= eax_46
                        eax_47 = var_184
                        edi_11 += 4
                        ebx_4 += eax_47[ecx_19 + 0x30]
                    while (esi_18 s< var_174_2)
                
                void* esi_19 = eax_6 + eax_47[ecx_19 + 0x40] * 0x38
                void* eax_50
                
                if (ebp_3 s>= 0)
                    eax_50 = *(esi_19 + 0xc)
                
                if (ebp_3 s< 0 || ebp_3 s>= *(eax_50 + 4))
                    ebx_3 = var_17c
                    esi_13 = var_184
                    *(ebx_3 + 0x514) = *(ebx_3 + 0x514)
                else
                    sub_637ef0(var_15c, *(*(esi_19 + 0x14) + (ebp_3 << 2)), 
                        *(*(eax_50 + 8) + (ebp_3 << 2)))
                    ebx_3 = var_17c
                    esi_13 = var_184
                    *(ebx_3 + 0x514) += *(*(*(esi_19 + 0xc) + 8) + (ebp_3 << 2))
            
            int32_t edx_12 = var_174_2
            int32_t edi_12 = 0
            
            if (edx_12 s> 0)
                void* ecx_22 = (eax_38 << 3) + 0x50
                void* var_164_2 = ecx_22
                void* ebp_4 = &(&var_108)[var_180_2]
                
                do
                    int32_t ecx_23 = esi_13[*(&var_148 + (edi_12 << 2)) + ecx_22]
                    
                    if (ecx_23 s>= 0)
                        int32_t esi_20 = *ebp_4
                        int32_t eax_61 = ecx_23 * 7
                        void* ebx_5 = eax_6 + (eax_61 << 3)
                        
                        if (esi_20 s>= *(eax_6 + (eax_61 << 3) + 4))
                            ebx_3 = var_17c
                        else
                            void* eax_62
                            
                            if (esi_20 s>= 0)
                                eax_62 = *(ebx_5 + 0xc)
                            
                            if (esi_20 s< 0 || esi_20 s>= *(eax_62 + 4))
                                ebx_3 = var_17c
                                *(ebx_3 + 0x518) = *(ebx_3 + 0x518)
                            else
                                sub_637ef0(var_15c, *(*(ebx_5 + 0x14) + (esi_20 << 2)), 
                                    *(*(eax_62 + 8) + (esi_20 << 2)))
                                ebx_3 = var_17c
                                edx_12 = var_174_2
                                *(ebx_3 + 0x518) += *(*(*(ebx_5 + 0xc) + 8) + (esi_20 << 2))
                        
                        esi_13 = var_184
                    
                    ecx_22 = var_164_2
                    edi_12 += 1
                    ebp_4 += 4
                while (edi_12 s< edx_12)
            
            i_4 = i_8 + 1
            var_180_2 += edx_12
            ecx_14 = var_16c_2 + 4
            i_8 = i_4
            var_16c_2 = ecx_14
        while (i_4 s< *esi_13)
    
    int32_t i_6 = 0
    int32_t i_5 = 1
    int32_t i_9 = 0
    int32_t ecx_27 = esi_13[0xd0] * *var_178
    int32_t var_180_3 = ecx_27
    int32_t eax_73
    int32_t edx_14
    edx_14:eax_73 = sx.q(*(eax_5 + (*(arg2 + 0x1c) << 2)))
    
    if (*(ebx_3 + 0x504) s> 1)
        void* ebx_6 = ebx_3 + 0x108
        i_6 = 0
        
        do
            int32_t edx_15 = *ebx_6
            int32_t eax_77 = var_178[edx_15]
            int32_t ecx_29 = eax_77 & 0x7fff
            
            if (ecx_29 != eax_77)
                ecx_27 = var_180_3
            else
                int32_t* eax_78 = var_184
                int32_t esi_22 = esi_13[0xd0] * ecx_29
                i_6 = eax_78[edx_15 + 0xd1]
                sub_63b020(eax_78, i_9, (eax_73 - edx_14) s>> 1, i_6, var_180_3, esi_22, arg6)
                ecx_27 = esi_22
                i_9 = i_6
                esi_13 = var_184
                var_180_3 = ecx_27
            
            i_5 += 1
            ebx_6 += 4
        while (i_5 s< *(var_17c + 0x504))
    
    int32_t eax_81
    int32_t edx_17
    edx_17:eax_81 = sx.q(*(arg2 + 0x24))
    
    if (i_6 s< (eax_81 - edx_17) s>> 1)
        int32_t eax_86
        int32_t edx_18
        
        do
            *(arg6 + (i_6 << 2)) = ecx_27
            i_6 += 1
            edx_18:eax_86 = sx.q(*(arg2 + 0x24))
        while (i_6 s< (eax_86 - edx_18) s>> 1)
    
    result = 1

sub_69a5bc(eax_1 ^ &var_184)
return result
