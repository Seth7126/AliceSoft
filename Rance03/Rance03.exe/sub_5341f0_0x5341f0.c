// 函数: sub_5341f0
// 地址: 0x5341f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = *(arg1 + 0x54)
char eax

if (ecx == 0)
label_534258:
    int32_t* ecx_3 = *(arg1 + 0x80)
    
    if (ecx_3 == 0)
        return 1
    
    int32_t ecx_4
    eax, ecx_4 = (*(*ecx_3 + 0x38))()
    
    if (eax != 0)
        return 1
    
    if (*(arg1 + 0x80) != 0)
        int32_t var_1c_3 = ecx_4
        eax = sub_59b9d0(arg1 + 0x7c, *(arg1 + 0x84), *(arg1 + 0x88), *(arg1 + 0x8c), 
            *(arg1 + 0x90), *(arg1 + 0x98), *(arg1 + 0x9c), *(arg1 + 0xa0), arg2)
        
        if (eax != 0)
            return 1
else
    int32_t ecx_1
    eax, ecx_1 = (*(*ecx + 0x38))()
    
    if (eax != 0)
        goto label_534258
    
    if (*(arg1 + 0x54) != 0)
        int32_t var_1c_1 = ecx_1
        eax = sub_59b9d0(arg1 + 0x50, *(arg1 + 0x58), *(arg1 + 0x5c), *(arg1 + 0x60), 
            *(arg1 + 0x64), *(arg1 + 0x6c), *(arg1 + 0x70), *(arg1 + 0x74), arg2)
        
        if (eax != 0)
            goto label_534258
return 0
