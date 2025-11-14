// 函数: sub_57c7e0
// 地址: 0x57c7e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4_1 = arg1
int32_t edx_4

if (arg3 s>= 0)
    int32_t eax_1
    int32_t edx_3
    edx_3:eax_1 = muls.dp.d(0x78787879, *(arg2 + 0x1c) - *(arg2 + 0x18))
    edx_4 = edx_3 s>> 5

int32_t ebx_4

if (arg3 s< 0 || arg3 s>= (edx_4 u>> 0x1f) + edx_4)
    ebx_4 = 0
else
    int32_t eax_5 = *(arg2 + 0x18)
    int32_t ecx_2 = arg3 * 0x11
    int32_t eax_6
    int32_t edx_7
    edx_7:eax_6 =
        muls.dp.d(0x2aaaaaab, *(eax_5 + (ecx_2 << 2) + 0x20) - *(eax_5 + (ecx_2 << 2) + 0x1c))
    int32_t edx_8 = edx_7 s>> 2
    ebx_4 = (edx_8 u>> 0x1f) + edx_8

int32_t eax_7
int32_t edx_9
edx_9:eax_7 = muls.dp.d(0x38e38e39, *(arg1 + 0x5c) - *(arg1 + 0x58))
int32_t edx_10 = edx_9 s>> 3
int32_t eax_8
int32_t edx_11
edx_11:eax_8 = muls.dp.d(0x38e38e39, *(arg1 + 0x5c) - *(arg1 + 0x58))
int32_t edx_12 = edx_11 s>> 3
sub_57ed00(arg1 + 0x58, (edx_12 u>> 0x1f) + edx_12 + ebx_4)
int32_t esi_1 = 0

if (ebx_4 s> 0)
    int32_t edi_5 = ((edx_10 u>> 0x1f) + edx_10) * 0x24
    
    do
        int32_t* ecx_9 = *(arg1 + 0x58) + edi_5
        
        if (sub_5784e0(arg2, arg3, esi_1, ecx_9, &ecx_9[1], &ecx_9[2], &ecx_9[3], &ecx_9[6]) == 0)
            return 0
        
        esi_1 += 1
        edi_5 += 0x24
    while (esi_1 s< ebx_4)

return 1
