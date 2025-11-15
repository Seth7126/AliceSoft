// 函数: sub_6b5570
// 地址: 0x6b5570
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_154
int32_t eax_1 = __security_cookie ^ &var_154
int32_t var_164 = 0x520
int32_t var_168 = 1
uint32_t xmm0_1[0x4] = _mm_shuffle_epi32(zx.o(arg1), 0)
int32_t var_14c = 0
int32_t var_150 = 0
void* result_2 = _calloc()
int32_t edx = *arg1
void* result = result_2
int32_t ecx = arg1[0xd2]
int32_t esi = 0
void* result_1 = result
int32_t eax_2 = 0
*(result + 0x510) = arg1
*(result + 0x508) = ecx

if (edx s>= 2)
    void* ecx_1 = &arg1[2]
    int32_t i_6 = ((edx - 2) u>> 1) + 1
    int32_t ebx = 0
    int32_t eax_3 = i_6 * 2
    int32_t i
    
    do
        int32_t eax_4 = *(ecx_1 - 4)
        ecx_1 += 8
        ebx += arg1[eax_4 + 0x20]
        esi += arg1[*(ecx_1 - 8) + 0x20]
        i = i_6
        i_6 -= 1
    while (i != 1)
    eax_2 = eax_3
    edx = *arg1
    var_150 = esi
    esi = 0
    var_14c = ebx
    result = result_1

if (eax_2 s< edx)
    esi = arg1[arg1[eax_2 + 1] + 0x20]

int32_t i_1 = 0
int32_t i_5 = esi + var_14c + var_150
*(result + 0x504) = i_5 + 2
int32_t var_120[0x4]

if (i_5 + 2 s> 0)
    if (i_5 + 2 u>= 8)
        int32_t xmm1_1[0x4] = data_79a850
        int32_t eax_10 = (i_5 + 2) & 0x80000007
        
        if (eax_10 s< 0)
            eax_10 = ((eax_10 - 1) | 0xfffffff8) + 1
        
        int32_t xmm2_1[0x4] = data_79a8a0
        uint128_t xmm3_1 = 2
        
        do
            *(&var_120 + (i_1 << 2)) = _mm_add_epi32(
                _mm_sll_epi32(
                    _mm_add_epi32(_mm_add_epi32(_mm_shuffle_epi32(zx.o(i_1), 0), xmm1_1), xmm2_1), 
                    xmm3_1), 
                xmm0_1)
            void var_110
            *(&var_110 + (i_1 << 2)) = _mm_add_epi32(
                _mm_sll_epi32(
                    _mm_add_epi32(_mm_add_epi32(_mm_shuffle_epi32(zx.o(i_1 + 4), 0), xmm1_1), 
                        xmm2_1), 
                    xmm3_1), 
                xmm0_1)
            i_1 += 8
        while (i_1 s< i_5 + 2 - eax_10)
    
    for (; i_1 s< i_5 + 2; i_1 += 1)
        var_120[i_1] = &arg1[0xd1 + i_1]

_qsort(&var_120, i_5 + 2, 4, sub_6b51f0)
int32_t i_2 = 0

if (i_5 + 2 s> 0)
    void* edx_5 = result + 0x104
    
    do
        edx_5 += 4
        void* eax_17 = var_120[i_2] - arg1
        i_2 += 1
        *(edx_5 - 4) = (eax_17 - 0x344) s>> 2
    while (i_2 s< i_5 + 2)

int32_t i_3 = 0

if (i_5 + 2 s> 0)
    void* edx_6 = result + 0x104
    
    do
        int32_t eax_20 = *edx_6
        edx_6 += 4
        *(result + (eax_20 << 2) + 0x208) = i_3
        i_3 += 1
    while (i_3 s< i_5 + 2)

int32_t i_4 = 0

if (i_5 + 2 s> 0)
    do
        *(result + (i_4 << 2)) = arg1[*(result + (i_4 << 2) + 0x104) + 0xd1]
        i_4 += 1
    while (i_4 s< i_5 + 2)

switch (arg1[0xd0] - 1)
    case 0
        *(result + 0x50c) = 0x100
    case 1
        *(result + 0x50c) = 0x80
    case 2
        *(result + 0x50c) = 0x56
    case 3
        *(result + 0x50c) = 0x40

if (i_5 s> 0)
    int32_t esi_2 = 2
    void* var_138_1 = result + 0x30c
    int32_t var_14c_1 = 2
    void* var_150_1 = &arg1[0xd3]
    
    do
        int32_t ebx_1 = *(result + 0x508)
        int32_t edx_7 = 0
        int32_t edi_1 = 0
        int32_t var_140_1 = 0
        int32_t ecx_2 = 0
        int32_t var_13c_1 = 1
        
        if (esi_2 s> 0)
            void* edx_9 = &arg1[0xd1]
            
            do
                int32_t eax_27 = *edx_9
                
                if (eax_27 s> edi_1)
                    esi_2 = var_14c_1
                    
                    if (eax_27 s< *var_150_1)
                        var_140_1 = ecx_2
                        edi_1 = eax_27
                
                if (eax_27 s< ebx_1)
                    esi_2 = var_14c_1
                    
                    if (eax_27 s> *var_150_1)
                        var_13c_1 = ecx_2
                        ebx_1 = eax_27
                
                ecx_2 += 1
                edx_9 += 4
            while (ecx_2 s< esi_2)
            
            edx_7 = var_140_1
        
        esi_2 += 1
        var_150_1 += 4
        result = result_1
        *var_138_1 = var_13c_1
        *(var_138_1 + 0xfc) = edx_7
        var_138_1 += 4
        var_14c_1 = esi_2
    while (esi_2 - 2 s< i_5)

@__security_check_cookie@4(eax_1 ^ &var_154)
return result
