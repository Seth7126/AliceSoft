// 函数: sub_5de200
// 地址: 0x5de200
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* eax_5 = *(arg1 + 4)
int32_t ecx = *(eax_5 + 0x24)
void* edx = *(*(eax_5 + 0x1c) + 4)

if (ecx u< (*(edx + 0xf4) - *(edx + 0xf0)) s>> 4)
    int32_t ecx_1 = ecx << 4
    
    if (ecx_1 != neg.d(*(edx + 0xf0)))
        int32_t* result = *(ecx_1 + *(edx + 0xf0) + 4)
        
        if (result[5] u< 0x10)
            return result
        
        return *result

return nullptr
