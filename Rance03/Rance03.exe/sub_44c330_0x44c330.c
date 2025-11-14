// 函数: sub_44c330
// 地址: 0x44c330
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = *(*(arg1 + 8) + 0x2b4)

if (esi != 0)
    sub_522820(esi + 8)
    sub_522820(esi + 0x44)
    int32_t* ecx_2 = *(esi + 0x80)
    
    if (ecx_2 != 0)
        (*(*ecx_2 + 4))()
        *(esi + 0x80) = 0
    
    *(esi + 4) = 0

int32_t* ecx_3 = *(arg1 + 0xc)

if (ecx_3 != 0)
    (*(*ecx_3 + 0x38))(arg1)
    (*(**(arg1 + 0xc) + 4))()
    *(arg1 + 0xc) = 0

void* result
result.b = 1
return result
