// 函数: sub_6d672c
// 地址: 0x6d672c
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int16_t* eax

if (*(arg1 + 0x28) == 0)
    eax = *(arg2 + 0x3c)
else
    eax = *(arg2 + 0x38)

*(arg1 + 0x10) = std::_Maklocwcs(eax)
void* const eax_2 = &data_7503d4

if (*(arg2 + 0x2e) u<= 4)
    eax_2 = *(arg2 + 0x48)

*(arg1 + 0x14) = std::_Maklocwcs(eax_2)
void* const eax_4 = &data_7503d8

if (*(arg2 + 0x2f) u<= 4)
    eax_4 = *(arg2 + 0x4c)

*(arg1 + 0x18) = std::_Maklocwcs(eax_4)
int16_t* eax_6
eax_6.w = **(arg2 + 0x40)
*(arg1 + 0xc) = eax_6.w
int16_t* result
result.w = **(arg2 + 0x44)
*(arg1 + 0xe) = result.w
return result
