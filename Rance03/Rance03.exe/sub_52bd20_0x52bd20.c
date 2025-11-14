// 函数: sub_52bd20
// 地址: 0x52bd20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebp_2 = (arg2 - arg1) s>> 2
int32_t var_8 = ebp_2
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(ebp_2)
int32_t result = eax_1 - edx
int32_t i = result s>> 1

if (i s> 0)
    void* ecx = (i << 1) + 2
    
    do
        int32_t result_1 = *(arg1 + (i << 2) - 4)
        i -= 1
        void* i_1 = i
        void* i_2 = ecx - 2
        
        if (ecx - 2 s< ebp_2)
            do
                if (*(arg1 + (i_2 << 2)) s< *(arg1 + (i_2 << 2) - 4))
                    i_2 -= 1
                
                *(arg1 + (i_1 << 2)) = *(arg1 + (i_2 << 2))
                i_1 = i_2
                i_2 = (i_2 << 1) + 2
            while (i_2 s< ebp_2)
        
        if (i_2 == ebp_2)
            *(arg1 + (i_1 << 2)) = *(arg1 + (ebp_2 << 2) - 4)
            i_1 = ebp_2 - 1
        
        int32_t eax_4
        int32_t edx_1
        edx_1:eax_4 = sx.q(i_1 - 1)
        void* i_3 = (eax_4 - edx_1) s>> 1
        
        if (i s< i_1)
            do
                int32_t ecx_4 = *(arg1 + (i_3 << 2))
                
                if (ecx_4 s>= result_1)
                    break
                
                *(arg1 + (i_1 << 2)) = ecx_4
                i_1 = i_3
                int32_t eax_7
                int32_t edx_2
                edx_2:eax_7 = sx.q(i_3 - 1)
                i_3 = (eax_7 - edx_2) s>> 1
            while (i s< i_1)
            
            ebp_2 = var_8
        
        result = result_1
        ecx -= 2
        *(arg1 + (i_1 << 2)) = result
    while (i s> 0)

return result
