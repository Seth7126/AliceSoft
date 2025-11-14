// 函数: sub_5f39d0
// 地址: 0x5f39d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx_2 = (arg2 - arg3) s>> 2
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(ebx_2)
int32_t result = eax_1 - edx
int32_t i = result s>> 1

if (i s> 0)
    void* ecx = (i << 1) + 2
    
    do
        int32_t eax_2 = *(arg3 + (i << 2) - 4)
        i -= 1
        int32_t var_8 = eax_2
        void* i_1 = i
        void* i_2 = ecx - 2
        
        if (ecx - 2 s< ebx_2)
            do
                if (*(*(*(arg3 + (i_2 << 2)) + 0x48) + 8)
                        s> *(*(*(arg3 + (i_2 << 2) - 4) + 0x48) + 8))
                    i_2 -= 1
                
                *(arg3 + (i_1 << 2)) = *(arg3 + (i_2 << 2))
                i_1 = i_2
                i_2 = (i_2 << 1) + 2
            while (i_2 s< ebx_2)
        
        if (i_2 == ebx_2)
            *(arg3 + (i_1 << 2)) = *(arg3 + (ebx_2 << 2) - 4)
            i_1 = ebx_2 - 1
        
        int32_t var_1c_1 = arg4
        result = sub_5f3dd0(&var_8, i_1, arg3, i, &var_8)
        ecx -= 2
    while (i s> 0)

return result
