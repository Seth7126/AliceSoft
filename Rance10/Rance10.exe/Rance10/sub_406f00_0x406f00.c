// 函数: sub_406f00
// 地址: 0x406f00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** edi = &arg1[0x1b]
*arg1 = &dpanalysis::CBreakPoint::`vftable'
int32_t eax = edi[5]

if (eax u>= 0x10)
    sub_403160(*edi, eax + 1, 1)

edi[5] = 0xf
bool cond:0 = edi[5] u< 0x10
edi[4] = 0

if (not(cond:0))
    edi = *edi

*edi = nullptr
int32_t* ecx = arg1[0x19]
arg1[0x18] = &dpanalysis::CTokenAnalyser::`vftable'

if (ecx != 0)
    (*(*ecx + 8))(1)
    arg1[0x19] = 0

int32_t eax_3 = arg1[0x17]
void* edi_1 = &arg1[0x12]

if (eax_3 u>= 0x10)
    sub_403160(*edi_1, eax_3 + 1, 1)

*(edi_1 + 0x14) = 0xf
bool cond:1 = *(edi_1 + 0x14) u< 0x10
*(edi_1 + 0x10) = 0

if (not(cond:1))
    edi_1 = *edi_1

*edi_1 = 0
void* edi_2 = &arg1[0xc]
int32_t eax_5 = *(edi_2 + 0x14)

if (eax_5 u>= 0x10)
    sub_403160(*edi_2, eax_5 + 1, 1)

*(edi_2 + 0x14) = 0xf
bool cond:2 = *(edi_2 + 0x14) u< 0x10
*(edi_2 + 0x10) = 0

if (not(cond:2))
    edi_2 = *edi_2

*edi_2 = 0
int32_t eax_7 = arg1[7]

if (eax_7 u>= 0x10)
    eax_7 = sub_403160(arg1[2], eax_7 + 1, 1)

arg1[7] = 0xf
bool cond:3 = arg1[7] u< 0x10
arg1[6] = 0

if (cond:3)
    arg1[2].b = 0
    return eax_7

char* eax_9 = arg1[2]
*eax_9 = 0
return eax_9
