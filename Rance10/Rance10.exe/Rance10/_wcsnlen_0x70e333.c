// 函数: _wcsnlen
// 地址: 0x70e333
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx
int32_t eax = data_7fc25c
int32_t edi
int32_t var_10 = edi
void* edx_8
int16_t* edx
int32_t result

if (eax s>= 5)
    if ((arg2.b & 1) == 0)
        void* esi_2 = arg2 & 0x1f
        int32_t esi_3 = neg.d(esi_2)
        uint32_t esi_6 = (sbb.d(esi_3, esi_3, esi_2 != 0) & (0x20 - esi_2)) u>> 1
        
        if (arg3 u< esi_6)
            esi_6 = arg3
        
        void* edx_1 = &arg2[esi_6]
        int16_t* edx_2 = arg2
        
        if (arg2 != edx_1)
            while (*edx_2 != 0)
                edx_2 = &edx_2[1]
                
                if (edx_2 == edx_1)
                    break
        
        result = (edx_2 - arg2) s>> 1
        
        if (result == esi_6)
            void* i = &arg2[result]
            uint32_t ecx_3 = arg3 - esi_6
            arg1 = _mm256_xor_ps(arg1.32, arg1.32)
            
            for (void* ecx_5 = i + ((ecx_3 - (ecx_3 & 0x1f)) << 1); i != ecx_5; i += 0x20)
                arg1 = __vpcmpeqw_ymmqq_ymmqq_memqq(arg1.32, *i)
                
                if (_mm256_movemask_epi8(arg1.32) != 0)
                    break
            
            for (; i != &arg2[arg3]; i += 2)
                if (*i == 0)
                    break
            
            result = (i - arg2) s>> 1
            _mm256_zeroupper()
        
        return result
    
    edx = arg2
    void* eax_2 = &arg2[arg3]
    
    if (arg2 != eax_2)
        while (*edx != 0)
            edx = &edx[1]
            
            if (edx == eax_2)
                break
    
    edx_8 = edx - arg2
else if (eax s< 1)
    edx = arg2
    void* eax_18 = &arg2[arg3]
    
    if (arg2 != eax_18)
        while (*edx != 0)
            edx = &edx[1]
            
            if (edx == eax_18)
                break
    
    edx_8 = edx - arg2
else if ((arg2.b & 1) == 0)
    void* esi_8 = arg2 & 0xf
    int32_t esi_9 = neg.d(esi_8)
    uint32_t esi_12 = (sbb.d(esi_9, esi_9, esi_8 != 0) & (0x10 - esi_8)) u>> 1
    
    if (arg3 u< esi_12)
        esi_12 = arg3
    
    void* edx_5 = &arg2[esi_12]
    int16_t* edx_6 = arg2
    
    if (arg2 != edx_5)
        while (*edx_6 != 0)
            edx_6 = &edx_6[1]
            
            if (edx_6 == edx_5)
                break
    
    result = (edx_6 - arg2) s>> 1
    
    if (result != esi_12)
        return result
    
    void* i_1 = &arg2[result]
    uint32_t ecx_9 = arg3 - esi_12
    
    for (void* ecx_11 = i_1 + ((ecx_9 - (ecx_9 & 0xf)) << 1); i_1 != ecx_11; i_1 += 0x10)
        if (_mm_movemask_epi8(_mm_cmpeq_epi16(*i_1, zx.o(0))) != 0)
            break
    
    for (; i_1 != &arg2[arg3]; i_1 += 2)
        if (*i_1 == 0)
            break
    
    edx_8 = i_1 - arg2
else
    edx = arg2
    void* eax_10 = &arg2[arg3]
    
    if (arg2 != eax_10)
        while (*edx != 0)
            edx = &edx[1]
            
            if (edx == eax_10)
                break
    
    edx_8 = edx - arg2
return edx_8 s>> 1
