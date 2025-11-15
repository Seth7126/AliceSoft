// 函数: sub_620f40
// 地址: 0x620f40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (sub_62ab60(arg2, *(arg1 + 0x18)) != 0 && sub_62ab60(arg2, *(arg1 + 0x14)) != 0)
    void** var_18
    sub_44a580(arg1 + 4, &var_18)
    void var_c
    sub_6221b0(arg1 + 4, &var_c)
    int32_t var_10
    int32_t esi_1 = var_10
    int32_t var_4
    
    if (esi_1 != var_4)
        void** edi_1 = var_18
        
        do
            void* ecx_4
            
            if (edi_1 != 0)
                ecx_4 = *edi_1
            else
                ecx_4 = nullptr
            
            int32_t* ecx_7 =
                *(*(*(ecx_4 + 4) + ((esi_1 u>> 2 & (*(ecx_4 + 8) - 1)) << 2)) + ((esi_1 & 3) << 2))
            char eax_1
            
            if (ecx_7 != 0)
                eax_1 = (*(*ecx_7 + 0xc))(arg2)
            else
                eax_1 = sub_62ab60(arg2, 0xffffffff)
            
            if (eax_1 == 0)
                return 0
            
            esi_1 += 1
        while (esi_1 != var_4)
    
    return 1

return 0
