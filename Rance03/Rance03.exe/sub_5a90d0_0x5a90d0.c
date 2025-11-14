// 函数: sub_5a90d0
// 地址: 0x5a90d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result

if (arg1 s>= 0)
    void* esi_1 = data_75d508
    
    if (arg1 s< (*(esi_1 + 0x54) - *(esi_1 + 0x50)) s>> 2)
        void* ecx = *(*(esi_1 + 0x50) + (arg1 << 2))
        
        if (ecx != 0)
            if (arg2 s>= 0 && arg2 s< (*(ecx + 0x1d0) - *(ecx + 0x1cc)) s>> 2)
                *(*(ecx + 0x1cc) + (arg2 << 2)) = arg3
            
            result.b = 1
            return result

result.b = 0
return result
