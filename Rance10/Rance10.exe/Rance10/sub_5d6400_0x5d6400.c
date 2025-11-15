// 函数: sub_5d6400
// 地址: 0x5d6400
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0x2b) != 0)
    *(arg1 + 0x17) = 0
    *(arg1 + 0x20) = 0
    *(arg1 + 0x28) = 0
    *(arg1 + 0x2e) = 0

if (*(arg1 + 0x18) != 0)
    *(arg1 + 0x10) = 0

if (*(arg1 + 0x2e) != 0)
    *(arg1 + 0x17) = 0
    *(arg1 + 0x20) = 0

if (*(arg1 + 0x16) != 0)
    *(arg1 + 0x17) = 0
    *(arg1 + 0x20) = 0
    *(arg1 + 0x24) = 0

int32_t eax = *(arg1 + 0x24)
int32_t result = eax - 2

if (eax == 2)
    *(arg1 + 0x10) = 0
    *(arg1 + 0x14) = 0
    *(arg1 + 0x20) = 0
label_5d6471:
    *(arg1 + 0x29) = 0
    *(arg1 + 0x18) = 0
    *(arg1 + 0x2e) = 0
else
    int32_t result_1 = result
    result -= 1
    int32_t result_2
    
    if (result_1 != 1)
        result_2 = result
        result -= 1
    
    if (result_1 == 1 || result_2 == 1)
        *(arg1 + 0x14) = 0
        goto label_5d6471

if (*(arg1 + 0x17) == 0)
    *(arg1 + 0x14) = 0
    *(arg1 + 0x2a) = 0
    *(arg1 + 0x10) = 0

if (*(arg1 + 0x20) == 0)
    *(arg1 + 0x15) = 0
    *(arg1 + 0x1c) = 0
    *(arg1 + 0x29) = 0
    *(arg1 + 0x10) = 0

return result
