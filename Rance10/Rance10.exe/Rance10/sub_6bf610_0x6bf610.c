// 函数: sub_6bf610
// 地址: 0x6bf610
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t i_10 = 0
int32_t* esi = arg1
int32_t* ebx = arg2
int32_t* var_24 = esi
int32_t* var_18 = ebx
int32_t i_12 = 0
_memset(esi, 0, 0x38)
int32_t ecx = ebx[1]
int32_t i = 0

if (ecx s> 0)
    if (ecx u>= 8)
        int32_t edi = ebx[2]
        int32_t eax_3 = ecx & 0x80000007
        
        if (eax_3 s< 0)
            eax_3 = ((eax_3 - 1) | 0xfffffff8) + 1
        
        int32_t xmm6_1[0x4] = data_79a840.o
        int128_t xmm7_1 = data_79ab30
        int32_t xmm4_1[0x4] = zx.o(0)
        int32_t xmm3_1[0x4] = zx.o(0)
        
        do
            int32_t xmm2_2[0x4] = _mm_cmpgt_epi32(*(edi + (i << 2)), zx.o(0))
            int32_t xmm0_2[0x4] = _mm_add_epi32(xmm6_1, xmm4_1)
            int128_t xmm2_3 = xmm2_2 & not.o(xmm7_1)
            int32_t xmm2_4[0x4] = *(edi + (i << 2) + 0x10)
            i += 8
            xmm4_1 = (xmm4_1 & xmm2_3) | (xmm2_3 & not.o(xmm0_2))
            int128_t xmm2_6 = _mm_cmpgt_epi32(xmm2_4, zx.o(0)) & not.o(xmm7_1)
            xmm3_1 = (xmm3_1 & xmm2_6) | (xmm2_6 & not.o(_mm_add_epi32(xmm6_1, xmm3_1)))
        while (i s< ecx - eax_3)
        
        int32_t xmm3_3[0x4] = _mm_add_epi32(xmm3_1, xmm4_1)
        int32_t xmm3_4[0x4] = _mm_add_epi32(xmm3_3, _mm_bsrli_si128(xmm3_3, 8))
        i_10 = _mm_add_epi32(xmm3_4, _mm_bsrli_si128(xmm3_4, 4))
        i_12 = i_10
    
    if (i s< ecx)
        do
            int32_t eax_7 = *(ebx[2] + (i << 2))
            int32_t i_14 = i_10 + 1
            i += 1
            
            if (eax_7 s<= 0)
                i_14 = i_10
            
            i_10 = i_14
        while (i s< ecx)
        
        esi = var_24
        ebx = var_18
        i_12 = i_10

esi[1] = ecx
esi[2] = i_10
int32_t eax_8 = *ebx
*esi = eax_8

if (i_10 s> 0)
    int32_t* eax_9 = sub_6bf090(eax_8, ebx[1], ebx[2], i_10)
    __alloca_probe_16(i_10 << 2)
    int32_t __saved_edi
    int32_t* ecx_2 = &__saved_edi
    int32_t* var_14_1 = &__saved_edi
    
    if (eax_9 == 0)
        int32_t eax_12 = esi[4]
        
        if (eax_12 != 0)
            _free(eax_12)
        
        int32_t eax_13 = esi[5]
        
        if (eax_13 != 0)
            _free(eax_13)
        
        int32_t eax_14 = esi[6]
        
        if (eax_14 != 0)
            _free(eax_14)
        
        int32_t eax_15 = esi[7]
        
        if (eax_15 != 0)
            _free(eax_15)
        
        int32_t eax_16 = esi[8]
        
        if (eax_16 != 0)
            _free(eax_16)
        
        _memset(esi, 0, 0x38)
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return 0xffffffff
    
    if (i_10 s> 0)
        int32_t** ecx_5 = &__saved_edi - eax_9
        int32_t i_13 = i_10
        int32_t* ebx_2 = eax_9
        int32_t** var_20_1 = ecx_5
        int32_t i_1
        
        do
            int32_t ecx_7 = rol.d(*ebx_2, 0x10)
            int32_t edx_5 = ((ecx_7 u>> 8 ^ ecx_7 << 8) & 0xff00ff) ^ ecx_7 << 8
            int32_t ecx_13 = ((edx_5 u>> 4 ^ edx_5 << 4) & 0xf0f0f0f) ^ edx_5 << 4
            int32_t edx_11 = ((ecx_13 u>> 2 ^ ecx_13 << 2) & 0x33333333) ^ ecx_13 << 2
            *ebx_2 = ((edx_11 u>> 1 ^ (edx_11 * 2)) & 0x55555555) ^ (edx_11 * 2)
            *(ecx_5 + ebx_2) = ebx_2
            ebx_2 = &ebx_2[1]
            i_1 = i_10
            i_10 -= 1
        while (i_1 != 1)
        esi = var_24
        i_10 = i_12
        ebx = var_18
        ecx_2 = var_14_1
    
    _qsort(ecx_2, i_10, 4, sub_6bf5f0)
    __alloca_probe_16(i_10 << 2)
    int32_t* var_10_1 = &__saved_edi
    int32_t var_40_7 = i_10 << 2
    int32_t ecx_19 = 0
    esi[5] = sub_705e22()
    
    if (i_10 s> 0)
        do
            var_10_1[(var_14_1[ecx_19] - eax_9) s>> 2] = ecx_19
            ecx_19 += 1
        while (ecx_19 s< i_10)
        
        ebx = var_18
        
        if (i_10 s> 0)
            int32_t* ebx_4 = var_10_1
            void* eax_33 = eax_9 - var_10_1
            int32_t i_11 = i_10
            void* var_14_2 = eax_33
            int32_t i_2
            
            do
                int32_t edx_13 = *ebx_4
                ebx_4 = &ebx_4[1]
                *(esi[5] + (edx_13 << 2)) = *(eax_33 + ebx_4 - 4)
                eax_33 = var_14_2
                i_2 = i_10
                i_10 -= 1
            while (i_2 != 1)
            i_10 = i_12
            ebx = var_18
    
    esi[4] = sub_6bf300(_free(eax_9), i_10, ebx, var_10_1)
    int32_t var_40_10 = i_10 << 2
    int32_t i_3 = 0
    esi[6] = sub_705e22()
    int32_t edi_1 = 0
    
    if (ebx[1] s> 0)
        do
            if (*(ebx[2] + (i_3 << 2)) s> 0)
                int32_t ecx_22 = var_10_1[edi_1]
                edi_1 += 1
                *(esi[6] + (ecx_22 << 2)) = i_3
            
            i_3 += 1
        while (i_3 s< ebx[1])
    
    int32_t var_40_11 = edi_1
    int32_t i_4 = 0
    esi[7] = sub_705e22()
    int32_t edi_2 = 0
    int32_t i_8 = 0
    int32_t var_1c = 0
    
    if (ebx[1] s> 0)
        do
            int32_t eax_43 = ebx[2]
            
            if (*(eax_43 + (i_4 << 2)) s> 0)
                char* edx_15 = var_10_1[edi_2]
                edi_2 += 1
                char* eax_46
                eax_46.b = *(eax_43 + (i_4 << 2))
                edx_15[esi[7]] = eax_46.b
                i_4 = i_8
            
            i_4 += 1
            i_8 = i_4
        while (i_4 s< ebx[1])
        
        var_1c = edi_2
    
    uint32_t i_5 = esi[2]
    int32_t ecx_24 = 0
    
    for (; i_5 != 0; i_5 u>>= 1)
        ecx_24 += 1
    
    int32_t eax_47 = ecx_24 - 4
    
    if (eax_47 s< 5)
        eax_47 = 5
    
    esi[9] = eax_47
    
    if (eax_47 s> 8)
        esi[9] = 8
    
    int32_t eax_48 = 1 << (esi[9]).b
    int32_t var_40_12 = 4
    int32_t var_44_1 = eax_48
    esi[8] = _calloc()
    char* ebx_5 = nullptr
    esi[0xa] = 0
    
    if (edi_2 s> 0)
        do
            void* ecx_26 = esi[7]
            int32_t eax_50 = sx.d(*(ecx_26 + ebx_5))
            
            if (esi[0xa] s< eax_50)
                esi[0xa] = eax_50
            
            int32_t ecx_27 = sx.d(*(ecx_26 + ebx_5))
            
            if (ecx_27 s<= esi[9])
                int32_t ecx_29 = rol.d(*(esi[5] + (ebx_5 << 2)), 0x10)
                int32_t edx_20 = ((ecx_29 u>> 8 ^ ecx_29 << 8) & 0xff00ff) ^ ecx_29 << 8
                int32_t ecx_35 = ((edx_20 u>> 4 ^ edx_20 << 4) & 0xf0f0f0f) ^ edx_20 << 4
                int32_t edx_26 = ((ecx_35 u>> 2 ^ ecx_35 << 2) & 0x33333333) ^ ecx_35 << 2
                int32_t i_6 = 0
                int32_t i_9 = 0
                
                if (1 << ((esi[9]).b - ecx_27.b) s> 0)
                    do
                        *(esi[8] + ((i_6 << ebx_5[esi[7]]
                            | (((edx_26 u>> 1 ^ (edx_26 * 2)) & 0x55555555) ^ (edx_26 * 2))) << 2)) =
                            &ebx_5[1]
                        i_6 = i_9 + 1
                        i_9 = i_6
                    while (i_6 s< 1 << ((esi[9]).b - ebx_5[esi[7]]))
                    
                    edi_2 = var_1c
            
            ebx_5 = &ebx_5[1]
        while (ebx_5 s< edi_2)
    
    int32_t var_c_5 = 0
    int32_t eax_66 = 0xfffffffe << (0x1f - (esi[9]).b)
    int32_t ebx_6 = 0
    int32_t eax_67 = 0
    int32_t var_18_2 = 0
    int32_t var_10_2 = 0
    
    if (eax_48 s> 0)
        do
            int32_t i_7 = eax_67 << (0x20 - (esi[9]).b)
            int32_t ecx_47 = rol.d(i_7, 0x10)
            int32_t edx_34 = ((ecx_47 u>> 8 ^ ecx_47 << 8) & 0xff00ff) ^ ecx_47 << 8
            int32_t ecx_52 = ((edx_34 u>> 4 ^ edx_34 << 4) & 0xf0f0f0f) ^ edx_34 << 4
            int32_t edx_40 = ((ecx_52 u>> 2 ^ ecx_52 << 2) & 0x33333333) ^ ecx_52 << 2
            
            if (*(esi[8] + ((((edx_40 u>> 1 ^ (edx_40 * 2)) & 0x55555555) ^ (edx_40 * 2)) << 2))
                    == 0)
                int32_t edx_41 = var_c_5
                int32_t ecx_58 = edx_41 + 1
                
                if (ecx_58 s< edi_2)
                    int32_t* eax_81 = esi[5] + (edx_41 << 2) + 4
                    
                    while (*eax_81 u<= i_7)
                        ecx_58 += 1
                        edx_41 += 1
                        eax_81 = &eax_81[1]
                        
                        if (ecx_58 s>= edi_2)
                            break
                    
                    ebx_6 = var_18_2
                    var_c_5 = edx_41
                
                if (ebx_6 s< edi_2)
                    int32_t ecx_59 = esi[5] + (ebx_6 << 2)
                    
                    while (i_7 u>= (eax_66 & *ecx_59))
                        ebx_6 += 1
                        ecx_59 += 4
                        
                        if (ebx_6 s>= edi_2)
                            break
                    
                    edx_41 = var_c_5
                    var_18_2 = ebx_6
                
                int32_t edi_4 = edi_2 - ebx_6
                int32_t ebx_8 = edx_41
                
                if (edx_41 u> 0x7fff)
                    ebx_8 = 0x7fff
                
                if (edi_4 u> 0x7fff)
                    edi_4 = 0x7fff
                
                int32_t edx_47 = ((ecx_47 u>> 8 ^ ecx_47 << 8) & 0xff00ff) ^ ecx_47 << 8
                edi_2 = var_1c
                int32_t ecx_66 = ((edx_47 u>> 4 ^ edx_47 << 4) & 0xf0f0f0f) ^ edx_47 << 4
                int32_t edx_53 = ((ecx_66 u>> 2 ^ ecx_66 << 2) & 0x33333333) ^ ecx_66 << 2
                *(esi[8] + ((((edx_53 u>> 1 ^ (edx_53 * 2)) & 0x55555555) ^ (edx_53 * 2)) << 2)) =
                    (ebx_8 | 0xffff0000) << 0xf | edi_4
                ebx_6 = var_18_2
            
            eax_67 = var_10_2 + 1
            var_10_2 = eax_67
        while (eax_67 s< eax_48)

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return 0
