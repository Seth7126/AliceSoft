// 函数: sub_4b7b70
// 地址: 0x4b7b70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edx = *(arg1 + 0x98)
int32_t* result = *(arg1 + 0x94)

if (result != edx)
    while (*result != arg2)
        result = &result[1]
        
        if (result == edx)
            break
    
    if (result != edx)
        result = _memcpy(result, &result[1], (*(arg1 + 0x98) - &result[1]) & 0xfffffffc)
        *(arg1 + 0x98) -= 4
        *(arg1 + 4) = 1

return result
