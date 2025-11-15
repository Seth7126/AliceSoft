// 函数: sub_498740
// 地址: 0x498740
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** edi = &arg1[0xd]
*arg1 = &mainsystem::CSys4xPath::`vftable'{for `ISys4xPath'}
int32_t eax = edi[5]

if (eax u>= 0x10)
    sub_403160(*edi, eax + 1, 1)

edi[5] = 0xf
bool cond:0 = edi[5] u< 0x10
edi[4] = 0

if (not(cond:0))
    edi = *edi

*edi = nullptr
void* edi_1 = &arg1[7]
int32_t eax_2 = *(edi_1 + 0x14)

if (eax_2 u>= 0x10)
    sub_403160(*edi_1, eax_2 + 1, 1)

*(edi_1 + 0x14) = 0xf
bool cond:1 = *(edi_1 + 0x14) u< 0x10
*(edi_1 + 0x10) = 0

if (not(cond:1))
    edi_1 = *edi_1

*edi_1 = 0
int32_t eax_4 = arg1[6]

if (eax_4 u>= 0x10)
    eax_4 = sub_403160(arg1[1], eax_4 + 1, 1)

arg1[6] = 0xf
bool cond:2 = arg1[6] u< 0x10
arg1[5] = 0

if (cond:2)
    arg1[1].b = 0
    return eax_4

char* eax_6 = arg1[1]
*eax_6 = 0
return eax_6
