// 函数: sub_47ed90
// 地址: 0x47ed90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t i

if (arg2 == 0)
    i = 0
else
    i = arg2 - 8

int32_t result = *(arg1 + 0x2c)
int32_t* edx = *(arg1 + 0x28)

if (edx != result)
    while (*edx != i)
        edx = &edx[1]
        
        if (edx == result)
            break

if (edx != result)
    int32_t edx_2 = (edx - *(arg1 + 0x28)) s>> 2
    
    if (edx_2 != 0xffffffff)
        result = arg3
        *(*(arg1 + 0x38) + (edx_2 << 2)) = result

return result
