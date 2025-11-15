// 函数: sub_4fcf90
// 地址: 0x4fcf90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_4fb350(arg1)
uint32_t* result = *(arg2 + 4)

if (result + 1 u<= *(arg2 + 8))
    bool cond:0_1 = *result == 1
    *(arg2 + 4) = result + 1
    result.b = cond:0_1
    *(arg1 + 0x208) = result.b
    result = *(arg2 + 4)
    
    if (result + 1 u<= *(arg2 + 8))
        bool cond:1_1 = *result == 1
        *(arg2 + 4) = result + 1
        result.b = cond:1_1
        *(arg1 + 0x3b) = result.b
        
        if (sub_61ec90(arg2, arg1 + 0x10).b != 0)
            return sub_61ec90(arg2, arg1 + 0x14) != 0

result.b = 0
return result
