// 函数: sub_44e3f0
// 地址: 0x44e3f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = *(arg1 + 4)

if (esi != 0)
    int32_t* ecx = *(esi + 0x2c0)
    
    if (ecx != 0)
        (*(*ecx + 0x10))()
    
    sub_44f2d0(esi + 0x29c)
    sub_44f2d0(esi + 0x2a8)
    *(arg1 + 4) = 0

return 0
