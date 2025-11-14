// 函数: sub_47cb30
// 地址: 0x47cb30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4_1 = arg1
int32_t eax = 0
int32_t esi = arg2
int32_t* edx = arg1 + 8
int32_t* ebx = edx
int32_t i_6 = 0x11
int32_t i

do
    int32_t j_1 = 0x20
    int32_t j
    
    do
        esi = esi * 0x5d588b65 + 1
        eax = eax u>> 1 | (esi & 0x80000000)
        j = j_1
        j_1 -= 1
    while (j != 1)
    *ebx = eax
    ebx = &ebx[1]
    i = i_6
    i_6 -= 1
while (i != 1)
int32_t i_7 = 0x1f8
void* esi_2 = arg1 + 0xc
*(arg1 + 0x48) = *(arg1 + 0x48) << 0x17 ^ *edx u>> 9 ^ *(arg1 + 0x44)
int32_t i_1

do
    int32_t ecx_6 = *(esi_2 - 4)
    esi_2 += 4
    *(esi_2 + 0x3c) = ecx_6 << 0x17 ^ *(esi_2 + 0x38) ^ *(esi_2 - 4) u>> 9
    i_1 = i_7
    i_7 -= 1
while (i_1 != 1)
int32_t i_4 = i_7 + 8
int32_t i_2

do
    int32_t eax_6 = edx[0x1e9]
    edx = &edx[4]
    edx[-4] ^= eax_6
    edx[-3] ^= edx[0x1e6]
    edx[-2] ^= edx[0x1e7]
    edx[-1] ^= edx[0x1e8]
    i_2 = i_4
    i_4 -= 1
while (i_2 != 1)
void* ecx_10 = arg1 + 0x88
int32_t i_5 = 0xa3
int32_t i_3

do
    int32_t eax_10 = *(ecx_10 - 0x80)
    ecx_10 += 0xc
    *(ecx_10 - 0xc) ^= eax_10
    *(ecx_10 - 8) ^= *(ecx_10 - 0x88)
    *(ecx_10 - 4) ^= *(ecx_10 - 0x84)
    i_3 = i_5
    i_5 -= 1
while (i_3 != 1)
sub_47cac0(arg1)
void* result = sub_47cac0(arg1)
*(arg1 + 4) = 0x208
return result
