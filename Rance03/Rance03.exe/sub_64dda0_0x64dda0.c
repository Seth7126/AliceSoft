// 函数: sub_64dda0
// 地址: 0x64dda0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4_1 = arg1
int32_t ebx = *(arg1 + 0x14)
int32_t edi = *(arg1 + 0x118)
int32_t eax_3
int32_t edx
edx:eax_3 = sx.q(arg4[4] * ebx)
int32_t eax_5 = (eax_3 - edx) s>> 1
char ecx_1

if (edi s>= arg3 || *(arg1 + 0x120) s<= ebx + arg3)
    ecx_1 = 0
else
    ecx_1 = 1

char eax_7

if (*(arg1 + 0x120) s>= arg3 || edi s<= ebx + arg3)
    eax_7 = 0
else
    eax_7 = 1

int32_t esi_1 = arg2 - int.d(_mm_cvtepi32_pd(zx.q(eax_5)) * -0.80000000000000004)
int32_t esi_2 = *(arg1 + 0x120)
char eax_13

if (*(arg1 + 0x114) s> esi_1 || edi s< arg3 || edi s> ebx + arg3 || *(arg1 + 0x11c) s< eax_5 + arg2
        || esi_2 s< arg3 || esi_2 s> ebx + arg3)
    eax_13 = 0
else
    eax_13 = 1

int32_t eax_15

if (*(arg1 + 0x114) s<= esi_1 && edi s>= arg3)
    eax_15 = ebx + arg3

char eax_16

if (*(arg1 + 0x114) s> esi_1 || edi s< arg3 || edi s> eax_15 || esi_2 s<= eax_15)
    eax_16 = 0
else
    eax_16 = 1

int32_t eax_19

if (*(arg1 + 0x114) s>= eax_5 + arg2 && edi s>= arg3)
    eax_19 = ebx + arg3

char eax_20

if (*(arg1 + 0x114) s< eax_5 + arg2 || edi s< arg3 || edi s> eax_19 || *(arg1 + 0x11c) s> esi_1
        || esi_2 s< arg3 || esi_2 s> eax_19)
    eax_20 = 0
else
    eax_20 = 1

int32_t edi_1 = *(arg1 + 0x118)
int32_t ebx_2 = *(arg1 + 0x14)
char eax_24

if (*(arg1 + 0x114) s< eax_5 + arg2 || edi_1 s< arg3 || edi_1 s> ebx_2 + arg3 || esi_2 s>= arg3)
    eax_24 = 0
else
    eax_24 = 1

char eax_28

if (edi_1 s>= arg3 || *(arg1 + 0x11c) s< eax_5 + arg2 || esi_2 s< arg3 || esi_2 s> ebx_2 + arg3)
    eax_28 = 0
else
    eax_28 = 1

int32_t eax_29 = ebx_2 + arg3
char result

if (edi_1 s<= eax_29 || *(arg1 + 0x11c) s> esi_1 || esi_2 s< arg3 || esi_2 s> eax_29)
    result = 0
else
    result = 1

result |= ecx_1 | eax_7 | eax_13 | eax_16 | eax_20 | eax_24 | eax_28

if (result == 0)
    return result

if (sub_40c250(arg4, 0x700784) == 0)
    return sub_403110(arg5, arg4, nullptr, 0xffffffff)

return sub_4057c0(arg5, 0x700788, 2)
