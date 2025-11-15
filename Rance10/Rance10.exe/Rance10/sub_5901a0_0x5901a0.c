// 函数: sub_5901a0
// 地址: 0x5901a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
int32_t* eax = *(arg1 + 0x70)
int32_t* var_10 = eax
sub_5926a0(arg1 + 0x70, &var_4, *eax)
sub_403160(*(arg1 + 0x70), 1, 0x34)
int32_t* eax_1 = *(arg1 + 0x68)
int32_t* var_10_1 = eax_1
sub_5926a0(arg1 + 0x68, &var_4, *eax_1)
sub_403160(*(arg1 + 0x68), 1, 0x34)
int32_t* eax_2 = *(arg1 + 0x60)
int32_t* var_10_2 = eax_2
sub_592760(arg1 + 0x60, &var_4, *eax_2)
sub_403160(*(arg1 + 0x60), 1, 0x34)
int32_t* eax_3 = *(arg1 + 0x58)
int32_t* var_10_3 = eax_3
sub_592760(arg1 + 0x58, &var_4, *eax_3)
sub_403160(*(arg1 + 0x58), 1, 0x34)
void* esi = *(arg1 + 0x4c)

if (esi != 0)
    int32_t eax_4
    int32_t edx_1
    edx_1:eax_4 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x54) - esi)
    int32_t edx_2 = edx_1 s>> 1
    sub_403160(esi, (edx_2 u>> 0x1f) + edx_2, 0xc)
    *(arg1 + 0x4c) = 0
    *(arg1 + 0x50) = 0
    *(arg1 + 0x54) = 0

void* esi_1 = *(arg1 + 0x40)

if (esi_1 != 0)
    int32_t eax_8
    int32_t edx_3
    edx_3:eax_8 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x48) - esi_1)
    int32_t edx_4 = edx_3 s>> 2
    sub_403160(esi_1, (edx_4 u>> 0x1f) + edx_4, 0x18)
    *(arg1 + 0x40) = 0
    *(arg1 + 0x44) = 0
    *(arg1 + 0x48) = 0

void* esi_2 = *(arg1 + 0x34)

if (esi_2 != 0)
    int32_t eax_12
    int32_t edx_5
    edx_5:eax_12 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x3c) - esi_2)
    int32_t edx_6 = edx_5 s>> 2
    sub_403160(esi_2, (edx_6 u>> 0x1f) + edx_6, 0x18)
    *(arg1 + 0x34) = 0
    *(arg1 + 0x38) = 0
    *(arg1 + 0x3c) = 0

sub_592520(arg1 + 0x28)
int32_t eax_16 = *(arg1 + 0x1c)

if (eax_16 u>= 0x10)
    eax_16 = sub_403160(*(arg1 + 8), eax_16 + 1, 1)

*(arg1 + 0x1c) = 0xf
bool cond:0 = *(arg1 + 0x1c) u< 0x10
*(arg1 + 0x18) = 0

if (cond:0)
    *(arg1 + 8) = 0
    return eax_16

char* eax_18 = *(arg1 + 8)
*eax_18 = 0
return eax_18
