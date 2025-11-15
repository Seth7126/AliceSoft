// 函数: ?_FastVPIntersects@location@Concurrency@@QBE_NABV12@@Z
// 地址: 0x6fd63d
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax_1 = *arg2 & 0xfffffff
int32_t result

if (eax_1 == 0)
    result.b = 1
else if (eax_1 == 1)
    result.b = *(*(*(arg1 + 0xc) + 0x50) + 0x2c) == arg2[2]
else if (eax_1 == 2)
    result.b = *(*(*(arg1 + 0xc) + 0x50) + 0x30) == arg2[2]
else if (eax_1 == 3)
    result.b = *(arg1 + 8) == arg2[2]
else
    result.b = 0

return result
