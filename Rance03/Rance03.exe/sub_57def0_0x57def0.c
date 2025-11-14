// 函数: sub_57def0
// 地址: 0x57def0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx
int32_t var_10 = ebx
int32_t* i = ((*(arg1 + 0x50) - *(arg1 + 0x4c)) s>> 2) - 1

if (i s> 0)
    void* j_1 = 1
    int32_t* ecx = nullptr
    void* j_2 = 1
    void* var_8_1 = nullptr
    
    do
        void* ebp_1 = *(ecx + *(arg1 + 0x4c))
        
        if (ebp_1 != 0)
            void* j = j_1
            
            if (j_1 s< (*(arg1 + 0x50) - *(arg1 + 0x4c)) s>> 2)
                do
                    int32_t* ebx_2 = *(*(arg1 + 0x4c) + (j << 2))
                    
                    if (ebx_2 != 0)
                        int32_t var_20_1 = *(arg1 + 0x2c)
                        
                        if (sub_5831f0(ebp_1, ebx_2) != 0)
                            sub_5834b0(ebp_1, ebx_2)
                            (**ebx_2)(1)
                            *(*(arg1 + 0x4c) + (j << 2)) = 0
                    
                    j += 1
                while (j s< (*(arg1 + 0x50) - *(arg1 + 0x4c)) s>> 2)
                
                j_1 = j_2
                ecx = var_8_1
        
        j_1 += 1
        var_8_1 = &ecx[1]
        i = j_1 - 1
        j_2 = j_1
        ecx = var_8_1
    while (i s< ((*(arg1 + 0x50) - *(arg1 + 0x4c)) s>> 2) - 1)

int32_t* i_1 = *(arg1 + 0x4c)

if (i_1 != *(arg1 + 0x50))
    int32_t* ebx_3 = &i_1[1]
    
    do
        if (*i_1 != 0)
            i_1 = &i_1[1]
            ebx_3 = &ebx_3[1]
        else
            i = _memcpy(i_1, ebx_3, (*(arg1 + 0x50) - ebx_3) & 0xfffffffc)
            *(arg1 + 0x50) -= 4
    while (i_1 != *(arg1 + 0x50))

return i
