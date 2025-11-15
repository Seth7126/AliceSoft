// 函数: sub_63cb20
// 地址: 0x63cb20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* eax = *arg3
*arg3[1] = *arg3
*(*arg3 + 4) = arg3[1]
*(arg1 + 4) -= 1
void* edi_1 = &arg3[3]
int32_t eax_3 = *(edi_1 + 0x14)

if (eax_3 u>= 0x10)
    sub_403160(*edi_1, eax_3 + 1, 1)

*(edi_1 + 0x14) = 0xf
bool cond:0 = *(edi_1 + 0x14) u< 0x10
*(edi_1 + 0x10) = 0

if (not(cond:0))
    edi_1 = *edi_1

*edi_1 = 0
sub_403160(arg3, 1, 0x24)
*arg2 = eax
return arg2
