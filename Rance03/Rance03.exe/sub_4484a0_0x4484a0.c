// 函数: sub_4484a0
// 地址: 0x4484a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t i = *(arg1 + 0x10)

if (i != 0)
    do
        int32_t i_2 = i
        i -= 1
        
        if (i_2 == 1)
            *(arg1 + 0xc) = i
    while (i != 0)
    
    *(arg1 + 0x10) = i

int32_t i_1 = *(arg1 + 8)

while (i_1 != 0)
    i_1 -= 1
    int32_t eax_1 = *(*(arg1 + 4) + (i_1 << 2))
    
    if (eax_1 != 0)
        j__free(eax_1)

int32_t result = *(arg1 + 4)

if (result != 0)
    result = j__free(result)

*(arg1 + 4) = 0
*(arg1 + 8) = 0
return result
