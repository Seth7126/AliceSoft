// 函数: sub_50a120
// 地址: 0x50a120
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = arg1
int32_t ebx = 0
void* result_1 = result
int32_t ebp_2 = (*(result + 0xc) - *(result + 8)) s>> 2

if (ebp_2 s> 0)
    do
        void* edi_1 = *(*(*(result + 8) + (ebx << 2)) + 4)
        int32_t edi_2
        
        if (edi_1 != 0)
            edi_2 = *(edi_1 + 8)
        else
            edi_2 = 0xffffffff
        
        int32_t eax_2 = arg2[1]
        int32_t var_8 = edi_2
        int32_t ecx
        
        if (&var_8 u< eax_2)
            ecx = *arg2
        
        if (&var_8 u>= eax_2 || ecx u> &var_8)
            if (eax_2 == arg2[2])
                sub_415950(arg2, 1)
            
            int32_t* eax_5 = arg2[1]
            
            if (eax_5 != 0)
                *eax_5 = edi_2
        else
            if (eax_2 == arg2[2])
                sub_415950(arg2, 1)
            
            int32_t* ecx_2 = arg2[1]
            
            if (ecx_2 != 0)
                *ecx_2 = *(*arg2 + ((&var_8 - ecx) s>> 2 << 2))
        
        arg2[1] += 4
        ebx += 1
        result = result_1
    while (ebx s< ebp_2)

return result
