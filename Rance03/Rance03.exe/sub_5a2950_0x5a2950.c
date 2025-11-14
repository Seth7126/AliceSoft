// 函数: sub_5a2950
// 地址: 0x5a2950
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edx = data_75d508
int32_t result

if (arg1 s>= 0 && arg1 s< (*(edx + 0x54) - *(edx + 0x50)) s>> 2)
    void* esi_1 = *(*(edx + 0x50) + (arg1 << 2))
    
    if (esi_1 != 0)
        int32_t* ecx = *(edx + 0x5c)
        
        if (ecx != 0)
            (*(*ecx + 0xc))(*(esi_1 + 8))
        
        result.b = 1
        return result

result.b = 0
return result
