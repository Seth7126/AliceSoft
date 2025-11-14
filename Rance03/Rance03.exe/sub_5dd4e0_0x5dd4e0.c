// 函数: sub_5dd4e0
// 地址: 0x5dd4e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = *(arg1 + 4)
void* ecx = *(esi + 4)

if (arg2 u< (*(ecx + 0xc) - *(ecx + 8)) s>> 2)
    void* eax_4 = *(*(ecx + 8) + (arg2 << 2))
    
    if (eax_4 != 0)
        int32_t eax_5 = *(eax_4 + 0x24)
        
        if (eax_5 s>= 0)
            return eax_5 - *(*(esi + 8) + 0x14c)

return 0xffffffff
