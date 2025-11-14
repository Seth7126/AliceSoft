// 函数: sub_683450
// 地址: 0x683450
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0
int32_t var_8 = 0x9c97
int16_t var_4 = 0x205
sub_6709c0(arg1 + 0x144, &var_c)
var_c = 1
int32_t var_8_1 = 0x9c98
int16_t var_4_1 = 0x205
sub_6709c0(arg1 + 0x144, &var_c)
var_c = 2
int32_t var_8_2 = 0
int16_t var_4_2 = 0x104
sub_6709c0(arg1 + 0x144, &var_c)
var_c = 3
int32_t var_8_3 = 0x9c9a
int16_t var_4_3 = 4
sub_6709c0(arg1 + 0x144, &var_c)
var_c = 4
int32_t var_8_4 = 0x9c9b
int16_t var_4_4 = 4
sub_6709c0(arg1 + 0x144, &var_c)
var_c = 5
int32_t var_8_5 = 0
int16_t var_4_5 = 0x104
sub_6709c0(arg1 + 0x144, &var_c)
var_c = 6
int32_t var_8_6 = 0x9ca0
int16_t var_4_6 = 0x205
sub_6709c0(arg1 + 0x144, &var_c)
int32_t var_34 = *(*(arg1 + 4) + 0x14)
void var_40
sub_6708c0(arg1 + 0x13c, arg2, var_40)
sub_684950(arg1)
int32_t eax_1 = *(arg1 + 0x30)
*(arg1 + 0x108) = arg2
*(arg1 + 0x124) = arg2
*(arg1 + 0x16c) = eax_1
sub_697f40(arg1 + 0x164)
HGDIOBJ ho = *(arg1 + 0x194)

if (ho != 0)
    DeleteObject(ho)
    *(arg1 + 0x194) = 0

*(arg1 + 0x1a0) = 0
uint32_t ecx_11 = zx.d(*(arg1 + 0x1a0)) << 8
*(arg1 + 0x19c) = 0
uint32_t ecx_12 = ecx_11 | zx.d(*(arg1 + 0x19c))
*(arg1 + 0x198) = 0xff
*(arg1 + 0x194) = CreateSolidBrush(ecx_12 << 8 | zx.d(*(arg1 + 0x198)))
HGDIOBJ ho_1 = *(arg1 + 0x1a8)

if (ho_1 != 0)
    DeleteObject(ho_1)
    *(arg1 + 0x1a8) = 0

*(arg1 + 0x1b4) = 0xc8
uint32_t ecx_16 = zx.d(*(arg1 + 0x1b4)) << 8
*(arg1 + 0x1b0) = 0xc8
uint32_t ecx_17 = ecx_16 | zx.d(*(arg1 + 0x1b0))
*(arg1 + 0x1ac) = 0xc8
*(arg1 + 0x1a8) = CreateSolidBrush(ecx_17 << 8 | zx.d(*(arg1 + 0x1ac)))
return 0
