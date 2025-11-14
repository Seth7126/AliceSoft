// 函数: sub_592f30
// 地址: 0x592f30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = *(arg1 + 0x2a0)

if (ecx == 0)
label_592fa0:
    int32_t* ecx_3 = *(arg1 + 0x290)
    
    if (ecx_3 == 0)
    label_592fc0:
        int32_t* ecx_5 = *(arg1 + 0x294)
        
        if (ecx_5 == 0)
            return sub_52b190(arg1 + 0x1c, arg2) != 0
        
        if ((*(*ecx_5 + 0x14))() != 0)
            return sub_52b190(arg1 + 0x1c, arg2) != 0
        
        if (sub_592e10(arg1) != 0)
            return sub_52b190(arg1 + 0x1c, arg2) != 0
    else
        if ((*(*ecx_3 + 0x38))() != 0)
            goto label_592fc0
        
        if (sub_592bc0(arg1) != 0)
            goto label_592fc0
else
    char eax_3
    int32_t ecx_1
    eax_3, ecx_1 = (*(*ecx + 0x38))()
    
    if (eax_3 != 0)
        goto label_592fa0
    
    if (*(arg1 + 0x2a0) != 0)
        int32_t var_1c_1 = ecx_1
        eax_3 = sub_59b9d0(arg1 + 0x29c, *(arg1 + 0x2a4), *(arg1 + 0x2a8), *(arg1 + 0x2ac), 
            *(arg1 + 0x2b0), *(arg1 + 0x2b8), *(arg1 + 0x2bc), *(arg1 + 0x2c0), arg2)
        
        if (eax_3 != 0)
            goto label_592fa0

return 0
