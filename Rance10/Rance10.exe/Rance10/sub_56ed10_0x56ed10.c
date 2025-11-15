// 函数: sub_56ed10
// 地址: 0x56ed10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edx = *(arg1 + 0x2c)
int32_t esi = *(arg1 + 0x30)

if (edx == esi)
    return 

int16_t* edi_1 = arg2

do
    void* ecx = *edx
    void* eax = *(ecx + 0x20)
    int32_t ecx_1 = *(ecx + 0x24)
    
    while (eax != ecx_1)
        *edi_1 = *(eax + 0x30)
        edi_1[1] = *(eax + 0x34)
        int16_t ebx_3 = *(eax + 0x38)
        eax += 0x3c
        edi_1[2] = ebx_3
        edi_1 = &edi_1[3]
    
    edx = &edx[1]
while (edx != esi)
