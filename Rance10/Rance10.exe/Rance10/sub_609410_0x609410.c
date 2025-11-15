// 函数: sub_609410
// 地址: 0x609410
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx = *(arg1 + 0x20)

if (ecx != 0)
    sub_403160(ecx, (*(arg1 + 0x28) - ecx) s>> 2, 4)
    *(arg1 + 0x20) = 0
    *(arg1 + 0x24) = 0
    *(arg1 + 0x28) = 0

int32_t eax_5 = *(arg1 + 0x18)

if (eax_5 u>= 0x10)
    eax_5 = sub_403160(*(arg1 + 4), eax_5 + 1, 1)

*(arg1 + 0x18) = 0xf
bool cond:0 = *(arg1 + 0x18) u< 0x10
*(arg1 + 0x14) = 0

if (cond:0)
    *(arg1 + 4) = 0
    return eax_5

char* eax_6 = *(arg1 + 4)
*eax_6 = 0
return eax_6
