// 函数: _strnlen
// 地址: 0x70e20c
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = data_7fc25c
int32_t edi
int32_t var_c = edi
void* result

if (eax s< 5)
    if (eax s< 1)
        char* ecx_2 = arg2
        void* eax_16 = arg3 + arg2
        
        if (arg2 != eax_16)
            while (*ecx_2 != 0)
                ecx_2 = &ecx_2[1]
                
                if (ecx_2 == eax_16)
                    break
        
        return ecx_2 - arg2
    
    void* edx_6 = arg2 & 0xf
    int32_t edx_7 = neg.d(edx_6)
    void* edx_9 = sbb.d(edx_7, edx_7, edx_6 != 0) & (0x10 - edx_6)
    
    if (arg3 u< edx_9)
        edx_9 = arg3
    
    void* edi_6 = edx_9 + arg2
    char* ecx_1 = arg2
    
    if (arg2 != edi_6)
        while (*ecx_1 != 0)
            ecx_1 = &ecx_1[1]
            
            if (ecx_1 == edi_6)
                break
    
    result = ecx_1 - arg2
    
    if (result == edx_9)
        void* i = result + arg2
        void* edi_8 = arg3 - edx_9
        
        for (void* edi_10 = edi_8 - (edi_8 & 0xf) + i; i != edi_10; i += 0x10)
            if (_mm_movemask_epi8(_mm_cmpeq_epi8(*i, zx.o(0))) != 0)
                break
        
        for (; i != arg3 + arg2; i += 1)
            if (*i == 0)
                break
        
        return i - arg2
else
    void* edx_1 = arg2 & 0x1f
    int32_t edx_2 = neg.d(edx_1)
    void* edx_4 = sbb.d(edx_2, edx_2, edx_1 != 0) & (0x20 - edx_1)
    
    if (arg3 u< edx_4)
        edx_4 = arg3
    
    int32_t edi_1 = edx_4 + arg2
    char* ecx = arg2
    
    if (arg2 != edi_1)
        while (*ecx != 0)
            ecx = &ecx[1]
            
            if (ecx == edi_1)
                break
    
    result = ecx - arg2
    
    if (result == edx_4)
        void* i_1 = result + arg2
        void* edi_3 = arg3 - edx_4
        arg1 = _mm256_xor_ps(arg1.32, arg1.32)
        
        for (void* edi_5 = edi_3 - (edi_3 & 0x1f) + i_1; i_1 != edi_5; i_1 += 0x20)
            arg1 = __vpcmpeqb_ymmqq_ymmqq_memqq(arg1.32, *i_1)
            
            if (_mm256_movemask_epi8(arg1.32) != 0)
                break
        
        for (; i_1 != arg3 + arg2; i_1 += 1)
            if (*i_1 == 0)
                break
        
        result = i_1 - arg2
        _mm256_zeroupper()

return result
