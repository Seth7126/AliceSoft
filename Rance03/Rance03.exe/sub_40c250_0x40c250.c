// 函数: sub_40c250
// 地址: 0x40c250
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi

if (*arg2 != 0)
    int32_t* esi_1 = arg2
    void* edi_1 = esi_1 + 1
    char i
    
    do
        i = *esi_1
        esi_1 += 1
    while (i != 0)
    esi = esi_1 - edi_1
else
    esi = nullptr

void* edi_2 = arg1[4]

if (arg1[5] u>= 0x10)
    arg1 = *arg1

void* eax = esi

if (edi_2 u< esi)
    eax = edi_2

int32_t ecx = sub_405190(eax, arg2, arg1, eax)

if (ecx == 0)
    if (edi_2 u< esi)
        int32_t eax_1
        eax_1.b = false
        return eax_1
    
    ecx.b = edi_2 != esi

int32_t eax_2
eax_2.b = ecx == 0
return eax_2
