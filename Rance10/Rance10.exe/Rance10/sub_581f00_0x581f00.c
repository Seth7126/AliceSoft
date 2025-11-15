// 函数: sub_581f00
// 地址: 0x581f00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char eax = *(arg1 + 0x1a8)

if (eax != 0)
    sub_4068c0(*(arg1 + 0x248))
    char temp0_1 = *(arg1 + 0x1a8)
    *(arg1 + 0x1a8) = 0
    eax = temp0_1

int32_t* edi_1 = *(arg1 + 0x1a4)
*(arg1 + 0x1a4) = 0

if (edi_1 != 0)
    sub_586a00(edi_1)
    int32_t var_c_1 = 0x24
    eax = operator new(edi_1)

bool cond:0 = *(arg1 + 0x1c8) u< 0x10
*(arg1 + 0x1c4) = 0

if (cond:0)
    *(arg1 + 0x1b4) = 0
    return eax

char* eax_1 = *(arg1 + 0x1b4)
*eax_1 = 0
return eax_1
