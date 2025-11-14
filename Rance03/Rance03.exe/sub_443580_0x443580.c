// 函数: sub_443580
// 地址: 0x443580
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edx_4 = *(arg1 + 8)
int32_t* esi = *(arg1 + 4)
char ebx_1 = edx_4.b & 7
int32_t ebp = *esi
uint32_t edx_1 = (edx_4 + 8) u>> 3
uint32_t result = zx.d(*((edx_4 u>> 3) + ebp)) << (ebx_1 + 0x18)

if (edx_1 + 1 u< esi[1] - ebp)
    return zx.d(*(edx_1 + ebp + 1)) << (ebx_1 + 8) | zx.d(*(edx_1 + ebp)) << (ebx_1 + 0x10) | result

if (edx_1 u>= esi[1] - ebp)
    return result

return zx.d(*(edx_1 + ebp)) << (ebx_1 + 0x10) | result
