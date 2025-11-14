// 函数: sub_4d6570
// 地址: 0x4d6570
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char var_8 = 0
void* ecx = *(arg1 + 0x44)
int32_t eax_3 = (*(arg1 + 0x48) - ecx) s/ 0x5c
sub_4bf4f0(eax_3, *(arg1 + 0x48), ecx, eax_3, var_8.d)
void* ecx_1 = *(arg1 + 0x60)
void* edi_3 = *(arg1 + 0x64) - ecx_1
var_8 = 0
int32_t eax_7 = edi_3 s/ 0x5c
sub_4bf4f0(eax_7, *(arg1 + 0x64), ecx_1, eax_7, var_8.d)
void* i = *(arg1 + 0x44)
int32_t edx_8 = 0
var_8.d = 0

for (; i != *(arg1 + 0x48); i += 0x5c)
    if (edx_8 s< *(i + 0xc))
        edx_8 = *(i + 0xc)

int32_t esi_1 = *(arg1 + 0x64)
int32_t var_4
int32_t* eax_8 = &var_4
var_4 = edx_8

if (edx_8 s<= 0)
    eax_8 = &var_8

int32_t edx_9 = 0
int32_t edi_4 = *eax_8
void* i_1 = *(arg1 + 0x60)
var_8.d = edi_4

for (; i_1 != esi_1; i_1 += 0x5c)
    if (edx_9 s< *(i_1 + 0xc))
        edx_9 = *(i_1 + 0xc)

var_4 = edx_9
int32_t* eax_9 = &var_4

if (edi_4 s>= edx_9)
    eax_9 = &var_8

void* ecx_2 = *(arg1 + 0x94)
int32_t ebp = *eax_9
int32_t eax_10
int32_t edx_12
edx_12:eax_10 = muls.dp.d(0x3e0f83e1, *(arg1 + 0x98) - ecx_2)
var_4.b = 0
int32_t edx_13 = edx_12 s>> 5
var_8.d = ebp
int32_t eax_13 = (edx_13 u>> 0x1f) + edx_13
sub_4d9a10(eax_13, *(arg1 + 0x98), ecx_2, eax_13, var_4)
sub_50c190(arg1 + 0xac, arg1 + 0x90)
int32_t ecx_4 = 0

for (void* i_2 = *(arg1 + 0x94); i_2 != *(arg1 + 0x98); i_2 += 0x84)
    if (ecx_4 s< *(i_2 + 0x34))
        ecx_4 = *(i_2 + 0x34)

var_4 = ecx_4
int32_t* eax_14 = &var_4

if (ebp s>= ecx_4)
    eax_14 = &var_8

return *eax_14
