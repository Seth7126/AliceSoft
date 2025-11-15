// 函数: sub_45d670
// 地址: 0x45d670
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = (*(*arg2 + 8))(0, *(arg1 + 0xc) - 1)
int32_t eax_4 = (*(*arg2 + 0x1c))()
int32_t edi_1 = *(arg1 + 8)
char* edx_2 = arg3 + 0x12
arg2 = neg.d(eax_4) - (edi_1 << 2)
void* i = nullptr
arg3 = nullptr

if (*(arg1 + 0xc) s> 0)
    int32_t* j_2 = arg2
    
    do
        void* ebx_1 = nullptr
        
        if (edi_1 s> 0)
            do
                j_2.b = *edx_2
                edx_2 = &edx_2[1]
                int32_t* j_3 = (zx.d(j_2.b) & 0x7f) + 1
                
                if (j_2.b u>= 0x80)
                    if (j_3 != 0)
                        j_2 = j_3
                        int32_t* j
                        
                        do
                            *esi = edx_2[2]
                            *(esi + 1) = edx_2[1]
                            *(esi + 2) = *edx_2
                            *(esi + 3) = edx_2[3]
                            esi += 4
                            j = j_2
                            j_2 -= 1
                        while (j != 1)
                    
                    edx_2 = &edx_2[4]
                else if (j_3 != 0)
                    j_2 = j_3
                    int32_t* j_1
                    
                    do
                        *esi = edx_2[2]
                        *(esi + 1) = edx_2[1]
                        *(esi + 2) = *edx_2
                        char eax_14 = edx_2[3]
                        edx_2 = &edx_2[4]
                        *(esi + 3) = eax_14
                        esi += 4
                        j_1 = j_2
                        j_2 -= 1
                    while (j_1 != 1)
                
                ebx_1 += j_3
                edi_1 = *(arg1 + 8)
            while (ebx_1 s< edi_1)
            
            i = arg3
            j_2 = arg2
        
        i += 1
        esi += j_2
        arg3 = i
    while (i s< *(arg1 + 0xc))

return i
