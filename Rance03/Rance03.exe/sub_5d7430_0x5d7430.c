// 函数: sub_5d7430
// 地址: 0x5d7430
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg2 u< (*(arg1 + 0xc) - *(arg1 + 8)) s>> 2)
    void* ecx = *(*(arg1 + 8) + (arg2 << 2))
    
    if (ecx != 0 && arg3 u< *(ecx + 0xc) u>> 2)
        if (*(ecx + 0xc) != 0)
            *(*(ecx + 8) + (arg3 << 2)) = arg4
            int32_t eax_4
            eax_4.b = 1
            return eax_4
        
        *(arg3 << 2) = arg4
        int32_t eax_3
        eax_3.b = 1
        return eax_3

int32_t eax_1
eax_1.b = 0
return eax_1
