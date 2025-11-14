// 函数: sub_5de000
// 地址: 0x5de000
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = arg2
void* edx_1 = result + (arg3 << 2)
int32_t edi = 0
uint32_t ebx_3 = (edx_1 - result + 3) u>> 2

if (result u> edx_1)
    ebx_3 = 0

if (ebx_3 != 0)
    do
        *(arg1 + 0x14) -= 4
        result += 4
        edi += 1
        *(result - 4) = **(arg1 + 0x14)
    while (edi u< ebx_3)

return result
