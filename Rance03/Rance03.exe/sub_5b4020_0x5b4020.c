// 函数: sub_5b4020
// 地址: 0x5b4020
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax
uint32_t edx
eax, edx = __allmul(*(arg1 + 0x30), *(arg1 + 0x34), 0x3e8, 0)
uint32_t eax_1
int32_t edx_1
eax_1, edx_1 = __alldiv(eax, edx, data_75d560, data_75d564)
int32_t eax_3
uint32_t edx_2
eax_3, edx_2 = __allmul(*(arg2 + 0x30), *(arg2 + 0x34), 0x3e8, 0)
uint32_t result
int32_t edx_3
result, edx_3 = __alldiv(eax_3, edx_2, data_75d560, data_75d564)

if (edx_1 s>= edx_3 && (edx_1 s> edx_3 || eax_1 u> result))
    result.b = 1
    return result

result.b = 0
return result
