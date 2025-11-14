// 函数: sub_5d6540
// 地址: 0x5d6540
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = *(arg1 + 0x14)

if (result != 0xffffffff)
    result = sub_5d6460(arg1, result)
    
    if (result.b == 0)
        return result
    
    *(arg1 + 0x14) = 0xffffffff

result.b = 1
return result
