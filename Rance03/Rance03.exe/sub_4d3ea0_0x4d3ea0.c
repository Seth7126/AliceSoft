// 函数: sub_4d3ea0
// 地址: 0x4d3ea0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edx = *(arg1 + 8)
int32_t* result = *(arg1 + 4)

if (result != edx)
    while (*result != arg2)
        result = &result[1]
        
        if (result == edx)
            break
    
    if (result != edx)
        result = _memcpy(result, &result[1], (*(arg1 + 8) - &result[1]) & 0xfffffffc)
        *(arg1 + 8) -= 4
        int32_t* ecx_3 = *(arg1 + 0x10)
        
        if (ecx_3 != 0)
            return (**ecx_3)()

return result
