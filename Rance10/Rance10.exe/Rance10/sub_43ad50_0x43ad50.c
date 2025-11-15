// 函数: sub_43ad50
// 地址: 0x43ad50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebx = arg2
arg2 = 8
void* ecx = (arg5 << 1) + 0xe
void* result = ebx * 2
void* ecx_1 = (arg5 << 1) + 0xc
void* ecx_2 = (arg5 << 1) + 0xa
void* ecx_3 = (arg5 << 1) + 8
void* ecx_4 = (arg5 << 1) + 6
void* ecx_5 = (arg5 << 1) + 4
void* edx_1 = arg5 * 2
arg5 = edx_1
void* i

do
    int16_t* esi_1 = *(arg1 + 0x14)
    *(esi_1 + result) += *(edx_1 + result + *(arg4 + 0x14))
    int32_t esi_2 = *(arg1 + 0x14)
    *(esi_2 + result + 2) += *(arg5 + result + *(arg4 + 0x14) + 2)
    int32_t edx_5 = *(arg1 + 0x14)
    *(result + edx_5 + 4) += *(ecx_5 + result + *(arg4 + 0x14))
    int32_t edx_7 = *(arg1 + 0x14)
    *(result + edx_7 + 6) += *(ecx_4 + result + *(arg4 + 0x14))
    int32_t edx_9 = *(arg1 + 0x14)
    *(result + edx_9 + 8) += *(ecx_3 + result + *(arg4 + 0x14))
    int32_t edx_11 = *(arg1 + 0x14)
    *(result + edx_11 + 0xa) += *(ecx_2 + result + *(arg4 + 0x14))
    int32_t edx_13 = *(arg1 + 0x14)
    *(result + edx_13 + 0xc) += *(ecx_1 + result + *(arg4 + 0x14))
    int32_t edx_15 = *(arg1 + 0x14)
    void* edi_7 = result + edx_15
    int16_t edx_16 = *(result + edx_15 + 0xe) + *(ecx + result + *(arg4 + 0x14))
    result += arg3 * 2
    ebx = ebx + 8 + arg3 - 8
    *(edi_7 + 0xe) = edx_16
    i = arg2
    arg2 -= 1
    edx_1 = arg5
while (i != 1)
return result
