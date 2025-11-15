// 函数: sub_5d49c0
// 地址: 0x5d49c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
int32_t** eax = *(arg1 + 0x24)
sub_5d2130(arg1 + 0x24, &var_4, *eax, eax)
sub_403160(*(arg1 + 0x24), 1, 0x30)
int32_t eax_1 = *(arg1 + 0x20)

if (eax_1 u>= 0x10)
    eax_1 = sub_403160(*(arg1 + 0xc), eax_1 + 1, 1)

*(arg1 + 0x20) = 0xf
bool cond:0 = *(arg1 + 0x20) u< 0x10
*(arg1 + 0x1c) = 0

if (cond:0)
    *(arg1 + 0xc) = 0
    return eax_1

char* eax_3 = *(arg1 + 0xc)
*eax_3 = 0
return eax_3
