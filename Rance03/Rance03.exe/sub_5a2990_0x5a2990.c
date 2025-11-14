// 函数: sub_5a2990
// 地址: 0x5a2990
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = data_75d508
int32_t i = 0

if (((*(esi + 0x54) - *(esi + 0x50)) & 0xfffffffc) s> 0)
    do
        if (i s>= 0 && i s< (*(esi + 0x54) - *(esi + 0x50)) s>> 2)
            void* ecx_4 = *(*(esi + 0x50) + (i << 2))
            
            if (ecx_4 != 0)
                *(ecx_4 + 0x244) = arg1
        
        i += 1
    while (i s< (*(esi + 0x54) - *(esi + 0x50)) s>> 2)

return i
