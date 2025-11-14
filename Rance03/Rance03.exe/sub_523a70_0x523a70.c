// 函数: sub_523a70
// 地址: 0x523a70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx_2 = (arg2 - arg3) s>> 2
int32_t var_10 = ebx_2
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(ebx_2)
int32_t result = eax_1 - edx
int32_t i = result s>> 1

if (i s> 0)
    void* edx_1 = (i << 1) + 2
    
    do
        int32_t eax_2 = *(arg3 + (i << 2) - 4)
        i -= 1
        void* i_1 = i
        int32_t var_8 = eax_2
        void* i_2 = edx_1 - 2
        
        if (edx_1 - 2 s< ebx_2)
            do
                void* edx_3 = *(*(arg3 + (i_2 << 2) - 4) + 4)
                int32_t ebx_3 = *(edx_3 + 0x14)
                void* eax_5 = *(*(arg3 + (i_2 << 2)) + 4)
                int32_t edi_1 = *(eax_5 + 0x14)
                
                if (edi_1 s< ebx_3)
                    i_2 -= 1
                else if (edi_1 s<= ebx_3)
                    int32_t xmm1_1 = *(eax_5 + 0x10)
                    int32_t xmm0_1 = *(edx_3 + 0x10)
                    
                    if (xmm0_1 f> xmm1_1)
                        i_2 -= 1
                    else if (not(xmm1_1 f> xmm0_1) && not(*(edx_3 + 0xc) f<= *(eax_5 + 0xc)))
                        i_2 -= 1
                
                ebx_2 = var_10
                *(arg3 + (i_1 << 2)) = *(arg3 + (i_2 << 2))
                i_1 = i_2
                i_2 = (i_2 << 1) + 2
            while (i_2 s< ebx_2)
        
        if (i_2 == ebx_2)
            *(arg3 + (i_1 << 2)) = *(arg3 + (ebx_2 << 2) - 4)
            i_1 = ebx_2 - 1
        
        int32_t var_24_1 = arg4
        result = sub_523e30(&var_8, i_1, arg3, i, &var_8)
        edx_1 -= 2
    while (i s> 0)

return result
