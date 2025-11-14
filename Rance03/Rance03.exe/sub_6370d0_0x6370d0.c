// 函数: sub_6370d0
// 地址: 0x6370d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* eax_2 = (*(*arg2 + 8))(0, *(arg1 + 0xc) - 1)
int32_t ebx = *(arg1 + 8)
char* esi = eax_2
char* edx_2 = arg3 + 0x12
int32_t result = neg.d((*(*arg2 + 0x1c))()) - (ebx << 2)
int32_t* i = nullptr
int32_t result_1 = result
arg2 = nullptr

if (*(arg1 + 0xc) s> 0)
    result = arg1
    
    do
        void* ebp_1 = nullptr
        
        if (ebx s> 0)
            do
                i.b = *edx_2
                i.b u>>= 7
                int32_t* i_1 = (zx.d(*edx_2) & 0x7f) + 1
                edx_2 = &edx_2[1]
                
                if (i.b != 0)
                    if (i_1 s> 0)
                        i = i_1
                        int32_t* j
                        
                        do
                            *esi = edx_2[2]
                            esi[1] = edx_2[1]
                            esi[2] = *edx_2
                            esi[3] = edx_2[3]
                            esi = &esi[4]
                            j = i
                            i -= 1
                        while (j != 1)
                    
                    edx_2 = &edx_2[4]
                else if (i_1 s> 0)
                    i = i_1
                    int32_t* j_1
                    
                    do
                        *esi = edx_2[2]
                        esi[1] = edx_2[1]
                        esi[2] = *edx_2
                        char eax_13 = edx_2[3]
                        edx_2 = &edx_2[4]
                        esi[3] = eax_13
                        esi = &esi[4]
                        j_1 = i
                        i -= 1
                    while (j_1 != 1)
                
                result = arg1
                ebp_1 += i_1
                ebx = *(result + 8)
            while (ebp_1 s< ebx)
            
            i = arg2
        
        esi = &esi[result_1]
        i += 1
        arg2 = i
    while (i s< *(result + 0xc))

return result
