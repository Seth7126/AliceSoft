// 函数: sub_6c9470
// 地址: 0x6c9470
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx = arg2[1]
void* result = *arg2

if (*(arg1 + 4) + ((edx - result) s>> 2 << 2) u> *(arg1 + 8))
    result.b = 0
    return result

uint32_t edi_6 = (edx - result + 3) u>> 2
int32_t ebx = 0

if (result u> edx)
    edi_6 = 0

if (edi_6 != 0)
    do
        char* edx_1 = *(arg1 + 4)
        result += 4
        ebx += 1
        uint32_t esi_7 =
            ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        *(arg1 + 4) = &edx_1[4]
        *(result - 4) = esi_7
    while (ebx != edi_6)

result.b = 1
return result
