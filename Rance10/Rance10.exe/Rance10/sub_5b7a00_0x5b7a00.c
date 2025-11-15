// 函数: sub_5b7a00
// 地址: 0x5b7a00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
sub_5b7ba0(arg1 + 0xb0)
void* esi = *(arg1 + 0xa4)

if (esi != 0)
    int32_t eax_1
    int32_t edx_1
    edx_1:eax_1 = muls.dp.d(0x2aaaaaab, *(arg1 + 0xac) - esi)
    int32_t edx_2 = edx_1 s>> 1
    sub_403160(esi, (edx_2 u>> 0x1f) + edx_2, 0xc)
    *(arg1 + 0xa4) = 0
    *(arg1 + 0xa8) = 0
    *(arg1 + 0xac) = 0

int32_t eax_5 = *(arg1 + 0x98)
void* esi_1 = arg1 + 0x84

if (eax_5 u>= 0x10)
    sub_403160(*esi_1, eax_5 + 1, 1)

*(esi_1 + 0x14) = 0xf
bool cond:0 = *(esi_1 + 0x14) u< 0x10
*(esi_1 + 0x10) = 0

if (not(cond:0))
    esi_1 = *esi_1

*esi_1 = 0
void* esi_2 = *(arg1 + 0x78)

if (esi_2 != 0)
    int32_t eax_7
    int32_t edx_3
    edx_3:eax_7 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x80) - esi_2)
    int32_t edx_4 = edx_3 s>> 2
    sub_403160(esi_2, (edx_4 u>> 0x1f) + edx_4, 0x18)
    *(arg1 + 0x78) = 0
    *(arg1 + 0x7c) = 0
    *(arg1 + 0x80) = 0

sub_5bcd60(arg1 + 0x6c)
int32_t* ecx_6 = *(arg1 + 0x60)

if (ecx_6 != 0)
    int32_t* var_10_1 = ecx_6
    sub_5be530(ecx_6, *(arg1 + 0x64))
    void* ecx_7 = *(arg1 + 0x60)
    sub_403160(ecx_7, (*(arg1 + 0x68) - ecx_7) s>> 2, 4)
    *(arg1 + 0x60) = 0
    *(arg1 + 0x64) = 0
    *(arg1 + 0x68) = 0

sub_5bce50(arg1 + 0x54)
int32_t* eax_14 = *(arg1 + 0x48)
int32_t* var_10_2 = eax_14
sub_5bd5f0(arg1 + 0x48, &var_4, *eax_14)
sub_403160(*(arg1 + 0x48), 1, 0x18)
sub_5bcf50(arg1 + 0x38)
int32_t eax_15 = *(arg1 + 0x1c)

if (eax_15 u>= 0x10)
    eax_15 = sub_403160(*(arg1 + 8), eax_15 + 1, 1)

*(arg1 + 0x1c) = 0xf
bool cond:1 = *(arg1 + 0x1c) u< 0x10
*(arg1 + 0x18) = 0

if (cond:1)
    *(arg1 + 8) = 0
    return eax_15

char* eax_17 = *(arg1 + 8)
*eax_17 = 0
return eax_17
