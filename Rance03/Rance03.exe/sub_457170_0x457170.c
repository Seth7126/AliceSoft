// 函数: sub_457170
// 地址: 0x457170
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
int32_t* i = *(arg1 + 8)

for (int32_t edx = *(arg1 + 0xc); i != edx; i = &i[1])
    if (*(*i + 5) != 0)
        int32_t** ecx_2 = *(arg1 + 8)
        int32_t ecx_4
        
        if (ecx_2 == edx)
        label_4571af:
            ecx_4 = 0xffffffff
        else
            int32_t** ecx_3 = ecx_2
            
            while (*(*ecx_3 + 5) == 0)
                ecx_3 = &ecx_3[1]
                
                if (ecx_3 == edx)
                    goto label_4571af
            
            ecx_4 = (ecx_3 - *(arg1 + 8)) s>> 2
        
        if (ecx_4 s>= 0 && (edx - *(arg1 + 8)) s>> 2 s> ecx_4)
            i = *(*(arg1 + 8) + (ecx_4 << 2))
            
            if (i != 0)
                int32_t eax_3 = i[2]
                
                if (eax_3 == 1)
                    int32_t var_c_1 = arg2
                    return sub_4572a0(arg1, ecx_4, ecx_4)
                
                if (eax_3 == 3)
                    int32_t var_c = arg2
                    return sub_457660(arg1, ecx_4, ecx_4)
        
        i.b = 0
        return i

i.b = 1
return i
