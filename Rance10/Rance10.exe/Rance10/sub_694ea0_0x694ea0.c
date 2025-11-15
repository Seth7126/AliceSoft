// 函数: sub_694ea0
// 地址: 0x694ea0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = *(arg1 + 0xc)

if (*(esi + 0x38) != 0)
    int32_t* ecx = *(*(esi + 4) + 0x38)
    (*(*ecx + 0xb0))(ecx, 1, esi + 0x20)
    *(esi + 0x38) = 0

int32_t result
result.b = 1
return result
