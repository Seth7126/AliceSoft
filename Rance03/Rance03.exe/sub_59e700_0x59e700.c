// 函数: sub_59e700
// 地址: 0x59e700
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t i = 0
int32_t ecx = *arg2
char* edi = *arg1

if (((arg2[1] - ecx) & 0xfffffffc) s<= 0)
label_59e744:
    __builtin_memset(__builtin_memset(edi, 0, (4 - i) u>> 2 << 2), 0, (4 - i) & 3)
else
    do
        int32_t eax_1
        eax_1.b = *(ecx + (i << 2))
        i += 1
        *edi = eax_1.b
        edi = &edi[1]
        ecx = *arg2
    while (i s< (arg2[1] - ecx) s>> 2)
    
    if (i s< 4)
        goto label_59e744

*arg1 += 4
int32_t* edx_1 = *arg1
int32_t eax_4 = arg3[1]
int32_t edi_2 = *arg3

if (edi_2 == eax_4)
    *edx_1 = 0x3f800000
    *arg1 = &edx_1[4]
    edx_1[1] = 0
    edx_1[2] = 0
    edx_1[3] = 0
    return &edx_1[4]

int32_t ecx_5 = 0
int32_t result

if (((eax_4 - edi_2) & 0xfffffffc) s<= 0)
label_59e7b3:
    result = 4 - ecx_5
    
    if (result s>= 4)
        int32_t i_3 = (neg.d(ecx_5) u>> 2) + 1
        ecx_5 += i_3 << 2
        int32_t i_1
        
        do
            int32_t* eax_10 = *arg1
            *eax_10 = 0
            eax_10[1] = 0
            eax_10[2] = 0
            eax_10[3] = 0
            result = &eax_10[4]
            *arg1 = result
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    if (ecx_5 s< 4)
        int32_t i_4 = 4 - ecx_5
        int32_t i_2
        
        do
            int32_t* eax_11 = *arg1
            *eax_11 = 0
            result = &eax_11[1]
            *arg1 = result
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)
else
    do
        int32_t eax_7 = *(edi_2 + (ecx_5 << 2))
        ecx_5 += 1
        *edx_1 = eax_7
        edx_1 = &edx_1[1]
        *arg1 = edx_1
        edi_2 = *arg3
        result = (arg3[1] - edi_2) s>> 2
    while (ecx_5 s< result)
    
    if (ecx_5 s< 4)
        goto label_59e7b3

return result
