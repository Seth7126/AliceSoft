// 函数: sub_6023e0
// 地址: 0x6023e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* eax

if (arg2[5] u< 0x10)
    eax = arg2
else
    eax = *arg2

int32_t ecx = *(arg1 + 0x760)
_strcpy_s(arg1 + 0x35d + ecx, 0x400 - ecx, eax)
*(arg1 + 0x760) += arg2[4] + 1
int32_t ecx_1 = *(arg1 + 0x760)
int32_t* eax_6

if (arg3[5] u< 0x10)
    eax_6 = arg3
else
    eax_6 = *arg3

_strcpy_s(arg1 + 0x35d + ecx_1, 0x400 - ecx_1, eax_6)
*(arg1 + 0x760) += arg3[4] + 1
int32_t result
result.b = 1
return result
