// 函数: sub_4a9ca0
// 地址: 0x4a9ca0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = *(arg2 + 4)

if (result + 1 u<= *(arg2 + 8))
    bool cond:0_1 = *result == 1
    *(arg2 + 4) = result + 1
    result.b = cond:0_1
    
    if (result.b == 0)
        sub_4a9b40(arg1)
    label_4a9ccc:
        *(arg1 + 0x78) = 1
        result.b = 1
        return result
    
    if (sub_4a99f0(arg1).b != 0 && sub_5eae40(*(arg1 + 0x7c), arg2).b != 0)
        goto label_4a9ccc

result.b = 0
return result
