// 函数: sub_5e8b10
// 地址: 0x5e8b10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = *(arg1 + 4)

if (*(esi + 0x3d) != arg2)
    *(esi + 0x3d) = arg2
    
    if (arg2 == 0)
        sub_5e5700(esi)
        int32_t edx_1 = *(esi + 0x40)
        int32_t eax_1 = *(esi + 0x44)
        *(esi + 0x48) = edx_1
        *(esi + 0x4c) = eax_1
        *(esi + 0xfc) = edx_1
        *(esi + 0x100) = eax_1
        return sub_5e5300(esi, 0)

return arg2
