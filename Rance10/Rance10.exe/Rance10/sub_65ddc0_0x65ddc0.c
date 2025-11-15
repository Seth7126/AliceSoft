// 函数: sub_65ddc0
// 地址: 0x65ddc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebx = arg1
void* ecx = *(ebx + 0x1b8)
int32_t result = *(ebx + 0x12c)
int32_t edx = *(ecx + 0x10)
int32_t edx_1 = *(ecx + 0x14)
int32_t edx_2 = *(ecx + 0x18)
int32_t ecx_1 = *(ecx + 0x1c)
int32_t ecx_2 = *arg2
void* edx_3 = arg3
void* var_20 = *(ecx_2 + (edx_3 << 3) + 4)
arg3 = *(ecx_2 + (edx_3 << 3))
char* edi = *(arg2[1] + (edx_3 << 2))
char* esi_1 = *(arg2[2] + (edx_3 << 2))
int32_t* ecx_6 = arg4
char* ebp_1 = *ecx_6
arg2 = ecx_6[1]
uint32_t ecx_9 = *(ebx + 0x5c) u>> 1
arg4 = ecx_9

if (ecx_9 != 0)
    uint32_t i
    
    do
        uint32_t edx_4 = zx.d(*edi)
        uint32_t ecx_10 = zx.d(*esi_1)
        int32_t edi_2 = *(edx + (ecx_10 << 2))
        int32_t ebx_5 = (*(ecx_1 + (edx_4 << 2)) + *(edx_2 + (ecx_10 << 2))) s>> 0x10
        int32_t esi_4 = *(edx_1 + (edx_4 << 2))
        char* ecx_12 = arg3
        uint32_t edx_5 = zx.d(*ecx_12)
        *ebp_1 = (edx_5 + edi_2)[result]
        ebp_1[1] = *(edx_5 + ebx_5 + result)
        ebp_1[2] = (edx_5 + esi_4)[result]
        uint32_t edx_6 = zx.d(ecx_12[1])
        arg3 = &ecx_12[2]
        ebp_1[3] = (edx_6 + edi_2)[result]
        ebp_1[4] = *(edx_6 + ebx_5 + result)
        ebp_1[5] = (edx_6 + esi_4)[result]
        ebp_1 = &ebp_1[6]
        char* ecx_28 = var_20
        uint32_t edx_7 = zx.d(*ecx_28)
        *arg2 = (edx_7 + edi_2)[result]
        *(arg2 + 1) = *(edx_7 + ebx_5 + result)
        *(arg2 + 2) = (edx_7 + esi_4)[result]
        uint32_t edx_10 = zx.d(ecx_28[1])
        var_20 = &ecx_28[2]
        *(arg2 + 3) = (edi_2 + edx_10)[result]
        arg2[1].b = *(edx_10 + ebx_5 + result)
        esi_1 = &esi_1[1]
        *(arg2 + 5) = (edx_10 + esi_4)[result]
        i = arg4
        arg4 -= 1
        arg2 += 6
        edi = &edi[1]
    while (i != 1)
    ebx = arg1

if ((*(ebx + 0x5c) & 1) != 0)
    uint32_t ecx_45 = zx.d(*esi_1)
    uint32_t edx_11 = zx.d(*edi)
    int32_t edi_6 = *(edx + (ecx_45 << 2))
    int32_t ebx_10 = (*(ecx_1 + (edx_11 << 2)) + *(edx_2 + (ecx_45 << 2))) s>> 0x10
    int32_t esi_6 = *(edx_1 + (edx_11 << 2))
    uint32_t edx_12 = zx.d(*arg3)
    *ebp_1 = (edx_12 + edi_6)[result]
    ebp_1[1] = *(edx_12 + ebx_10 + result)
    ebp_1[2] = (edx_12 + esi_6)[result]
    uint32_t edx_13 = zx.d(*var_20)
    *arg2 = (edx_13 + edi_6)[result]
    *(arg2 + 1) = *(edx_13 + ebx_10 + result)
    result.b = (edx_13 + esi_6)[result]
    *(arg2 + 2) = result.b

return result
