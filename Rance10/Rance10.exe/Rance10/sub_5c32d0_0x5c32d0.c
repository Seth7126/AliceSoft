// 函数: sub_5c32d0
// 地址: 0x5c32d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx = *(arg1 + 0x28)
void* result = *(arg1 + 0x24)

if (result != edx)
    void* esi_1 = result + 0x38
    
    do
        result += 0x78
        float xmm1_2 = *(esi_1 - 0x28) * arg4 + arg5
        *(esi_1 - 0x2c) = *(esi_1 - 0x2c) * arg2 + arg3
        *(esi_1 - 0x28) = xmm1_2
        float xmm1_5 = *esi_1 * arg4 + arg5
        *(esi_1 - 4) = *(esi_1 - 4) * arg2 + arg3
        *esi_1 = xmm1_5
        float xmm1_8 = *(esi_1 + 0x28) * arg4 + arg5
        *(esi_1 + 0x24) = *(esi_1 + 0x24) * arg2 + arg3
        *(esi_1 + 0x28) = xmm1_8
        esi_1 += 0x78
    while (result != edx)

return result
