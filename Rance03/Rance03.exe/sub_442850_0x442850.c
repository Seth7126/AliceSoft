// 函数: sub_442850
// 地址: 0x442850
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t edx_3 =
    zx.d(*arg2) + (zx.d(arg2[1]) << 8) + (zx.d(arg2[2]) << 0x10) + (zx.d(arg2[3]) << 0x18)
*(arg1 + 4) = edx_3

if (edx_3 != 3)
    uint32_t var_24_1 = edx_3
    sub_455870("APEG ")
    int32_t* eax_6
    eax_6.b = 0
    return eax_6

*(arg1 + 8) = zx.d(arg2[4]) + (zx.d(arg2[5]) << 8)
void* esi_1 = &arg2[8]
*(arg1 + 0xc) = zx.d(arg2[6]) + (zx.d(arg2[7]) << 8)
uint32_t eax_10

for (int32_t i = 0; i s< 0x40; i += 1)
    eax_10.b = *esi_1
    esi_1 += 1
    *(arg1 + i + 0x10) = eax_10.b

for (int32_t i_1 = 0; i_1 s< 0x40; i_1 += 1)
    eax_10.b = *esi_1
    esi_1 += 1
    *(arg1 + i_1 + 0x50) = eax_10.b

*(arg1 + 0x90) = zx.d(*esi_1) + (zx.d(*(esi_1 + 1)) << 8) + (zx.d(*(esi_1 + 2)) << 0x10)
    + (zx.d(*(esi_1 + 3)) << 0x18)
uint32_t edi_2 = zx.d(*(esi_1 + 4)) + (zx.d(*(esi_1 + 5)) << 8) + (zx.d(*(esi_1 + 6)) << 0x10)
void*** eax_22 = zx.d(*(esi_1 + 7)) << 0x18
void* esi_2 = esi_1 + 8
void* i_3 = edi_2 + eax_22

if (edi_2 != neg.d(eax_22))
    void* i_2
    
    do
        uint32_t eax_23 = zx.d(*(esi_2 + 1))
        esi_2 += 8
        uint32_t ecx_9 = zx.d(*(esi_2 - 4)) + (zx.d(*(esi_2 - 3)) << 8)
        uint32_t var_10 = zx.d(*(esi_2 - 8)) + (eax_23 << 8) + (zx.d(*(esi_2 - 6)) << 0x10)
            + (zx.d(*(esi_2 - 5)) << 0x18)
        uint32_t var_c_1 = ecx_9 + (zx.d(*(esi_2 - 2)) << 0x10) + (zx.d(*(esi_2 - 1)) << 0x18)
        int32_t* eax_35
        int32_t ecx_13
        eax_35, ecx_13 = sub_442a00(&var_10)
        int32_t* var_24_3 = eax_35
        void* var_28_1 = &eax_35[4]
        void** var_8
        sub_420820(arg1 + 0x94, &var_8, ecx_13)
        i_2 = i_3
        i_3 -= 1
    while (i_2 != 1)

eax_22.b = 1
return eax_22
