// 函数: ?_FastNodeIntersects@location@Concurrency@@QBE_NABV12@@Z
// 地址: 0x6fd5f2
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax_1 = *arg2 & 0xfffffff
int32_t result

if (eax_1 == 0)
    result.b = 1
else if (eax_1 == 1)
    result.b = *(*(arg1 + 0xc) + 0x2c) == arg2[2]
else if (eax_1 == 2)
    result.b = *(arg1 + 8) == arg2[2]
else
    if (eax_1 == 3)
        int32_t var_8_1 = arg2[2]
        return Concurrency::details::SchedulingNode::ContainsResourceId(*(arg1 + 0xc))
    
    result.b = 0

return result
