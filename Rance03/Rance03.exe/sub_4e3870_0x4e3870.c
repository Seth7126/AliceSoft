// 函数: sub_4e3870
// 地址: 0x4e3870
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edx = arg1
int32_t ebx = 0
void* var_8 = edx
int32_t result = (*(edx + 0x18) - *(edx + 0x14)) s>> 2
int32_t result_1 = result

if (result s> 0)
    do
        int32_t ebp_1 = ebx << 2
        
        if ((*(edx + 8))[ebx] != 0)
            int32_t eax_3 = arg2[1]
            int32_t* edi_2 = *(edx + 0x14) + ebp_1
            int32_t ecx
            
            if (edi_2 u< eax_3)
                ecx = *arg2
            
            int32_t* ecx_3
            
            if (edi_2 u>= eax_3 || ecx u> edi_2)
                if (eax_3 == arg2[2])
                    sub_415950(arg2, 1)
                    edx = var_8
                
                ecx_3 = arg2[1]
                
                if (ecx_3 != 0)
                    *ecx_3 = *edi_2
            else
                if (eax_3 == arg2[2])
                    sub_415950(arg2, 1)
                    edx = var_8
                
                ecx_3 = arg2[1]
                
                if (ecx_3 != 0)
                    *ecx_3 = *(*arg2 + ((edi_2 - ecx) s>> 2 << 2))
            arg2[1] += 4
        
        result = *(edx + 8)
        ebx += 1
        *(result + ebp_1) = 0
    while (ebx s< result_1)

return result
