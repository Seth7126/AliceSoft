// 函数: sub_579bb0
// 地址: 0x579bb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg1
void* edi = *arg1
int32_t esi = arg1[1]

if (edi == esi)
    *arg3 = data_7fd4d8.q
    arg3[1].d = data_7fd4e0
    *(arg3 + 0xc) = 0
    arg3[2].d = 0
    return arg3

int32_t ecx_2 = 0
int32_t esi_4 = (esi - edi) s/ 0x1c

if (esi_4 s> 0)
    while (true)
        int32_t eax_3 = ecx_2 * 7
        int32_t* edx_3 = edi + (eax_3 << 2)
        
        if (_mm_cvtepi32_ps(zx.o(*(edi + (eax_3 << 2)))) f> arg2)
            break
        
        if (ecx_2 + 1 s< esi_4)
            int32_t eax_5
            
            if (edx_3[1] != 0)
                if (ecx_2 + 2 s>= esi_4)
                    int128_t* esi_5 = arg3
                    sub_57a130(arg2, esi_5, edx_3, edi + (ecx_2 + 1) * 0x1c)
                    return esi_5
                
                int32_t eax_8
                
                if (ecx_2 + 3 s< esi_4)
                    eax_8 = (ecx_2 + 3) * 7
                    
                    if (arg2 f< _mm_cvtepi32_ps(zx.o(*(edi + (eax_8 << 2)))))
                        int32_t var_14 = ecx_2
                        sub_57a230(eax_8, arg1, arg3, ecx_2, 4, arg2)
                        return arg3
                    
                    eax_5 = 3
                    goto label_579c77
                
                eax_8 = ecx_2 + 2
                int32_t edx_6 = eax_8 * 7
                
                if (not(arg2 f< _mm_cvtepi32_ps(zx.o(*(edi + (edx_6 << 2))))))
                    *arg3 = *(edi + (edx_6 << 2) + 8)
                    arg3[2].d = *(edi + (edx_6 << 2) + 0x18)
                    return arg3
                
                int32_t var_14_2 = ecx_2
                sub_57a230(eax_8, arg1, arg3, ecx_2, 3, arg2)
                return arg3
            
            if (not(_mm_cvtepi32_ps(zx.o(edx_3[7])) f> arg2))
                eax_5 = 1
            label_579c77:
                ecx_2 += eax_5
                
                if (ecx_2 s>= esi_4)
                    break
                
                continue
        
        *arg3 = *(edx_3 + 8)
        arg3[2].d = edx_3[6]
        return arg3

*arg3 = *(edi + 8)
arg3[2].d = *(edi + 0x18)
return arg3
