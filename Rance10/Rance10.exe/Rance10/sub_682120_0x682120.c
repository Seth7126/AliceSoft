// 函数: sub_682120
// 地址: 0x682120
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t ebx = arg2
char* edx = *(ebx + 4)
int32_t ecx = *(ebx + 8)

if (&edx[4] u> ecx)
    int32_t eax
    eax.b = 0
    return eax

uint32_t i_1 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
*(ebx + 4) = &edx[4]
void* eax_5

if (&edx[4 + i_1 * 0x14] u> ecx)
    eax_5.b = 0
    return eax_5

if (i_1 s> 0)
    uint32_t i
    
    do
        char* ecx_1 = *(ebx + 4)
        uint32_t edx_5 = (zx.d(ecx_1[3]) << 8 | zx.d(ecx_1[2])) << 8 | zx.d(ecx_1[1])
        uint32_t eax_8 = zx.d(*ecx_1)
        *(ebx + 4) = &ecx_1[4]
        uint32_t ecx_8 =
            ((zx.d(ecx_1[7]) << 8 | zx.d(ecx_1[6])) << 8 | zx.d(ecx_1[5])) << 8 | zx.d(ecx_1[4])
        *(ebx + 4) = &ecx_1[8]
        uint32_t var_c_1 = ecx_8
        uint32_t ecx_15 =
            ((zx.d(ecx_1[0xb]) << 8 | zx.d(ecx_1[0xa])) << 8 | zx.d(ecx_1[9])) << 8 | zx.d(ecx_1[8])
        *(ebx + 4) = &ecx_1[0xc]
        uint32_t var_8_1 = ecx_15
        uint32_t ecx_22 = ((zx.d(ecx_1[0xf]) << 8 | zx.d(ecx_1[0xe])) << 8 | zx.d(ecx_1[0xd])) << 8
            | zx.d(ecx_1[0xc])
        *(ebx + 4) = &ecx_1[0x10]
        uint32_t var_4_1 = ecx_22
        uint32_t ecx_29 =
            ((zx.d(ecx_1[0x13]) << 8 | zx.d(ecx_1[0x12])) << 8 | zx.d(ecx_1[0x11])) << 8
            | zx.d(ecx_1[0x10])
        *(ebx + 4) = &ecx_1[0x14]
        arg2 = ecx_29
        void* var_18
        sub_682b80(arg1 + 0x2c, &var_18, &arg2)
        *(var_18 + 0x14) = (edx_5 << 8 | eax_8).o
        i = i_1
        i_1 -= 1
    while (i != 1)

eax_5.b = 1
return eax_5
