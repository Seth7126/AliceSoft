// 函数: sub_5f0d20
// 地址: 0x5f0d20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int16_t x87control = sub_5f0f40(arg1, arg1, arg3)
int128_t* eax = *(arg1 + 0x38)
int32_t eax_1 = *(arg1 + 0x28)
int32_t eax_2 = *(arg1 + 0x2c)
int32_t mxcsr
arg3 = fconvert.s(sub_6b1380(mxcsr, x87control, fconvert.d(fconvert.t(arg3))))
void* k_2 = int.d(fconvert.t(arg3)) * 2 * *(arg1 + 0x34) + 1
int128_t* edi = (*(*(arg1 + 4) + 8))(0)
int32_t eax_6 = (*(*(arg1 + 4) + 0x1c))()
int32_t ecx_2 = *(arg1 + 0x34)
int32_t eax_8 = (*(*(arg1 + 4) + 0x1c))()
int32_t ecx_8 = 1 - (*(*(arg1 + 4) + 0x1c))() * k_2
char* ebp_1 = (*(*arg2 + 8))(0)
int32_t* eax_15 = *(arg1 + 0x34)
int32_t result = int.d(fconvert.t(arg3))
int32_t* edx_6 = eax_15 * result
int32_t esi_2 = (*(*arg2 + 0x1c))() + eax_15 * 2 * result - eax_1
arg2 = edx_6

if (edx_6 s< eax_2 - edx_6)
    void* esi_3 = arg1
    void* i
    
    do
        int32_t j = *(esi_3 + 0x34) * result
        int32_t j_1 = j
        
        if (j s< eax_1 - j)
            do
                void* eax_18
                eax_18.b = *ebp_1
                ebp_1 = &ebp_1[1]
                
                if (eax_18.b != 0)
                    int128_t* ecx_16 = eax
                    
                    if (k_2 s> 0)
                        void* k_1 = k_2
                        void* k
                        
                        do
                            int32_t edx_8 = 0
                            
                            if (k_2 u>= 0x20
                                    && (edi u> k_2 - 1 + ecx_16 || k_2 - 1 + edi u< ecx_16))
                                eax_18 = k_2 & 0x8000001f
                                
                                if (eax_18 s< 0)
                                    eax_18 = ((eax_18 - 1) | 0xffffffe0) + 1
                                
                                do
                                    edx_8 += 0x20
                                    *edi |= *ecx_16
                                    int128_t xmm1_3 = ecx_16[1]
                                    ecx_16 = &ecx_16[2]
                                    edi[1] |= xmm1_3
                                    edi = &edi[2]
                                while (edx_8 s< k_2 - eax_18)
                            
                            if (edx_8 s< k_2)
                                void* esi_9 = k_2 - edx_8
                                void* temp2_1
                                
                                do
                                    eax_18.b = *ecx_16
                                    ecx_16 += 1
                                    *edi |= eax_18.b
                                    edi += 1
                                    temp2_1 = esi_9
                                    esi_9 -= 1
                                while (temp2_1 != 1)
                            
                            edi += eax_8 - k_2
                            k = k_1
                            k_1 -= 1
                        while (k != 1)
                        j = j_1
                        esi_3 = arg1
                    
                    edi += ecx_8
                else
                    edi += 1
                
                j += 1
                j_1 = j
            while (j s< eax_1 - *(esi_3 + 0x34) * int.d(fconvert.t(arg3)))
        
        edi += eax_6 + ecx_2 * 2 * int.d(fconvert.t(arg3)) - eax_1
        i = arg2 + 1
        ebp_1 = &ebp_1[esi_2]
        arg2 = i
        result = int.d(fconvert.t(arg3))
    while (i s< eax_2 - *(esi_3 + 0x34) * int.d(fconvert.t(arg3)))

result.b = 1
return result
