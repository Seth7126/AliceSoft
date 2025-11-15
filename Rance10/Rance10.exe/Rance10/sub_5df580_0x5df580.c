// 函数: sub_5df580
// 地址: 0x5df580
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = *arg1
int32_t edi = arg1[1]

if (esi == edi)
    return 

int32_t* ebx_1 = arg2

do
    int32_t* ebp_1 = *esi
    int32_t ecx_1 = *(arg3 + 0x6c)
    int32_t edx_1 = *ebp_1 * 9
    *ebx_1 = *(ecx_1 + (edx_1 << 2))
    ebx_1[1] = *(ecx_1 + (edx_1 << 2) + 4)
    ebx_1[2] = *(ecx_1 + (edx_1 << 2) + 8)
    int32_t edx_2 = ebp_1[1] * 3
    int32_t ecx_2 = *(arg3 + 0x78)
    ebx_1[3] = *(ecx_2 + (edx_2 << 3))
    ebx_1[4] = *(ecx_2 + (edx_2 << 3) + 4)
    ebx_1[5] = *(ecx_2 + (edx_2 << 3) + 8)
    int32_t* ecx_4
    
    if (arg5 == 0)
        ecx_4 = &data_7fd4d8
    else
        ecx_4 = *(arg3 + 0xa4) + *ebp_1 * 0xc
    
    ebx_1[6] = *ecx_4
    ebx_1[7] = ecx_4[1]
    ebx_1[8] = ecx_4[2]
    ebx_1[9] = ebp_1[2]
    uint32_t eax_19
    
    if (arg6 == 0)
        eax_19 = 0xffffffff
    else
        eax_19 = zx.d(*(*esi + 0x24)) << 0x18
    
    ebx_1[0xa] = eax_19
    int32_t* ecx_5 = *esi
    void* edx_3 = &ecx_5[5]
    ebx_1[0xb] = ecx_5[3]
    ebx_1[0xc] = ecx_5[4]
    
    if (arg4 == 0)
        edx_3 = &data_7fd504
    
    ebx_1[0xd] = *edx_3
    int32_t* edx_4 = &ecx_5[7]
    ebx_1[0xe] = *(edx_3 + 4)
    
    if (arg6 == 0)
        edx_4 = &data_7fd504
    
    ebx_1[0xf] = *edx_4
    ebx_1[0x10] = edx_4[1]
    arg2 = &ebx_1[0x11]
    
    if (arg7 == 0)
        ebx_1[0x11] = 0
        ebx_1[0x12] = 0x3f800000
        ebx_1[0x13] = 0
        ebx_1[0x14] = 0
        ebx_1[0x15] = 0
        ebx_1 = &ebx_1[0x16]
    else
        int32_t* eax_29 = *(arg3 + 0x6c) + *ecx_5 * 0x24 + 0x18
        sub_5df6e0(eax_29.b, &esi[1], &arg2, eax_29)
        ebx_1 = arg2
    
    esi = &esi[4]
while (esi != edi)
