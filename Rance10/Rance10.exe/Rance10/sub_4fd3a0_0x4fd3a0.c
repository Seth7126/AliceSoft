// 函数: sub_4fd3a0
// 地址: 0x4fd3a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edx = *arg2
int32_t** result = *(*edx + 0x50)

if (result[0x6b] != 0)
    result = *(arg1 + 4)
    *result = edx

return result
