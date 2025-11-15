// 函数: sub_479090
// 地址: 0x479090
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* eax_1 = (*(*arg1 + 8))(arg2, arg3)
int32_t eax_4 = (*(*arg1 + 0x1c))() - (arg4 << 2)
void* result = ((arg9 << 8 | arg8) << 8 | arg7) << 8 | arg6
int32_t* edi = eax_1
int32_t i_1 = arg5
uint32_t xmm7_1[0x4] = _mm_shuffle_epi32(zx.o(result), 0)
int32_t i

do
    int32_t j_1 = arg4
    int32_t j
    
    do
        if (j_1 u>= 4)
            result = edi & 0xf
            
            if (result == 0)
                while (true)
                    *edi = xmm7_1
                    edi = &edi[4]
                    int32_t j_2 = j_1
                    j_1 -= 4
                    
                    if (j_2 == 4)
                        break
                    
                    if (j_1 u< 4)
                        goto label_4790f5
                
                break
        
    label_4790f5:
        *edi = xmm7_1
        edi = &edi[1]
        j = j_1
        j_1 -= 1
    while (j != 1)
    edi += eax_4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
