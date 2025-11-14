// 函数: sub_47c5b0
// 地址: 0x47c5b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 4) = arg2
*(arg1 + 0x9c4) = 1
int32_t result

do
    int32_t esi_1 = *(arg1 + 0x9c4)
    result = (*(arg1 + (esi_1 << 2)) u>> 0x1e ^ *(arg1 + (esi_1 << 2))) * 0x6c078965 + esi_1
    *(arg1 + (esi_1 << 2) + 4) = result
    *(arg1 + 0x9c4) += 1
while (*(arg1 + 0x9c4) s< 0x270)

return result
