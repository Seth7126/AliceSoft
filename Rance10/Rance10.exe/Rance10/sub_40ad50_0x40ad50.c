// 函数: sub_40ad50
// 地址: 0x40ad50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_40cc10(arg1 + 0x6c)
int32_t eax = *(arg1 + 0x68)
void* edi = arg1 + 0x54

if (eax u>= 0x10)
    sub_403160(*edi, eax + 1, 1)

*(edi + 0x14) = 0xf
bool cond:0 = *(edi + 0x14) u< 0x10
*(edi + 0x10) = 0

if (not(cond:0))
    edi = *edi

*edi = 0
void* edi_1 = arg1 + 0x2c
int32_t eax_2 = *(edi_1 + 0x14)

if (eax_2 u>= 0x10)
    sub_403160(*edi_1, eax_2 + 1, 1)

*(edi_1 + 0x14) = 0xf
bool cond:1 = *(edi_1 + 0x14) u< 0x10
*(edi_1 + 0x10) = 0

if (not(cond:1))
    edi_1 = *edi_1

*edi_1 = 0
sub_40cc70(arg1 + 0x20)
int32_t eax_4 = *(arg1 + 0x1c)

if (eax_4 u>= 0x10)
    eax_4 = sub_403160(*(arg1 + 8), eax_4 + 1, 1)

*(arg1 + 0x1c) = 0xf
bool cond:2 = *(arg1 + 0x1c) u< 0x10
*(arg1 + 0x18) = 0

if (cond:2)
    *(arg1 + 8) = 0
    return eax_4

char* eax_6 = *(arg1 + 8)
*eax_6 = 0
return eax_6
