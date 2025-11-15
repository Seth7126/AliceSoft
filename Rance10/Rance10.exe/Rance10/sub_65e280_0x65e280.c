// 函数: sub_65e280
// 地址: 0x65e280
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edx = arg1
void* ebp = *(edx + 0x1a4)

if (*(ebp + 0x18) == 0)
    int32_t eax_3 = (*(*(edx + 4) + 0x1c))(edx, *(ebp + 8), *(ebp + 0x14), *(ebp + 0x10), 0)
    edx = arg1
    *(ebp + 0xc) = eax_3

int32_t eax_5 = *(ebp + 0x10) - *(ebp + 0x18)
int32_t esi = *arg3
int32_t ecx_1 = arg4 - esi

if (eax_5 u<= ecx_1)
    ecx_1 = eax_5

int32_t edi_1 = *(edx + 0x60) - *(ebp + 0x14)

if (ecx_1 u<= edi_1)
    edi_1 = ecx_1

(*(*(edx + 0x1c0) + 4))(arg1, *(ebp + 0xc) + (*(ebp + 0x18) << 2), arg2 + (esi << 2), edi_1)
*arg3 += edi_1
*(ebp + 0x18) += edi_1
int32_t result = *(ebp + 0x10)

if (*(ebp + 0x18) u>= result)
    *(ebp + 0x14) += result
    *(ebp + 0x18) = 0

return result
