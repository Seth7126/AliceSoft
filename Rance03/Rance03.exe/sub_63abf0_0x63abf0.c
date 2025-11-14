// 函数: sub_63abf0
// 地址: 0x63abf0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_154
int32_t eax_1 = __security_cookie ^ &var_154
int32_t esi = 0
uint32_t xmm0_1[0x4] = _mm_shuffle_epi32(zx.o(arg1), 0)
int32_t ebx = 0
int32_t* edx_1 = arg1
int32_t ecx
int32_t edx
void* result = sub_69cb1c(arg1, edx, ecx, 1, 0x520)
void* result_1 = result
int32_t eax_4 = 0
int32_t var_150 = 0
*(result + 0x508) = edx_1[0xd2]
int32_t ecx_2 = *edx_1
*(result + 0x510) = edx_1

if (ecx_2 s>= 2)
    void* ecx_3 = &edx_1[2]
    int32_t i_4 = ((ecx_2 - 2) u>> 1) + 1
    int32_t eax_5 = i_4 * 2
    int32_t i
    
    do
        int32_t eax_6 = *(ecx_3 - 4)
        ecx_3 += 8
        esi += arg1[eax_6 + 0x20]
        ebx += arg1[*(ecx_3 - 8) + 0x20]
        i = i_4
        i_4 -= 1
    while (i != 1)
    result = result_1
    edx_1 = arg1
    eax_4 = eax_5

if (eax_4 s< ecx_2)
    var_150 = edx_1[edx_1[eax_4 + 1] + 0x20]

int32_t esi_2 = esi + ebx + var_150 + 2
int32_t i_1 = 0
*(result + 0x504) = esi_2
int32_t var_120[0x4]
int32_t* ebx_3

if (esi_2 s<= 0)
    ebx_3 = arg1
else
    if (esi_2 u>= 8)
        int32_t xmm1_1[0x4] = data_7092c0
        int32_t eax_11 = esi_2 & 0x80000007
        
        if (eax_11 s< 0)
            eax_11 = ((eax_11 - 1) | 0xfffffff8) + 1
        
        int32_t xmm2_1[0x4] = data_709300
        void var_110
        void* edx_5 = &var_110
        int32_t xmm3_1[0x4] = 2
        
        do
            int32_t eax_14 = i_1 + 4
            edx_5 += 0x20
            int32_t xmm0_4[0x4] = _mm_add_epi32(_mm_shuffle_epi32(zx.o(i_1), 0), xmm1_1)
            i_1 += 8
            *(edx_5 - 0x30) =
                _mm_add_epi32(_mm_sll_epi32(_mm_add_epi32(xmm0_4, xmm2_1), xmm3_1), xmm0_1)
            *(edx_5 - 0x20) = _mm_add_epi32(
                _mm_sll_epi32(
                    _mm_add_epi32(_mm_add_epi32(_mm_shuffle_epi32(zx.o(eax_14), 0), xmm1_1), 
                        xmm2_1), 
                    xmm3_1), 
                xmm0_1)
        while (i_1 s< esi_2 - eax_11)
    
    ebx_3 = arg1
    
    if (i_1 s< esi_2)
        void* eax_16 = &ebx_3[0xd1 + i_1]
        
        do
            var_120[i_1] = eax_16
            i_1 += 1
            eax_16 += 4
        while (i_1 s< esi_2)

sub_69cb60(&var_120, esi_2, 4, sub_63a860)
int32_t ecx_6 = 0

if (esi_2 s> 0)
    void* edx_6 = result + 0x104
    
    do
        edx_6 += 4
        void* eax_18 = var_120[ecx_6] - ebx_3
        ecx_6 += 1
        *(edx_6 - 4) = (eax_18 - 0x344) s>> 2
    while (ecx_6 s< esi_2)

int32_t ecx_7 = 0

if (esi_2 s> 0)
    void* edx_7 = result + 0x104
    
    do
        int32_t eax_21 = *edx_7
        edx_7 += 4
        *(result + (eax_21 << 2) + 0x208) = ecx_7
        ecx_7 += 1
    while (ecx_7 s< esi_2)

int32_t ecx_8 = 0

if (esi_2 s> 0)
    do
        *(result + (ecx_8 << 2)) = ebx_3[*(result + (ecx_8 << 2) + 0x104) + 0xd1]
        ecx_8 += 1
    while (ecx_8 s< esi_2)

switch (ebx_3[0xd0] - 1)
    case 0
        *(result + 0x50c) = 0x100
    case 1
        *(result + 0x50c) = 0x80
    case 2
        *(result + 0x50c) = 0x56
    case 3
        *(result + 0x50c) = 0x40

int32_t i_3 = esi_2 - 2

if (esi_2 - 2 s> 0)
    int32_t edx_8 = 2
    void* var_134_1 = result + 0x30c
    int32_t var_150_1 = 2
    void* var_14c_1 = &ebx_3[0xd3]
    int32_t i_2
    
    do
        int32_t ebx_4 = *(result + 0x508)
        int32_t esi_4 = 0
        int32_t ecx_9 = 0
        int32_t var_140_1 = 0
        int32_t var_138_1 = 1
        
        if (edx_8 s> 0)
            int32_t edi_1 = var_150_1
            void* edx_10 = &arg1[0xd1]
            
            do
                int32_t eax_28 = *edx_10
                
                if (eax_28 s> esi_4)
                    edi_1 = var_150_1
                    
                    if (eax_28 s< *var_14c_1)
                        var_140_1 = ecx_9
                        esi_4 = eax_28
                
                if (eax_28 s< ebx_4)
                    edi_1 = var_150_1
                    
                    if (eax_28 s> *var_14c_1)
                        var_138_1 = ecx_9
                        ebx_4 = eax_28
                
                ecx_9 += 1
                edx_10 += 4
            while (ecx_9 s< edi_1)
            
            result = result_1
            edx_8 = var_150_1
        
        edx_8 += 1
        var_14c_1 += 4
        var_150_1 = edx_8
        *(var_134_1 + 0xfc) = var_140_1
        *var_134_1 = var_138_1
        i_2 = i_3
        i_3 -= 1
        var_134_1 += 4
    while (i_2 != 1)

sub_69a5bc(eax_1 ^ &var_154)
return result
