// 函数: sub_547460
// 地址: 0x547460
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1

if ((*(arg1 + 8) - *(arg1 + 4)) s>> 2 s< arg2)
    var_4 = nullptr
    
    do
        int32_t eax_3 = *(arg1 + 8)
        int32_t* ecx = &var_4
        
        if (&var_4 u< eax_3)
            ecx = *(arg1 + 4)
        
        if (&var_4 u>= eax_3 || ecx u> &var_4)
            if (eax_3 == *(arg1 + 0xc))
                int32_t* var_14_2 = ecx
                sub_412f20(arg1 + 4)
            
            int32_t* eax_6 = *(arg1 + 8)
            
            if (eax_6 != 0)
                *eax_6 = 0
        else
            if (eax_3 == *(arg1 + 0xc))
                int32_t* var_14_1 = ecx
                sub_412f20(arg1 + 4)
            
            int32_t* ecx_2 = *(arg1 + 8)
            
            if (ecx_2 != 0)
                *ecx_2 = *(*(arg1 + 4) + ((&var_4 - ecx) s>> 2 << 2))
        
        *(arg1 + 8) += 4
    while ((*(arg1 + 8) - *(arg1 + 4)) s>> 2 s< arg2)

int32_t i

for (i = (*(arg1 + 8) - *(arg1 + 4)) s>> 2; i s> arg2; i = (*(arg1 + 8) - *(arg1 + 4)) s>> 2)
    int32_t ecx_4 = *(arg1 + 4)
    
    if (*(ecx_4 + ((*(arg1 + 8) - ecx_4) s>> 2 << 2) - 4) != 0)
        int32_t* ecx_5 = *(ecx_4 + ((*(arg1 + 8) - ecx_4) s>> 2 << 2) - 4)
        
        if (ecx_5 != 0)
            (**ecx_5)(1)
    
    *(arg1 + 8) -= 4

return i
