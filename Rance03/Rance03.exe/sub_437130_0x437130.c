// 函数: sub_437130
// 地址: 0x437130
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ecx = *(arg1 + 0x2c)
int32_t edx = *(arg1 + 0x34)

if (ecx != edx)
    *(arg1 + 0x2c) = ecx + 0x28
else
    ecx = arg1 + 4

if (*(ecx + 4) != 6)
    void* eax = *(arg1 + 0x2c)
    
    if (eax != *(arg1 + 0x30))
        *(arg1 + 0x2c) = eax - 0x28
    
    return 

int32_t edi_1 = 1

if (*(arg1 + 0x2c) == edx)
    return 

do
    void* ecx_1 = *(arg1 + 0x2c)
    
    if (ecx_1 != *(arg1 + 0x34))
        *(arg1 + 0x2c) = ecx_1 + 0x28
    else
        ecx_1 = arg1 + 4
    
    int32_t eax_3 = *(ecx_1 + 4)
    
    if (eax_3 == 6)
        edi_1 += 1
    else if (eax_3 == 7)
        edi_1 -= 1
    
    if (edi_1 == 0)
        break
    
    sub_403110(arg2, ecx_1 + 8, nullptr, 0xffffffff)
while (*(arg1 + 0x2c) != *(arg1 + 0x34))
