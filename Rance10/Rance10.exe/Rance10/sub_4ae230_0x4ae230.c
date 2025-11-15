// 函数: sub_4ae230
// 地址: 0x4ae230
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = &arg2
int32_t* edx = arg1 + 0x10

if (arg2 s>= 0x7d0)
    esi = &data_76178c

if (*(arg1 + 0x10) s< *esi)
    edx = esi

int32_t esi_1 = *edx
int32_t* edx_1 = &arg3

if (arg3 s>= 0x7d0)
    edx_1 = &data_76178c

int32_t* ecx = arg1 + 0x14

if (*(arg1 + 0x14) s< *edx_1)
    ecx = edx_1

int32_t result = *ecx

if (*(arg1 + 0x18) == esi_1 && *(arg1 + 0x1c) == result)
    return result

bool cond:3_1 = *(arg1 + 0x70) != 0
*(arg1 + 0x1c) = result
int32_t eax_2 = 0x18
*(arg1 + 0x18) = esi_1

if (not(cond:3_1))
    eax_2 = *(arg1 + 8)

return sub_4ae160(arg1, *(arg1 + 4), eax_2)
