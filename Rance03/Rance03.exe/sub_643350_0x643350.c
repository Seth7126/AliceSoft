// 函数: sub_643350
// 地址: 0x643350
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_78
int32_t eax_1 = __security_cookie ^ &var_78
int128_t* esi = arg2
int128_t* var_64 = esi
void* result = nullptr
int128_t var_24
__builtin_memset(&var_24, 0, 0x20)
int32_t eax_2 = arg1[0xd]
int32_t i_9 = *arg1
int32_t ecx = arg1[0xc]
void* edi = arg1[0xb]
int32_t edx_2 = edi s>> 1
int32_t i_10 = i_9
var_78 = ecx

if (eax_2 == 1)
    if (i_9 s> 0)
        int32_t i_6 = i_9
        int32_t eax_17 = esi - &var_24
        int32_t var_6c_1 = eax_17
        void* esi_2 = &var_24 + (i_9 << 2)
        int32_t i
        
        do
            int32_t ecx_4 = *(esi_2 + eax_17 - 4)
            esi_2 -= 4
            int32_t ecx_5 = ecx_4 - var_78
            void* eax_20
            
            if (ecx_5 s>= edx_2)
                eax_20 = (ecx_5 - edx_2) * 2
            else
                eax_20 = ((edx_2 - ecx_5) << 1) + 0xffffffff
            
            if (eax_20 s< 0)
                eax_20 = nullptr
            else if (eax_20 s>= edi)
                eax_20 = edi - 1
            
            result = result * edi + eax_20
            i = i_6
            i_6 -= 1
            *esi_2 = var_78 + ecx_5
            eax_17 = var_6c_1
        while (i != 1)
        ecx = var_78
        esi = var_64
else if (i_9 s> 0)
    int32_t i_5 = i_9
    int32_t edx_4 = eax_2 s>> 1
    int32_t var_60_1 = edx_4
    void* eax_5 = esi - &var_24
    void* var_68_1 = eax_5
    void* ebx_1 = &var_24 + (i_9 << 2)
    int32_t i_1
    
    do
        int32_t eax_6 = *(eax_5 + ebx_1 - 4)
        ebx_1 -= 4
        int32_t temp0_1 = divs.dp.d(sx.q(eax_6 - ecx + edx_4), eax_2)
        void* eax_13
        
        if (temp0_1 s>= edx_2)
            eax_13 = (temp0_1 - edx_2) * 2
        else
            eax_13 = ((edx_2 - temp0_1) << 1) + 0xffffffff
        
        if (eax_13 s< 0)
            eax_13 = nullptr
        else if (eax_13 s>= edi)
            eax_13 = edi - 1
        
        edx_4 = var_60_1
        *ebx_1 = temp0_1 * eax_2 + var_78
        ecx = var_78
        result = result * edi + eax_13
        i_1 = i_5
        i_5 -= 1
        eax_5 = var_68_1
    while (i_1 != 1)
    i_9 = i_10
    esi = var_64

int32_t* eax_27 = *(arg1[3] + 8)
int32_t* var_6c_2 = eax_27
int32_t __saved_edi
int128_t var_14

if (eax_27[result] s<= 0)
    int32_t var_60_2 = 0xffffffff
    void* result_1 = nullptr
    int128_t xmm4_1 = zx.o(0)
    void* result_2 = nullptr
    int128_t xmm5_1 = zx.o(0)
    int128_t var_44
    __builtin_memset(&var_44, 0, 0x20)
    int32_t i_3 = (edi - 1) * eax_2 + ecx
    int32_t i_7 = i_3
    int32_t ecx_7 = arg1[1]
    
    if (ecx_7 s> 0)
        while (true)
            int128_t var_34
            
            if (*eax_27 s> 0)
                int32_t ecx_8 = 0
                int32_t edi_1 = 0
                int32_t var_68_2 = 0
                
                if (i_9 s> 0 && i_9 u>= 8 && data_75c958 s>= 2)
                    void* edx_9 = &(&__saved_edi)[i_9 + 0x10]
                    bool cond:3_1 = &var_44 u> esi + ((i_9 - 1) << 2)
                    i_9 = i_10
                    
                    if (cond:3_1 || edx_9 u< esi)
                        int32_t eax_30 = i_9 & 0x80000007
                        
                        if (eax_30 s< 0)
                            eax_30 = ((eax_30 - 1) | 0xfffffff8) + 1
                        
                        int32_t ecx_10 = i_9 - eax_30
                        int32_t xmm3_1[0x4] = zx.o(0)
                        int128_t* eax_33 = esi
                        int32_t xmm2_1[0x4] = zx.o(0)
                        i_9 = i_10
                        edi_1 = 0
                        
                        do
                            int32_t xmm0_1[0x4] = *eax_33
                            edi_1 += 8
                            eax_33 = &eax_33[2]
                            int32_t xmm1_2[0x4] =
                                _mm_sub_epi32(*(&var_44 - esi + eax_33 - 0x20), xmm0_1)
                            int32_t xmm0_2[0x4] = eax_33[-1]
                            xmm3_1 = _mm_add_epi32(xmm3_1, _mm_mullo_epi32(xmm1_2, xmm1_2))
                            int32_t xmm1_5[0x4] =
                                _mm_sub_epi32(*(&var_34 - esi + eax_33 - 0x20), xmm0_2)
                            xmm2_1 = _mm_add_epi32(xmm2_1, _mm_mullo_epi32(xmm1_5, xmm1_5))
                        while (edi_1 s< ecx_10)
                        
                        esi = var_64
                        int32_t xmm2_2[0x4] = _mm_add_epi32(xmm2_1, xmm3_1)
                        int32_t xmm2_3[0x4] = _mm_add_epi32(xmm2_2, _mm_bsrli_si128(xmm2_2, 8))
                        ecx_8 = _mm_add_epi32(xmm2_3, _mm_bsrli_si128(xmm2_3, 4))
                        var_68_2 = ecx_8
                
                int32_t edx_15 = 0
                var_78 = 0
                int32_t var_70_2 = 0
                
                if (edi_1 s< i_9)
                    if (i_9 - edi_1 s>= 2)
                        int32_t* ecx_11 = esi + (edi_1 << 2)
                        void* eax_37 = &var_44:4 - esi
                        int32_t i_8 = ((i_9 - edi_1 - 2) u>> 1) + 1
                        void* var_48_1 = eax_37
                        edi_1 += i_8 << 1
                        int32_t i_2
                        
                        do
                            int32_t eax_38 = *(ecx_11 + &var_44 - esi)
                            ecx_11 = &ecx_11[2]
                            int32_t eax_39 = eax_38 - ecx_11[-2]
                            var_78 += eax_39 * eax_39
                            int32_t eax_42 = *(eax_37 + ecx_11 - 8) - ecx_11[-1]
                            var_70_2 += eax_42 * eax_42
                            i_2 = i_8
                            i_8 -= 1
                        while (i_2 != 1)
                        esi = var_64
                        i_9 = i_10
                        edx_15 = var_78
                    
                    int32_t ecx_12 = var_68_2
                    
                    if (edi_1 s< i_9)
                        int32_t eax_45 = *(&var_44 + (edi_1 << 2)) - *(esi + (edi_1 << 2))
                        ecx_12 += eax_45 * eax_45
                    
                    ecx_8 = ecx_12 + var_70_2 + edx_15
                
                if (var_60_2 == 0xffffffff || ecx_8 s< var_60_2)
                    result_1 = result_2
                    result = result_1
                    var_24 = xmm4_1
                    var_60_2 = ecx_8
                    var_14 = xmm5_1
                else
                    result_1 = result_2
                
                i_3 = i_7
            
            int32_t eax_50 = 0
            
            if (var_44.d s>= i_3)
                int128_t* ecx_13 = &var_44
                
                do
                    eax_50 += 1
                    *ecx_13 = 0
                    ecx_13 = &var_44 + (eax_50 << 2)
                while (*(&var_44 + (eax_50 << 2)) s>= i_3)
            
            void* ecx_14 = &var_44 + (eax_50 << 2)
            int32_t eax_51 = *ecx_14
            
            if (eax_51 s>= 0)
                esi = var_64
                *ecx_14 = eax_51 + eax_2
            
            result_1 += 1
            result_2 = result_1
            *ecx_14 = neg.d(*ecx_14)
            eax_27 = &var_6c_2[1]
            var_6c_2 = eax_27
            
            if (result_1 s>= ecx_7)
                break
            
            xmm5_1 = var_34
            xmm4_1 = var_44

if (result s> 0xffffffff)
    int32_t i_4 = 0
    
    if (i_9 s> 0)
        if (i_9 u>= 8 && (esi u> &(&__saved_edi)[i_9 + 0x18] || esi + ((i_9 - 1) << 2) u< &var_24))
            int32_t eax_58 = i_9 & 0x80000007
            
            if (eax_58 s< 0)
                eax_58 = ((eax_58 - 1) | 0xfffffff8) + 1
            
            int128_t* eax_61 = &var_14
            
            do
                i_4 += 8
                eax_61 = &eax_61[2]
                int32_t xmm1_8[0x4] = _mm_sub_epi32(*esi, eax_61[-3])
                int32_t xmm0_8[0x4] = eax_61[-2]
                *esi = xmm1_8
                esi[1] = _mm_sub_epi32(esi[1], xmm0_8)
                esi = &esi[2]
            while (i_4 s< i_9 - eax_58)
        
        for (; i_4 s< i_9; i_4 += 1)
            esi += 4
            *(esi - 4) -= *(&var_24 + (i_4 << 2))

sub_69a5bc(eax_1 ^ &var_78)
return result
