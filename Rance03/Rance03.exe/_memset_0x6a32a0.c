// 函数: _memset
// 地址: 0x6a32a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* ecx = arg1

if (arg3 == 0)
    return arg1

uint32_t eax = zx.d(arg2)
int32_t __saved_ebx
int32_t __saved_ebx_1

if (not(test_bit(data_75c95c, 1)))
    int32_t i_9 = arg3
    
    if (i_9 s>= 0x80 && test_bit(data_74a410, 1))
        uint32_t xmm0[0x4]
        
        if (eax != 0)
            uint128_t xmm0_1 = zx.o(eax)
            int32_t xmm0_2[0x4] = _mm_unpacklo_epi8(xmm0_1, xmm0_1)
            xmm0 = _mm_shuffle_epi32(_mm_unpacklo_epi16(xmm0_2, xmm0_2), 0)
        else
            xmm0 = zx.o(0)
        
        char* var_8 = ecx
        void* ebx_1 = ecx & 0xf
        
        if (ebx_1 != 0)
            int32_t i_11 = (neg.d(ebx_1) + 0x10) & 3
            
            if (i_11 != 0)
                int32_t i
                
                do
                    *ecx = eax.b
                    ecx = &ecx[1]
                    i = i_11
                    i_11 -= 1
                while (i != 1)
            
            uint32_t i_15 = (neg.d(ebx_1) + 0x10) u>> 2
            
            if (i_15 != 0)
                uint32_t i_1
                
                do
                    *ecx = xmm0
                    ecx = &ecx[4]
                    i_1 = i_15
                    i_15 -= 1
                while (i_1 != 1)
            
            i_9 -= neg.d(ebx_1) + 0x10
        
        int32_t edx = i_9 & 0x7f
        uint32_t i_12 = i_9 u>> 7
        
        if (i_12 != 0)
            uint32_t i_2
            
            do
                *ecx = xmm0
                *(ecx + 0x10) = xmm0
                *(ecx + 0x20) = xmm0
                *(ecx + 0x30) = xmm0
                *(ecx + 0x40) = xmm0
                *(ecx + 0x50) = xmm0
                *(ecx + 0x60) = xmm0
                *(ecx + 0x70) = xmm0
                ecx = &ecx[0x80]
                i_2 = i_12
                i_12 -= 1
            while (i_2 != 1)
        
        if (edx != 0)
            uint32_t i_13 = edx u>> 4
            
            if (i_13 != 0)
                uint32_t i_3
                
                do
                    *ecx = xmm0
                    ecx = &ecx[0x10]
                    i_3 = i_13
                    i_13 -= 1
                while (i_3 != 1)
            
            int32_t edx_1 = edx & 0xf
            
            if (edx_1 != 0)
                uint32_t i_10 = edx_1 u>> 2
                
                if (i_10 != 0)
                    uint32_t i_4
                    
                    do
                        *ecx = xmm0
                        ecx = &ecx[4]
                        i_4 = i_10
                        i_10 -= 1
                    while (i_4 != 1)
                
                int32_t i_14 = edx_1 & 3
                
                if (i_14 != 0)
                    int32_t i_5
                    
                    do
                        *ecx = eax.b
                        ecx = &ecx[1]
                        i_5 = i_14
                        i_14 -= 1
                    while (i_5 != 1)
        
        return var_8
    
    __saved_ebx = __saved_ebx_1
    char* edi_2 = ecx
    
    if (i_9 u< 4)
    label_6a3323:
        int32_t i_6
        
        do
            *edi_2 = eax.b
            edi_2 = &edi_2[1]
            i_6 = i_9
            i_9 -= 1
        while (i_6 != 1)
    else
        int32_t i_8 = neg.d(ecx) & 3
        
        if (i_8 != 0)
            i_9 -= i_8
            int32_t i_7
            
            do
                *edi_2 = eax.b
                edi_2 = &edi_2[1]
                i_7 = i_8
                i_8 -= 1
            while (i_7 != 1)
        
        eax *= 0x1010101
        int32_t i_16 = i_9
        i_9 &= 3
        uint32_t ecx_6 = i_16 u>> 2
        
        if (ecx_6 == 0)
            goto label_6a3323
        
        int32_t ecx_7
        edi_2, ecx_7 = __memfill_u32(edi_2, eax, ecx_6)
        
        if (i_9 != 0)
            goto label_6a3323
else
    __saved_ebx = __saved_ebx_1
    int32_t ecx_2
    int32_t edi_1
    edi_1, ecx_2 = __memfill_u8(arg1, eax.b, arg3)
return arg1
