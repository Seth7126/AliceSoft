// 函数: sub_47ded0
// 地址: 0x47ded0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = *(arg2 + 4)

if (result + 1 u<= *(arg2 + 8))
    bool cond:0_1 = *result == 1
    *(arg2 + 4) = result + 1
    result.b = cond:0_1
    
    if (result.b == 0)
        sub_47ddc0(arg1)
    label_47def8:
        *(arg1 + 0x24) = 1
        result.b = 1
        return result
    
    if (sub_47dd20(arg1).b != 0 && sub_5a9bf0(*(arg1 + 0x28), arg2).b != 0)
        goto label_47def8

result.b = 0
return result
