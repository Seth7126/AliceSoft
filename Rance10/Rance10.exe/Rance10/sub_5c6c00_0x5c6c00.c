// 函数: sub_5c6c00
// 地址: 0x5c6c00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* edx = *(arg2 + 4)

if (&edx[0x14] u> *(arg2 + 8))
    void* eax
    eax.b = 0
    return eax

uint32_t ecx_6 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
*(arg2 + 4) = &edx[4]
uint32_t ecx_13 = ((zx.d(edx[7]) << 8 | zx.d(edx[6])) << 8 | zx.d(edx[5])) << 8 | zx.d(edx[4])
*(arg2 + 4) = &edx[8]
uint32_t var_8 = ecx_13
uint32_t esi_4 = (zx.d(edx[0xb]) << 8 | zx.d(edx[0xa])) << 8 | zx.d(edx[9])
uint32_t eax_9 = zx.d(edx[8])
*(arg2 + 4) = &edx[0xc]
uint32_t i_2 = ((zx.d(edx[0xf]) << 8 | zx.d(edx[0xe])) << 8 | zx.d(edx[0xd])) << 8 | zx.d(edx[0xc])
*(arg2 + 4) = &edx[0x10]
uint32_t i_3 =
    ((zx.d(edx[0x13]) << 8 | zx.d(edx[0x12])) << 8 | zx.d(edx[0x11])) << 8 | zx.d(edx[0x10])
*(arg2 + 4) = &edx[0x14]
*(arg1 + 0x1c) = ecx_6.q
uint32_t i = i_2
*(arg1 + 0x24) = esi_4 << 8 | eax_9

if (not(0f f<= i))
    do
        i = i f+ 360f
    while (0 f> i)

if (not(i f< 360f))
    do
        i = i f- 360f
    while (i f>= 360f)

*(arg1 + 0x28) = i
uint32_t i_1 = i_3

if (not(0 f<= i_1))
    do
        i_1 = i_1 f+ 360f
    while (0 f> i_1)

if (not(i_1 f< 360f))
    do
        i_1 = i_1 f- 360f
    while (i_1 f>= 360f)

*(arg1 + 0x2c) = i_1
void* eax_16
eax_16.b = 1
return eax_16
