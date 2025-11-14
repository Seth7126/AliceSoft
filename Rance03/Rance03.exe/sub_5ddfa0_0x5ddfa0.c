// 函数: sub_5ddfa0
// 地址: 0x5ddfa0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t i_1 = arg3
int32_t ecx = *(arg1 + 0xc)
int32_t ebx_2 = (*(arg1 + 0x14) - *(arg1 + 8)) s>> 2
int32_t result = ebx_2 + i_1

if (result u>= ecx)
    sub_64ad90(arg1 + 4, ecx * 2)
    result = *(arg1 + 8) + (ebx_2 << 2)
    *(arg1 + 0x14) = result

if (i_1 s> 0)
    void* edx_2 = arg2 + ((i_1 - 1) << 2)
    int32_t i
    
    do
        edx_2 -= 4
        result = *(edx_2 + 4)
        **(arg1 + 0x14) = result
        *(arg1 + 0x14) += 4
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
