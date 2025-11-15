// 函数: sub_60e680
// 地址: 0x60e680
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_601430(arg1 + 0x60)
sub_6001a0(arg1 + 0x40)
int32_t eax = *(arg1 + 0x30)
void* edi = arg1 + 0x1c

if (eax u>= 0x10)
    sub_403160(*edi, eax + 1, 1)

*(edi + 0x14) = 0xf
bool cond:0 = *(edi + 0x14) u< 0x10
*(edi + 0x10) = 0

if (not(cond:0))
    edi = *edi

*edi = 0
int32_t eax_2 = *(arg1 + 0x18)

if (eax_2 u>= 0x10)
    eax_2 = sub_403160(*(arg1 + 4), eax_2 + 1, 1)

*(arg1 + 0x18) = 0xf
bool cond:1 = *(arg1 + 0x18) u< 0x10
*(arg1 + 0x14) = 0

if (cond:1)
    *(arg1 + 4) = 0
    return eax_2

char* eax_4 = *(arg1 + 4)
*eax_4 = 0
return eax_4
