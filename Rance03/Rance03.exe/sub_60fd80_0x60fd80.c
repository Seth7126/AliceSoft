// 函数: sub_60fd80
// 地址: 0x60fd80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edx = arg1[1]
int32_t ebp = *arg1
int32_t ecx_2 = (edx - ebp) s>> 2

if (ecx_2 u> 8)
    arg1[1] = edx + ((8 - ecx_2) << 2)
    return 

if (ecx_2 u>= 8)
    return 

int32_t* edi_1 = arg2

if (edi_1 u>= edx || ebp u> edi_1)
    sub_415950(arg1, 8 - ecx_2)
else
    sub_415950(arg1, 8 - ecx_2)
    edi_1 = *arg1 + ((edi_1 - ebp) s>> 2 << 2)

void* edx_1 = arg1[1]
int32_t eax_8 = (edx_1 - *arg1) s>> 2
int32_t i_1 = 8 - eax_8

if (8 != eax_8)
    int32_t i
    
    do
        edx_1 += 4
        *(edx_1 - 4) = *edi_1
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t ecx_5 = arg1[1]
arg1[1] = ecx_5 + ((8 - ((ecx_5 - *arg1) s>> 2)) << 2)
