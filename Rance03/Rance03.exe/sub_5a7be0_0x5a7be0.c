// 函数: sub_5a7be0
// 地址: 0x5a7be0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 s>= 0)
    void* esi_1 = data_75d508
    
    if (arg1 s< (*(esi_1 + 0x54) - *(esi_1 + 0x50)) s>> 2)
        void* ecx = *(*(esi_1 + 0x50) + (arg1 << 2))
        
        if (ecx != 0 && arg2 s>= 0 && arg2 s< (*(ecx + 0xc0) - *(ecx + 0xbc)) s>> 2)
            *(*(ecx + 0xbc) + (arg2 << 2)) = arg3
            int32_t eax_5
            eax_5.b = 1
            return eax_5

int32_t eax
eax.b = 0
return eax
