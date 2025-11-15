// 函数: sub_625800
// 地址: 0x625800
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** esi = arg2
void* edi = esi[4]

if (edi + 1 u> *(arg1 + 0x14))
    char eax_1 = sub_405df0(arg1 + 0xc, edi + 1)
    
    if (eax_1 == 0)
        return eax_1

if (esi[5] u>= 0x10)
    esi = *esi

if (*(arg1 + 0x14) != 0)
    sub_700660(*(arg1 + 0x10), esi, edi + 1)
    char* eax_4
    eax_4.b = 1
    return eax_4

sub_700660(nullptr, esi, edi + 1)
char* eax_2
eax_2.b = 1
return eax_2
