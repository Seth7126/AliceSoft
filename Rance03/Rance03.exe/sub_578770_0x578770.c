// 函数: sub_578770
// 地址: 0x578770
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = arg1
void* result_1 = result
void* i = *(result + 0x18)
void* i_1 = i

while (i != *(result + 0x1c))
    void* j = *(i + 0x1c)
    
    if (j != *(i + 0x20))
        do
            int32_t* k = *(j + 0xc)
            
            if (k != *(j + 0x10))
                do
                    int32_t esi_1 = 0
                    int32_t ebx_3 = (*(result_1 + 0x28) - *(result_1 + 0x24)) s>> 6
                    
                    if (ebx_3 s<= 0)
                    label_5787c3:
                        esi_1 = 0xffffffff
                    else
                        int32_t* edi_2 = *(result_1 + 0x24) + 0x18
                        
                        while (*edi_2 != *k)
                            esi_1 += 1
                            edi_2 = &edi_2[0x10]
                            
                            if (esi_1 s>= ebx_3)
                                goto label_5787c3
                    
                    k[1] = esi_1
                    k = &k[3]
                while (k != *(j + 0x10))
                
                i = i_1
            
            j += 0x18
        while (j != *(i + 0x20))
        
        result = result_1
    
    i += 0x44
    i_1 = i

return result
