// 函数: sub_60d3f0
// 地址: 0x60d3f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edx = 0
__builtin_memset(arg1 + 0x13c, 0, 0x1c)
*(arg1 + 0x238) = 0
int32_t ecx = *(arg1 + 0x25c)
int32_t* result = *(arg1 + 0x258)
uint32_t esi_3 = (ecx - result + 3) u>> 2

if (result u> ecx)
    esi_3 = 0

if (esi_3 != 0)
    do
        edx += 1
        *result = 0
        result = &result[1]
    while (edx != esi_3)

return result
