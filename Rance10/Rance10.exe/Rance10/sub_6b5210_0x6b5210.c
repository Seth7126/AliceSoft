// 函数: sub_6b5210
// 地址: 0x6b5210
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* result_2
int32_t eax_1 = __security_cookie ^ &result_2
void* eax_3 = *(arg1 + 0x1c)
int32_t ebp = 0
int32_t* edi = arg2
void* esi = 0xffffffff
int32_t var_134 = 0x460
int32_t var_138 = 1
int32_t* var_110 = edi
void** result_4 = _calloc()
result_2 = result_4
uint32_t xmm4[0x4] = _mm_shuffle_epi32(zx.o(result_4), 0)
void* eax_5 = sub_6b2ec0(edi, 5)
*result_4 = eax_5
int32_t i_5 = 0

if (eax_5 s> 0)
    void* ebx = &result_4[1]
    int32_t* result_3
    int32_t i
    
    do
        void* eax_6 = sub_6b2ec0(edi, 4)
        *ebx = eax_6
        
        if (eax_6 s< 0)
            goto label_6b5537
        
        if (esi s< eax_6)
            esi = eax_6
        
        result_3 = result_2
        i = i_5 + 1
        ebx += 4
        i_5 = i
    while (i s< *result_3)
    result_4 = result_3

int32_t var_114_1 = 0
void* var_10c = esi + 1
int32_t* result
int32_t* result_1

if (esi + 1 s<= 0)
label_6b53b5:
    result_2[0xd0] = sub_6b2ec0(edi, 2) + 1
    void* eax_22 = sub_6b2ec0(edi, 4)
    result_1 = result_2
    
    if (eax_22 s< 0)
        goto label_6b5543
    
    int32_t i_1 = 0
    int32_t esi_2 = 0
    int32_t i_6 = 0
    
    if (*result_1 s> 0)
        void* eax_23 = &result_1[1]
        void* var_118_1 = eax_23
        
        do
            ebp += result_1[*eax_23 + 0x20]
            
            if (ebp s> 0x3f)
                goto label_6b5543
            
            if (esi_2 s< ebp)
                void* edi_2 = &result_1[esi_2 + 0xd3]
                
                do
                    void* eax_25 = sub_6b2ec0(var_110, eax_22)
                    *edi_2 = eax_25
                    
                    if (eax_25 s< 0)
                        goto label_6b5537
                    
                    if (eax_25 s>= 1 << eax_22.b)
                        goto label_6b5537
                    
                    esi_2 += 1
                    edi_2 += 4
                while (esi_2 s< ebp)
                
                result_1 = result_2
                i_1 = i_6
            
            i_1 += 1
            eax_23 = var_118_1 + 4
            i_6 = i_1
            var_118_1 = eax_23
        while (i_1 s< *result_1)
    
    result_1[0xd1] = 0
    int32_t i_2 = 0
    result_1[0xd2] = 1 << eax_22.b
    int32_t var_108[0x4]
    
    if (ebp + 2 s> 0)
        if (ebp + 2 u>= 8)
            int32_t xmm1_1[0x4] = data_79a850
            int32_t eax_29 = (ebp + 2) & 0x80000007
            
            if (eax_29 s< 0)
                eax_29 = ((eax_29 - 1) | 0xfffffff8) + 1
            
            int32_t xmm2_1[0x4] = data_79a8a0
            uint128_t xmm3_1 = 2
            
            do
                *(&var_108 + (i_2 << 2)) = _mm_add_epi32(
                    _mm_sll_epi32(
                        _mm_add_epi32(_mm_add_epi32(_mm_shuffle_epi32(zx.o(i_2), 0), xmm1_1), 
                            xmm2_1), 
                        xmm3_1), 
                    xmm4)
                void var_f8
                *(&var_f8 + (i_2 << 2)) = _mm_add_epi32(
                    _mm_sll_epi32(
                        _mm_add_epi32(_mm_add_epi32(_mm_shuffle_epi32(zx.o(i_2 + 4), 0), xmm1_1), 
                            xmm2_1), 
                        xmm3_1), 
                    xmm4)
                i_2 += 8
            while (i_2 s< ebp + 2 - eax_29)
        
        if (i_2 s< ebp + 2)
            void* eax_34 = &result_1[i_2 + 0xd1]
            
            do
                var_108[i_2] = eax_34
                i_2 += 1
                eax_34 += 4
            while (i_2 s< ebp + 2)
    
    _qsort(&var_108, ebp + 2, 4, sub_6b51f0)
    int32_t i_3 = 1
    
    if (ebp + 2 s> 1)
        do
            if (*(&var_10c)[i_3] == *var_108[i_3])
                goto label_6b5543
            
            i_3 += 1
        while (i_3 s< ebp + 2)
    
    result = result_1
else
    void* ebx_1 = &result_4[0x40]
    void* var_11c = &result_4[0x50]
    
    while (true)
        *(ebx_1 - 0x80) = sub_6b2ec0(edi, 3) + 1
        void* eax_11 = sub_6b2ec0(edi, 2)
        *(ebx_1 - 0x40) = eax_11
        
        if (eax_11 s< 0)
            break
        
        if (eax_11 != 0)
            *ebx_1 = sub_6b2ec0(edi, 8)
        
        int32_t eax_13 = *ebx_1
        
        if (eax_13 s< 0)
            break
        
        if (eax_13 s>= *(eax_3 + 0x18))
            break
        
        int32_t i_4 = 0
        
        if (1 << (*(ebx_1 - 0x40)).b s> 0)
            void* esi_1 = var_11c
            
            do
                void* eax_16 = sub_6b2ec0(var_110, 8) - 1
                *esi_1 = eax_16
                
                if (eax_16 s< 0xffffffff)
                    goto label_6b5537
                
                if (eax_16 s>= *(eax_3 + 0x18))
                    goto label_6b5537
                
                i_4 += 1
                esi_1 += 4
            while (i_4 s< 1 << (*(ebx_1 - 0x40)).b)
        
        ebx_1 += 4
        var_11c += 0x20
        int32_t eax_19 = var_114_1 + 1
        edi = var_110
        var_114_1 = eax_19
        
        if (eax_19 s>= var_10c)
            goto label_6b53b5
    
label_6b5537:
    result_1 = result_2
label_6b5543:
    _memset(result_1, 0, 0x460)
    _free(result_1)
    result = nullptr
@__security_check_cookie@4(eax_1 ^ &result_2)
return result
