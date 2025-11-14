// 函数: sub_5a71e0
// 地址: 0x5a71e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 s>= 0)
    void* esi_1 = data_75d508
    
    if (arg1 s< (*(esi_1 + 0x54) - *(esi_1 + 0x50)) s>> 2)
        void* ecx = *(*(esi_1 + 0x50) + (arg1 << 2))
        
        if (ecx != 0 && arg2 s>= 0 && arg2 s< (*(ecx + 0x20) - *(ecx + 0x1c)) s>> 2)
            void* ecx_1 = *(*(ecx + 0x1c) + (arg2 << 2))
            
            if (ecx_1 != 0)
                void* ecx_2 = *(ecx_1 + 0x1d8)
                
                if (ecx_2 != 0 && *(ecx_2 + 0x3c) != 0)
                    return sub_5619a0(ecx_2, ecx_2 + 0x44) != 0

int32_t result
result.b = 0
return result
