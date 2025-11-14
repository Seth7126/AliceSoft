// 函数: sub_60ca90
// 地址: 0x60ca90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if ((*(*arg4 + 0x4c))() == 0 || *(arg1 + 0x134) != 0)
    goto label_60caf7

int32_t* ecx_1 = data_75d538

if (ecx_1 != 0)
    (**ecx_1)()
    int32_t* edi_1 = data_75d538
    
    if (edi_1 != 0)
        int32_t* var_10_1 = edi_1
        void* var_14_1 = arg1
        int32_t* var_1c
        int32_t* var_18
        bool cond:0_1 = sub_609490(arg1 + 0x12c, var_1c, var_18) != 0
        int32_t eax_5 = *edi_1
        
        if (cond:0_1)
            (*(eax_5 + 4))()
        label_60caf7:
            
            if (sub_60cf80(arg1, *(arg1 + 0x284)) != 0 && sub_6110a0(*(arg1 + 0x218), arg2, arg3, 
                    arg4, *(arg1 + 0x26c), *(arg1 + 0x270), *(arg1 + 0x138)) != 0)
                if ((*(*arg4 + 0x4c))() == 0)
                    return 1
                
                int32_t* ecx_7 = *(arg1 + 0x134)
                
                if (ecx_7 == 0)
                    return 1
                
                if ((*(*ecx_7 + 0x2c))(7, 1, 0, 1) != 0)
                    return 1
        else
            (*(eax_5 + 4))()

return 0
