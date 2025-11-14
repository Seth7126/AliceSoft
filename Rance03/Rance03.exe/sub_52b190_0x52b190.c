// 函数: sub_52b190
// 地址: 0x52b190
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = *(arg1 + 0x48)

if (ecx != 0)
    char eax
    int32_t ecx_1
    eax, ecx_1 = (*(*ecx + 0x38))()
    
    if (eax == 0)
        if (*(arg1 + 0x48) != 0)
            int32_t var_18_1 = ecx_1
            eax = sub_59b9d0(arg1 + 0x44, *(arg1 + 0x4c), *(arg1 + 0x50), *(arg1 + 0x54), 
                *(arg1 + 0x58), *(arg1 + 0x60), *(arg1 + 0x64), *(arg1 + 0x68), arg2)
        
        if (*(arg1 + 0x48) == 0 || eax == 0)
            return 0

return 1
