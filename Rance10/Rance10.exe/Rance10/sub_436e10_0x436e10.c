// 函数: sub_436e10
// 地址: 0x436e10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx = *(arg1 + 0x20)

if (ecx != 0)
    sub_403160(ecx, (*(arg1 + 0x28) - ecx) s>> 1, 2)
    *(arg1 + 0x20) = 0
    *(arg1 + 0x24) = 0
    *(arg1 + 0x28) = 0

void* ecx_1 = *(arg1 + 0x14)

if (ecx_1 != 0)
    sub_403160(ecx_1, (*(arg1 + 0x1c) - ecx_1) s>> 1, 2)
    *(arg1 + 0x14) = 0
    *(arg1 + 0x18) = 0
    *(arg1 + 0x1c) = 0

void* ecx_2 = *(arg1 + 8)

if (ecx_2 == 0)
    return 

sub_403160(ecx_2, (*(arg1 + 0x10) - ecx_2) s>> 1, 2)
*(arg1 + 8) = 0
*(arg1 + 0xc) = 0
*(arg1 + 0x10) = 0
