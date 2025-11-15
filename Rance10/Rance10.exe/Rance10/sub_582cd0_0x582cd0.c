// 函数: sub_582cd0
// 地址: 0x582cd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

__Smtx_lock_shared(arg1 + 0x200)
int32_t esi = *(arg1 + 0x1fc)
__Smtx_unlock_shared(arg1 + 0x200)

if (esi == 0 || arg4 s< 0 || arg4 s>= (*(arg1 + 0x168) - *(arg1 + 0x164)) s>> 6)
    *arg2 = *arg3
    arg2[2] = arg3[1].d
    return arg2

EnterCriticalSection(*(arg1 + 0x70) + 4)
int32_t eax_6 = *(arg1 + 0x68)
int64_t xmm0 = *(arg1 + 0x60)
LeaveCriticalSection(*(arg1 + 0x70) + 4)
int32_t var_168 = eax_6
int32_t var_16c = xmm0:4.d
int32_t var_170 = xmm0.d
void var_c8
sub_561770(&var_c8)
int32_t var_178 = *(arg1 + 0xc8)
int32_t var_18c = *(arg1 + 0xc4)
float var_108
sub_5868a0(&var_108, *(arg1 + 0xc0))
float xmm3 = var_108
float var_154 = xmm3 f* *(arg1 + 0x1c)
float var_f4
float var_150 = *(arg1 + 0x20) * var_f4
float var_e0
float var_14c = *(arg1 + 0x24) * var_e0
int32_t var_148 = *(arg1 + 0x28)
float var_144 = *(arg1 + 0x2c) * xmm3
float var_140 = *(arg1 + 0x30) * var_f4
float var_13c = *(arg1 + 0x34) * var_e0
int32_t var_138 = *(arg1 + 0x38)
float var_134 = *(arg1 + 0x3c) * xmm3
float var_130 = *(arg1 + 0x40) * var_f4
float var_12c = *(arg1 + 0x44) * var_e0
int32_t var_128 = *(arg1 + 0x48)
float var_124 = *(arg1 + 0x4c) * xmm3
float var_120 = *(arg1 + 0x50) * var_f4
float var_11c = *(arg1 + 0x54) * var_e0
int32_t var_118 = *(arg1 + 0x58)
float var_88[0x4][0x4]
float (* eax_10)[0x4] = sub_6cb020(arg1 + 0x80, &var_154, &var_88, arg1 + 0x80)
float xmm1_2 = (*eax_10)[3]
float var_148_1 = xmm1_2
int128_t* esi_3 = (arg4 << 6) + *(arg1 + 0x164)
float var_98
var_154 = xmm1_2 * var_98 + *eax_10
float var_94
float var_150_1 = xmm1_2 * var_94 + (*eax_10)[1]
float xmm1_3 = (*eax_10)[7]
float var_138_1 = xmm1_3
float var_90
float var_14c_1 = xmm1_2 * var_90 + (*eax_10)[2]
float var_144_1 = xmm1_3 * var_98 + eax_10[1][0]
float var_140_1 = xmm1_3 * var_94 + (*eax_10)[5]
float xmm1_4 = (*eax_10)[0xb]
float var_128_1 = xmm1_4
float var_13c_1 = xmm1_3 * var_90 + (*eax_10)[6]
float var_134_1 = xmm1_4 * var_98 + eax_10[2][0]
float var_130_1 = xmm1_4 * var_94 + (*eax_10)[9]
float xmm1_5 = (*eax_10)[0xf]
float var_118_1 = xmm1_5
float var_12c_1 = xmm1_4 * var_90 + (*eax_10)[0xa]
float var_124_1 = xmm1_5 * var_98 + eax_10[3][0]
float var_120_1 = xmm1_5 * var_94 + (*eax_10)[0xd]
float var_11c_1 = xmm1_5 * var_90 + (*eax_10)[0xe]
float var_48[0x4][0x4]
sub_6ca8d0(arg3, arg2, sub_6cb020(&var_154, esi_3, &var_48, &var_154))
return arg2
