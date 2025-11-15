// 函数: sub_69e160
// 地址: 0x69e160
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (sub_69e100(arg1) != 0)
    return 0xfffffffe

void* esi = *(arg1 + 0x1c)
*(arg1 + 0x14) = 0
*(arg1 + 8) = 0
*(arg1 + 0x18) = 0
*(arg1 + 0x2c) = 2
*(esi + 0x10) = *(esi + 8)
int32_t eax_3 = *(esi + 0x18)
*(esi + 0x14) = 0

if (eax_3 s< 0)
    *(esi + 0x18) = neg.d(eax_3)

int32_t ecx = *(esi + 0x18)
int32_t eax_5

if (ecx != 2)
    eax_5 = 0x71
    
    if (ecx != 0)
        eax_5 = 0x2a
else
    eax_5 = ecx + 0x37

*(esi + 4) = eax_5
void* eax_6

if (ecx != 2)
    eax_6 = sub_69d9c0(eax_5, nullptr, 0, 0)
else
    eax_6 = nullptr

*(arg1 + 0x30) = eax_6
*(esi + 0x28) = 0
sub_6a2590(esi)
return 0
