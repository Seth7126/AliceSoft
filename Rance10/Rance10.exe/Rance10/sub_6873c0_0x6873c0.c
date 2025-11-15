// 函数: sub_6873c0
// 地址: 0x6873c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if ((*(*arg4 + 0x4c))() == 0 || *(arg1 + 0x144) != 0)
    goto label_687427

int32_t* ecx_1 = data_7fcbd4

if (ecx_1 != 0)
    (**ecx_1)()
    int32_t* edi_1 = data_7fcbd4
    
    if (edi_1 != 0)
        int32_t* var_10_1 = edi_1
        void* var_14_1 = arg1
        int32_t* var_1c
        int32_t* var_18
        bool cond:0_1 = sub_683720(arg1 + 0x13c, var_1c, var_18) != 0
        int32_t eax_5 = *edi_1
        
        if (cond:0_1)
            (*(eax_5 + 4))()
        label_687427:
            
            if (sub_6878b0(arg1, *(arg1 + 0x2d0)) != 0 && sub_68c080(*(arg1 + 0x264), arg2, arg3, 
                    arg4, *(arg1 + 0x2b8), *(arg1 + 0x2bc), *(arg1 + 0x148)) != 0)
                if ((*(*arg4 + 0x4c))() == 0)
                    return true
                
                int32_t* ecx_7 = *(arg1 + 0x144)
                
                if (ecx_7 == 0)
                    return true
                
                if ((*(*ecx_7 + 0x2c))(7, 1, 0, 1) != 0)
                    return true
        else
            (*(eax_5 + 4))()

return false
