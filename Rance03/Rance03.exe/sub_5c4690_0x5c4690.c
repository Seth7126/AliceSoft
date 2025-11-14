// 函数: sub_5c4690
// 地址: 0x5c4690
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* eax_2 = *(arg1 + 0x208)
int32_t edx = *eax_2
*(arg1 + 0x208) = &eax_2[1]
*(arg1 + 0x234) -= 4
int32_t* result = *(arg1 + 0x234)

if (*result == 0)
    result = *(arg1 + 0x20c) + edx
    *(arg1 + 0x208) = result

return result
