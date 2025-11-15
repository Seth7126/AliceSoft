// 函数: sub_6a07c0
// 地址: 0x6a07c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = *(arg3 + 0x1c)

if (*(esi + 0x38) == 0)
    int32_t eax_2 = (*(arg3 + 0x20))(*(arg3 + 0x28), 1 << (*(esi + 0x28)).b, 1)
    *(esi + 0x38) = eax_2
    
    if (eax_2 == 0)
        return 1

if (*(esi + 0x2c) == 0)
    *(esi + 0x2c) = 1 << (*(esi + 0x28)).b
    *(esi + 0x34) = 0
    *(esi + 0x30) = 0

void* edi_2 = *(esi + 0x2c)

if (arg4 u>= edi_2)
    sub_700660(*(esi + 0x38), arg2 - edi_2, edi_2)
    *(esi + 0x30) = *(esi + 0x2c)
    *(esi + 0x34) = 0
    return 0

void* edi_3 = edi_2 - *(esi + 0x34)

if (edi_3 u> arg4)
    edi_3 = arg4

sub_700660(*(esi + 0x38) + *(esi + 0x34), arg2 - arg4, edi_3)
void* ebx_1 = arg4 - edi_3

if (arg4 != edi_3)
    sub_700660(*(esi + 0x38), arg2 - ebx_1, ebx_1)
    int32_t eax_10 = *(esi + 0x2c)
    *(esi + 0x34) = ebx_1
    *(esi + 0x30) = eax_10
    return 0

*(esi + 0x34) += edi_3
int32_t ecx_2 = *(esi + 0x2c)

if (*(esi + 0x34) == ecx_2)
    *(esi + 0x34) = 0

void* eax_12 = *(esi + 0x30)

if (eax_12 u< ecx_2)
    *(esi + 0x30) = eax_12 + edi_3

return 0
