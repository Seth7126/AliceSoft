// 函数: sub_4da840
// 地址: 0x4da840
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = 0
*(arg1 + 0x48) = 0
*(arg1 + 0x44) = 1
*(arg1 + 0x4c) = 0
int32_t* esi = *(arg1 + 0x38)
uint32_t ebx_3 = (*(arg1 + 0x3c) - esi + 3) u>> 2

if (esi u> *(arg1 + 0x3c))
    ebx_3 = 0

if (ebx_3 != 0)
    do
        (*(**esi + 4))()
        edi += 1
        esi = &esi[1]
    while (edi != ebx_3)

*(arg1 + 0x3c) = *(arg1 + 0x38)
int32_t edi_1 = 0
int32_t* esi_1 = *(arg1 + 0x2c)
uint32_t ebx_7 = (*(arg1 + 0x30) - esi_1 + 3) u>> 2

if (esi_1 u> *(arg1 + 0x30))
    ebx_7 = 0

if (ebx_7 != 0)
    do
        (*(**esi_1 + 4))()
        edi_1 += 1
        esi_1 = &esi_1[1]
    while (edi_1 != ebx_7)

*(arg1 + 0x30) = *(arg1 + 0x2c)
int32_t* i = *(arg1 + 0x20)

for (int32_t edi_2 = *(arg1 + 0x24); i != edi_2; i = &i[1])
    int32_t* ebx_8 = *i
    int32_t ecx_2 = ebx_8[1]
    ebx_8[1] -= 1
    (**ebx_8)(ecx_2 - 1)

int32_t result = *(arg1 + 0x20)
*(arg1 + 0x24) = result
int32_t* ecx_4 = *(arg1 + 0x10)

if (ecx_4 != 0)
    result = (*(*ecx_4 + 4))()
    *(arg1 + 0x10) = 0

int32_t* ecx_5 = *(arg1 + 0xc)

if (ecx_5 != 0)
    result = (*(*ecx_5 + 4))()
    *(arg1 + 0xc) = 0

return result
