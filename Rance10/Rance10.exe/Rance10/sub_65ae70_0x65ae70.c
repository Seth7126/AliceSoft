// 函数: sub_65ae70
// 地址: 0x65ae70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = *(arg1 + 0x19c)

if (*(edi + 0x30) != 0)
    goto label_65aeac

int32_t result = (*(*(arg1 + 0x1a0) + 0xc))(arg1, edi + 8)

if (result != 0)
    *(edi + 0x30) = 1
label_65aeac:
    int32_t esi_1 = *(arg1 + 0x124)
    result = (*(*(arg1 + 0x1a4) + 4))(arg1, edi + 8, edi + 0x34, esi_1, arg2, arg3, arg4)
    
    if (*(edi + 0x34) u>= esi_1)
        *(edi + 0x30) = 0
        *(edi + 0x34) = 0

return result
