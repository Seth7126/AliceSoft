// 函数: sub_623a60
// 地址: 0x623a60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = *(arg1 + 0x1c)

if (*(esi + 0x34) == 0)
    int32_t eax_3 = (*(arg1 + 0x20))(*(arg1 + 0x28), 1 << (*(esi + 0x24)).b, 1)
    *(esi + 0x34) = eax_3
    
    if (eax_3 == 0)
        return 1

if (*(esi + 0x28) == 0)
    *(esi + 0x28) = 1 << (*(esi + 0x24)).b
    *(esi + 0x30) = 0
    *(esi + 0x2c) = 0

void* ebx_1 = arg2 - *(arg1 + 0x10)
void* edi_2 = *(esi + 0x28)
int32_t eax_5 = *(arg1 + 0xc)

if (ebx_1 u>= edi_2)
    sub_69d850(*(esi + 0x34), eax_5 - edi_2, edi_2)
    *(esi + 0x2c) = *(esi + 0x28)
    *(esi + 0x30) = 0
    return 0

void* edi_3 = edi_2 - *(esi + 0x30)

if (edi_3 u> ebx_1)
    edi_3 = ebx_1

sub_69d850(*(esi + 0x34) + *(esi + 0x30), eax_5 - ebx_1, edi_3)
void* ebx_2 = ebx_1 - edi_3

if (ebx_1 != edi_3)
    sub_69d850(*(esi + 0x34), *(arg1 + 0xc) - ebx_2, ebx_2)
    int32_t eax_14 = *(esi + 0x28)
    *(esi + 0x30) = ebx_2
    *(esi + 0x2c) = eax_14
    return 0

*(esi + 0x30) += edi_3
int32_t ecx_2 = *(esi + 0x28)

if (*(esi + 0x30) == ecx_2)
    *(esi + 0x30) = 0

void* eax_16 = *(esi + 0x2c)

if (eax_16 u< ecx_2)
    *(esi + 0x2c) = eax_16 + edi_3

return 0
