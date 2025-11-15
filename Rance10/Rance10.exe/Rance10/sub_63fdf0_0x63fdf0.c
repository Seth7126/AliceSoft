// 函数: sub_63fdf0
// 地址: 0x63fdf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_640000(arg1, arg3)
int128_t* eax = *(arg1 + 0x38)
int32_t eax_1 = *(arg1 + 0x28)
int32_t eax_2 = *(arg1 + 0x2c)
int32_t result_1 = int.d(sub_4a78b0(arg3))
void* ebx_1 = result_1 * 2 * *(arg1 + 0x34)
int128_t* edi = (*(*(arg1 + 4) + 8))(0, 0)
int32_t eax_5 = (*(*(arg1 + 4) + 0x1c))()
int32_t ecx_2 = *(arg1 + 0x34)
int32_t eax_7 = (*(*(arg1 + 4) + 0x1c))()
int32_t ecx_8 = 1 - (*(*(arg1 + 4) + 0x1c))() * (ebx_1 + 1)
char* ebp_1 = (*(*arg2 + 8))(0, 0)
int32_t* eax_14 = *(arg1 + 0x34)
int32_t eax_15 = (*(*arg2 + 0x1c))()
int32_t result = result_1
int32_t* edx_5 = eax_14 * result
arg2 = edx_5
int32_t esi_2 = eax_15 + eax_14 * 2 * result - eax_1

if (edx_5 s< eax_2 - edx_5)
    void* esi_3 = arg1
    void* i
    
    do
        int32_t j = *(esi_3 + 0x34) * result
        int32_t j_1 = j
        
        if (j s< eax_1 - j)
            do
                void* eax_17
                eax_17.b = *ebp_1
                ebp_1 = &ebp_1[1]
                
                if (eax_17.b != 0)
                    int128_t* ecx_16 = eax
                    
                    if (ebx_1 + 1 s> 0)
                        void* k_1 = ebx_1 + 1
                        void* k
                        
                        do
                            int32_t edx_7 = 0
                            
                            if (ebx_1 + 1 u>= 0x20
                                    && (edi u> ebx_1 + ecx_16 || ebx_1 + edi u< ecx_16))
                                eax_17 = (ebx_1 + 1) & 0x8000001f
                                
                                if (eax_17 s< 0)
                                    eax_17 = ((eax_17 - 1) | 0xffffffe0) + 1
                                
                                do
                                    edx_7 += 0x20
                                    *edi |= *ecx_16
                                    int128_t xmm0_3 = ecx_16[1]
                                    ecx_16 = &ecx_16[2]
                                    edi[1] |= xmm0_3
                                    edi = &edi[2]
                                while (edx_7 s< ebx_1 + 1 - eax_17)
                            
                            if (edx_7 s< ebx_1 + 1)
                                void* esi_8 = ebx_1 + 1 - edx_7
                                void* temp2_1
                                
                                do
                                    eax_17.b = *ecx_16
                                    ecx_16 += 1
                                    *edi |= eax_17.b
                                    edi += 1
                                    temp2_1 = esi_8
                                    esi_8 -= 1
                                while (temp2_1 != 1)
                            
                            edi += eax_7 - (ebx_1 + 1)
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
            while (j s< eax_1 - *(esi_3 + 0x34) * result_1)
        
        i = arg2 + 1
        edi += eax_5 + ecx_2 * 2 * result_1 - eax_1
        ebp_1 = &ebp_1[esi_2]
        arg2 = i
        result = result_1
    while (i s< eax_2 - *(esi_3 + 0x34) * result_1)

result.b = 1
return result
