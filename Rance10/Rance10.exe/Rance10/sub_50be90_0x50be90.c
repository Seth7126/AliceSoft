// 函数: sub_50be90
// 地址: 0x50be90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_508b20(arg1 + 0x114)
int32_t eax = *(arg1 + 0x110)
void* edi = arg1 + 0xfc

if (eax u>= 0x10)
    sub_403160(*edi, eax + 1, 1)

*(edi + 0x14) = 0xf
bool cond:0 = *(edi + 0x14) u< 0x10
*(edi + 0x10) = 0

if (not(cond:0))
    edi = *edi

*edi = 0
void* edi_1 = arg1 + 0xe4
int32_t eax_2 = *(edi_1 + 0x14)

if (eax_2 u>= 0x10)
    sub_403160(*edi_1, eax_2 + 1, 1)

*(edi_1 + 0x14) = 0xf
bool cond:1 = *(edi_1 + 0x14) u< 0x10
*(edi_1 + 0x10) = 0

if (not(cond:1))
    edi_1 = *edi_1

*edi_1 = 0
void* edi_2 = arg1 + 0xcc
int32_t eax_4 = *(edi_2 + 0x14)

if (eax_4 u>= 0x10)
    sub_403160(*edi_2, eax_4 + 1, 1)

*(edi_2 + 0x14) = 0xf
bool cond:2 = *(edi_2 + 0x14) u< 0x10
*(edi_2 + 0x10) = 0

if (not(cond:2))
    edi_2 = *edi_2

*edi_2 = 0
sub_4c2800(arg1 + 0x40)
*(arg1 + 0xc) = &partsengine::CEventSubject::`vftable'
int32_t result = *(arg1 + 0x10)
*(arg1 + 0x14) = result
void* ecx_2 = *(arg1 + 0x10)

if (ecx_2 != 0)
    result = sub_403160(ecx_2, (*(arg1 + 0x18) - ecx_2) s>> 2, 4)
    *(arg1 + 0x10) = 0
    *(arg1 + 0x14) = 0
    *(arg1 + 0x18) = 0

return result
