// 函数: sub_404210
// 地址: 0x404210
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1

if (arg2 s< 0x28)
    void* eax
    eax.b = 1
    return eax

*(arg1 + 0x14) = *(arg1 + 0x10)
char* ecx_2 = *(arg3 + 4)

if (&ecx_2[4] u> *(arg3 + 8))
    int32_t eax_1
    eax_1.b = 0
    return eax_1

int32_t ebp = 0
uint32_t ebx_6 = ((zx.d(ecx_2[3]) << 8 | zx.d(ecx_2[2])) << 8 | zx.d(ecx_2[1])) << 8 | zx.d(*ecx_2)
*(arg3 + 4) = &ecx_2[4]

if (ebx_6 s> 0)
    do
        char* edx_1 = *(arg3 + 4)
        
        if (&edx_1[4] u> *(arg3 + 8))
            goto label_404355
        
        uint32_t ecx_9 =
            ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        *(arg3 + 4) = &edx_1[4]
        arg2 = ecx_9
        sub_404370(arg1 + 0x10, &arg2)
        ebp += 1
    while (ebp s< ebx_6)

*(arg1 + 0x20) = *(arg1 + 0x1c)
char* ecx_12 = *(arg3 + 4)
uint32_t eax_4

if (&ecx_12[4] u> *(arg3 + 8))
label_404355:
    eax_4.b = 0
    return eax_4

int32_t ebp_1 = 0
uint32_t ebx_13 =
    ((zx.d(ecx_12[3]) << 8 | zx.d(ecx_12[2])) << 8 | zx.d(ecx_12[1])) << 8 | zx.d(*ecx_12)
*(arg3 + 4) = &ecx_12[4]

if (ebx_13 s> 0)
    do
        char* edx_3 = *(arg3 + 4)
        
        if (&edx_3[4] u> *(arg3 + 8))
            goto label_404355
        
        uint32_t ecx_19 =
            ((zx.d(edx_3[3]) << 8 | zx.d(edx_3[2])) << 8 | zx.d(edx_3[1])) << 8 | zx.d(*edx_3)
        *(arg3 + 4) = &edx_3[4]
        arg2 = ecx_19
        sub_404370(arg1 + 0x1c, &arg2)
        ebp_1 += 1
    while (ebp_1 s< ebx_13)

eax_4.b = 1
return eax_4
