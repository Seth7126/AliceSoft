// 函数: sub_516a30
// 地址: 0x516a30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** edi = &arg1[6]
sub_5106e0(&edi[6])
int32_t eax = edi[5]

if (eax u>= 0x10)
    sub_403160(*edi, eax + 1, 1)

edi[5] = 0xf
bool cond:0 = edi[5] u< 0x10
edi[4] = 0

if (not(cond:0))
    edi = *edi

*edi = nullptr
int32_t eax_2 = arg1[5]

if (eax_2 u>= 0x10)
    eax_2 = sub_403160(*arg1, eax_2 + 1, 1)

arg1[5] = 0xf
bool cond:1 = arg1[5] u< 0x10
arg1[4] = 0

if (cond:1)
    *arg1 = 0
    return eax_2

char* eax_4 = *arg1
*eax_4 = 0
return eax_4
