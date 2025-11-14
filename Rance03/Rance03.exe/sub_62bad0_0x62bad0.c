// 函数: sub_62bad0
// 地址: 0x62bad0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edx = arg1
int32_t esi = 0
uint32_t ebp = zx.d(*(edx + 0x150))
uint32_t i

if (ebp.w != 0)
    i = 0

if (ebp.w == 0 || ebp s<= 0)
label_62bb08:
    *(edx + 0x7c) &= 0xff7fffff
    *(edx + 0x78) &= 0xffffdfff
    
    if (esi == 0)
        *(edx + 0x7c) &= 0xfffffe7f
else
    while (true)
        arg1.b = (*(edx + 0x1b4))[i]
        
        if (arg1.b != 0xff)
            if (arg1.b != 0)
                break
            
            esi = 1
        
        i += 1
        
        if (i s>= ebp)
            goto label_62bb08

int32_t esi_1 = *(edx + 0x7c)

if ((esi_1 & 0x100) == 0 || (esi_1 & 0x1000) == 0)
    return 

char* ecx_1 = zx.d(*(edx + 0x168)) * 3 + *(edx + 0x144)
*(edx + 0x16a) = zx.w(*ecx_1)
*(edx + 0x16c) = zx.w(ecx_1[1])
*(edx + 0x16e) = zx.w(ecx_1[2])

if ((esi_1 & 0x80000) == 0 || (esi_1 & 0x2000000) != 0)
    return 

i = 0

if (ebp s<= 0)
    return 

if (ebp u>= 0x20)
    void* ebx_2 = *(edx + 0x1b4)
    int32_t ecx_3 = ebp & 0x8000001f
    
    if (ecx_3 s< 0)
        ecx_3 = ((ecx_3 - 1) | 0xffffffe0) + 1
    
    int32_t xmm2_1[0x4] = data_7094f0
    ecx_1 = ebx_2 + 0x10
    
    do
        *(ebx_2 + i) = _mm_sub_epi8(xmm2_1, *(ebx_2 + i))
        i += 0x20
        *ecx_1 = _mm_sub_epi8(xmm2_1, *ecx_1)
        ecx_1 = &ecx_1[0x20]
    while (i s< ebp - ecx_3)

if (i s>= ebp)
    return 

int32_t edx_1 = *(edx + 0x1b4)

do
    ecx_1.b = 0xff
    ecx_1.b = 0xff - *(edx_1 + i)
    *(edx_1 + i) = ecx_1.b
    i += 1
while (i s< ebp)
