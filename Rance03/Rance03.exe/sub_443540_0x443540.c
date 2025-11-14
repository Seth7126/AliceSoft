// 函数: sub_443540
// 地址: 0x443540
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t i_1 = arg2
int32_t result = 0

if (i_1 != 0)
    int32_t ebx_1 = *(arg1 + 8)
    int32_t i
    
    do
        uint32_t edx
        edx.b = ebx_1.b
        int32_t* ecx
        ecx.b = 7
        edx.b &= 7
        result *= 2
        ecx.b = 7 - edx.b
        edx.b = *((ebx_1 u>> 3) + **(arg1 + 4))
        edx.b u>>= ecx.b
        
        if ((edx.b & 1) != 0)
            result |= 1
        
        ebx_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
