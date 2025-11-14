// 函数: sub_4ac7a0
// 地址: 0x4ac7a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edx = *(arg1 + 0x64)
void* eax = *(arg1 + 0x54)

if (*(edx + 0x61) != 0 && eax != 0)
    void* eax_2 = *(*(eax + 4) + 0x40)
    void* ecx = *(eax_2 + 0x64)
    int32_t eax_3
    
    if (ecx != 0)
        eax_3 = sub_4a44a0(ecx)
    else
        eax_3 = *(eax_2 + 0x2c)
    
    sub_485a80(edx + 0x64, eax_3, arg2, arg3, 0)

void* edi = *(arg1 + 0x64)
void* eax_4 = *(arg1 + 0x54)

if (*(edi + 0x61) != 0 && eax_4 != 0)
    void* eax_6 = *(*(eax_4 + 4) + 0x40)
    void* ecx_2 = *(eax_6 + 0x64)
    int32_t eax_7
    
    if (ecx_2 != 0)
        eax_7 = sub_4a44a0(ecx_2)
    else
        eax_7 = *(eax_6 + 0x2c)
    
    sub_485ad0(edi + 0x64, eax_7, 0)

*(edi + 0x61) = 0
sub_4e6e80(edi)
void* edi_1 = *(arg1 + 0x54)

if (*(edi_1 + 0x60) != 0 && *(*(*(edi_1 + 4) + 0x40) + 0x47e) != 0)
    sub_485990(edi_1 + 0x64, 0)

*(edi_1 + 0x60) = 0
int32_t result = *(arg1 + 8)
*(arg1 + 0x54) = result
*(arg1 + 0x64) = result
return result
