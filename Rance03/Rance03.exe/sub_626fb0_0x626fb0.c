// 函数: sub_626fb0
// 地址: 0x626fb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = arg2
sub_626f50(arg3)
int32_t i_1 = arg4
(*(arg3 + 0x14))[*(arg3 + 8)] = i_1.b
*(arg3 + 0x14) += 1
(*(arg3 + 0x14))[*(arg3 + 8)] = (i_1 u>> 8).b
*(arg3 + 0x14) += 1
(*(arg3 + 0x14))[*(arg3 + 8)] = not.b(i_1.b)
*(arg3 + 0x14) += 1
int32_t result = *(arg3 + 8)
(*(arg3 + 0x14))[result] = (not.d(i_1) u>> 8).b
*(arg3 + 0x14) += 1
char* edx_3 = *(arg3 + 0x14)

if (i_1 != 0)
    int32_t i
    
    do
        edi += 1
        result.b = *(edi - 1)
        edx_3[*(arg3 + 8)] = result.b
        *(arg3 + 0x14) += 1
        edx_3 = *(arg3 + 0x14)
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
