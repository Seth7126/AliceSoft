// 函数: sub_53c590
// 地址: 0x53c590
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* eax = *(arg1 + 0x30)
int32_t edi = *(arg1 + 0x34)
float xmm1_1 = arg3 f- *(arg1 + 0x28)
int32_t edx = int.d((arg2 f- *(arg1 + 0x20)) * _mm_cvtepi32_ps(zx.o(eax))
    / (*(arg1 + 0x24) f- *(arg1 + 0x20)))
int32_t ecx = int.d(xmm1_1 * _mm_cvtepi32_ps(zx.o(edi)) / (*(arg1 + 0x2c) f- *(arg1 + 0x28)))

if (edx s>= 0 && edx s< eax && ecx s>= 0 && ecx s< edi)
    float xmm3_4 = -3.40282347e+38f
    int32_t ecx_1 = *(arg1 + 0x14)
    int32_t esi_1 = 0
    int32_t edx_1 = (eax * ecx + edx) * 3
    eax = *(ecx_1 + (edx_1 << 2))
    int32_t ecx_2 = *(ecx_1 + (edx_1 << 2) + 4)
    uint32_t edi_4 = (ecx_2 - eax + 3) u>> 2
    
    if (eax u> ecx_2)
        edi_4 = 0
    
    if (edi_4 != 0)
        do
            void* edx_2 = *eax
            int32_t* ecx_4 = *(edx_2 + 0xc)
            
            if (not(ecx_4[1] f* arg3 + *ecx_4 * arg2 f+ ecx_4[2] f> 0)
                    && not(ecx_4[3] f* arg2 + ecx_4[4] f* arg3 f+ ecx_4[5] f> 0)
                    && not(ecx_4[6] f* arg2 + ecx_4[7] f* arg3 f+ ecx_4[8] f> 0))
                float xmm1_21 = (((*(edx_2 + 0x18) * arg2) ^ 0x80000000)
                    - *(edx_2 + 0x20) * arg3 f- *(edx_2 + 0x24)) f/ *(edx_2 + 0x1c)
                
                if (not(xmm1_21 <= xmm3_4))
                    xmm3_4 = xmm1_21
            
            esi_1 += 1
            eax = &eax[1]
        while (esi_1 != edi_4)
        
        xmm3_4 - -3.40282347e+38f
        eax:1.b = (xmm3_4 == -3.40282347e+38f ? 1 : 0) << 6
            | (is_unordered.d(xmm3_4, -3.40282347e+38f) ? 1 : 0) << 2
            | (xmm3_4 < -3.40282347e+38f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            *arg4 = xmm3_4
            float* eax_3
            eax_3.b = 1
            return eax_3

eax.b = 0
return eax
