// 函数: sub_65dc50
// 地址: 0x65dc50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebx = arg1
void* eax = *(ebx + 0x1b8)
int32_t ebp = *(ebx + 0x12c)
int32_t ecx = *(eax + 0x10)
int32_t ecx_1 = *(eax + 0x14)
int32_t ecx_2 = *(eax + 0x18)
int32_t ecx_3 = *(eax + 0x1c)
int32_t edx = arg3 << 2
void* esi = *(edx + *arg2)
arg3 = esi
char* edi = *(edx + arg2[1])
uint32_t ecx_6 = *(ebx + 0x5c) u>> 1
int32_t* edx_1 = *(edx + arg2[2])
uint32_t eax_5 = arg4
arg2 = edx_1
arg4 = ecx_6
char* result = *eax_5

if (ecx_6 != 0)
    uint32_t i
    
    do
        uint32_t edx_2 = zx.d(*edi)
        uint32_t ecx_7 = zx.d(*arg2)
        arg2 += 1
        int32_t edi_2 = *(ecx + (ecx_7 << 2))
        int32_t ebx_7 = (*(ecx_3 + (edx_2 << 2)) + *(ecx_2 + (ecx_7 << 2))) s>> 0x10
        int32_t esi_2 = *(ecx_1 + (edx_2 << 2))
        char* ecx_9 = arg3
        uint32_t edx_3 = zx.d(*ecx_9)
        *result = (edx_3 + edi_2)[ebp]
        result[1] = *(edx_3 + ebx_7 + ebp)
        result[2] = (edx_3 + esi_2)[ebp]
        uint32_t edx_4 = zx.d(ecx_9[1])
        arg3 = &ecx_9[2]
        edi = &edi[1]
        result[3] = (edx_4 + edi_2)[ebp]
        result[4] = *(edx_4 + ebx_7 + ebp)
        result[5] = (edx_4 + esi_2)[ebp]
        result = &result[6]
        i = arg4
        arg4 -= 1
    while (i != 1)
    esi = arg3
    ebx = arg1
    edx_1 = arg2

if ((*(ebx + 0x5c) & 1) != 0)
    uint32_t ecx_25 = zx.d(*edi)
    uint32_t edx_5 = zx.d(*edx_1)
    uint32_t esi_3 = zx.d(*esi)
    int32_t ebx_11 = (*(ecx_3 + (ecx_25 << 2)) + *(ecx_2 + (edx_5 << 2))) s>> 0x10
    int32_t edi_5 = *(ecx_1 + (ecx_25 << 2))
    *result = (*(ecx + (edx_5 << 2)) + esi_3)[ebp]
    result[1] = *(esi_3 + ebx_11 + ebp)
    result[2] = (esi_3 + edi_5)[ebp]

return result
