// 函数: sub_4e0a40
// 地址: 0x4e0a40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = data_75d4e0
int32_t result_1
int32_t result_2

if (sub_46cb80(edi) != 0)
    (***(edi + 0xc))(&result_1, &result_2)

int32_t result = result_1

if (*(arg1 + 0x30) != 0)
    result = result_2

*(arg1 + 0xa0) = result
return result
