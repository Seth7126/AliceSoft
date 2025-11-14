// 函数: sub_5d7490
// 地址: 0x5d7490
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg2 u< (*(arg1 + 0xc) - *(arg1 + 8)) s>> 2)
    void* ecx = *(*(arg1 + 8) + (arg2 << 2))
    
    if (ecx != 0 && arg3 u< *(ecx + 0xc) u>> 2)
        int32_t esi_1
        
        if (*(ecx + 0xc) != 0)
            esi_1 = *(ecx + 8)
        else
            esi_1 = 0
        
        *(esi_1 + (arg3 << 2)) = arg4
        
        if (arg3 + 1 u< *(ecx + 0xc) u>> 2)
            if (*(ecx + 0xc) != 0)
                *(*(ecx + 8) + ((arg3 + 1) << 2)) = arg5
                int32_t eax_6
                eax_6.b = 1
                return eax_6
            
            *((arg3 + 1) << 2) = arg5
            int32_t eax_5
            eax_5.b = 1
            return eax_5

int32_t eax_1
eax_1.b = 0
return eax_1
