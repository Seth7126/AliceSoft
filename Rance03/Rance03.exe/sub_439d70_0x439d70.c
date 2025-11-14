// 函数: sub_439d70
// 地址: 0x439d70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* result = *(arg1 + 0x2c)

if (result != *(arg1 + 0x30))
    bool cond:0_1 = *(arg1 + 0x4c) u< 0x10
    *(arg1 + 0x48) = 0
    
    if (cond:0_1)
        result = arg1 + 0x38
    else
        result = *(arg1 + 0x38)
    
    *result = 0
    
    if (*(arg1 + 8) != 0)
        result = sub_4057c0(arg1 + 0x38, 0x6db314, 1)
    
    for (void* i = *(arg1 + 0x2c); i != *(arg1 + 0x30); i += 0x28)
        result = sub_403110(arg1 + 0x38, i + 8, nullptr, 0xffffffff)

return result
