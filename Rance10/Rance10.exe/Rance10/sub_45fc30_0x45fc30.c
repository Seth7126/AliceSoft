// 函数: sub_45fc30
// 地址: 0x45fc30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = 0
int32_t* esi = *(arg1 + 0x14)
uint32_t ebx_3 = (*(arg1 + 0x18) - esi + 3) u>> 2

if (esi u> *(arg1 + 0x18))
    ebx_3 = 0

if (ebx_3 != 0)
    do
        int32_t* ecx = *esi
        
        if (ecx != 0)
            (*(*ecx + 0x18))(1)
        
        edi += 1
        esi = &esi[1]
    while (edi != ebx_3)

*(arg1 + 0x18) = *(arg1 + 0x14)
int32_t edi_1 = 0
int32_t* esi_1 = *(arg1 + 8)
uint32_t ebx_7 = (*(arg1 + 0xc) - esi_1 + 3) u>> 2

if (esi_1 u> *(arg1 + 0xc))
    ebx_7 = 0

if (ebx_7 != 0)
    do
        int32_t* ecx_1 = *esi_1
        
        if (ecx_1 != 0)
            (**ecx_1)(1)
        
        edi_1 += 1
        esi_1 = &esi_1[1]
    while (edi_1 != ebx_7)

int32_t result = *(arg1 + 8)
*(arg1 + 0xc) = result
return result
