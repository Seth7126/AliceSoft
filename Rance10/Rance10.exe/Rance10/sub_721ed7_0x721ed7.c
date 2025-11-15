// 函数: sub_721ed7
// 地址: 0x721ed7
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
void* const __return_addr_1 = __return_addr
int16_t (* result)[0x8] = arg1

if (data_7fc25c s< 1)
    while (true)
        int16_t eax_5 = *result
        
        if (eax_5 == 0)
            break
        
        if (eax_5 == arg2)
            break
        
        result = &(*result)[1]
else
    uint32_t xmm2_1[0x4] = _mm_shuffle_epi32(_mm_shufflelo_epi16(zx.o(arg2), 0), 0)
    uint32_t eax_4
    
    while (true)
        int32_t var_34_1
        
        if ((result & 0xfff) u> 0xff0)
            int16_t eax_9 = *result
            
            if (eax_9 == arg2)
                return result
            
            if (eax_9 == 0)
                return nullptr
            
            var_34_1 = 2
        else
            int16_t xmm0_3[0x8] = *result
            eax_4 = _mm_movemask_epi8(_mm_cmpeq_epi16(zx.o(0), xmm0_3)
                | _mm_cmpeq_epi16(xmm0_3, xmm2_1))
            
            if (eax_4 != 0)
                break
            
            var_34_1 = 0x10
        
        result += var_34_1
    
    int32_t eflags_1
    int32_t eax_11
    eax_11, eflags_1 = _bit_scan_forward(eax_4)
    int32_t var_14_1 = eax_11
    result += eax_11

int32_t eax_6
eax_6.b = *result != arg2
return (eax_6 - 1) & result
