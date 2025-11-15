// 函数: sub_4ae160
// 地址: 0x4ae160
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = &arg2
int32_t* ecx = arg1 + 0x10

if (arg2 s>= *(arg1 + 0x18))
    esi = arg1 + 0x18

int32_t* edx_1 = &arg3

if (*(arg1 + 0x10) s< *esi)
    ecx = esi

int32_t esi_1 = *ecx

if (arg3 s>= *(arg1 + 0x1c))
    edx_1 = arg1 + 0x1c

int32_t* ecx_2 = arg1 + 0x14

if (*(arg1 + 0x14) s< *edx_1)
    ecx_2 = edx_1

int32_t result = *ecx_2

if (*(arg1 + 4) != esi_1 || *(arg1 + 8) != result)
    *(arg1 + 4) = esi_1
    *(arg1 + 8) = result
    *(arg1 + 0x72) = 1

return result
