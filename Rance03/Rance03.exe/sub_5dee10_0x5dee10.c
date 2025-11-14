// 函数: sub_5dee10
// 地址: 0x5dee10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* eax_2 = data_75d50c
int32_t edx = 0
int32_t* ecx = *(eax_2 + 0x174)
int32_t eax = *(eax_2 + 0x178)
int32_t result = 0
uint32_t edi_3 = (eax - ecx + 3) u>> 2

if (ecx u> eax)
    edi_3 = 0

if (edi_3 != 0)
    int32_t* ecx_1 = ecx
    
    do
        if (*ecx_1 != 0)
            result += 1
        
        edx += 1
        ecx_1 = &ecx_1[1]
    while (edx != edi_3)

return result
