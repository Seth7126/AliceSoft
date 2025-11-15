// 函数: sub_4f5090
// 地址: 0x4f5090
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t xmm3
int32_t xmm0 = xmm3
int32_t* esi = *(arg1 + 0x5c)
int32_t xmm2
int32_t xmm1 = xmm2
int32_t eax_1 = *(arg1 + 0x60)
int32_t var_c = xmm0
int32_t var_8 = xmm1
uint32_t ebx_3 = (eax_1 - esi + 3) u>> 2
int32_t edi = 0

if (esi u> eax_1)
    ebx_3 = 0

if (ebx_3 != 0)
    do
        int32_t var_20_1 = xmm0
        int32_t var_24_1 = xmm1
        sub_4f3550(*esi, 0, 0, arg2)
        int16_t top = top + 1
        xmm0 = var_c
        esi = &esi[1]
        xmm1 = var_8
        edi += 1
    while (edi != ebx_3)

int32_t var_20_2 = xmm0
int32_t var_24_2 = xmm1
return sub_4f3550(*(arg1 + 0x58), 0, 0, arg2)
