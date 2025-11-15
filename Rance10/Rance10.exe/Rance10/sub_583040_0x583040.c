// 函数: sub_583040
// 地址: 0x583040
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

__Smtx_lock_shared(arg1 + 0x200)
int32_t esi = *(arg1 + 0x1fc)
__Smtx_unlock_shared(arg1 + 0x200)

if (esi == 0 || arg3 s< 0 || arg3 s>= (*(arg1 + 0x168) - *(arg1 + 0x164)) s>> 6)
    sub_6cac10(arg2)
    return arg2

EnterCriticalSection(*(arg1 + 0x70) + 4)
int32_t eax_6 = *(arg1 + 0x68)
int64_t xmm0 = *(arg1 + 0x60)
LeaveCriticalSection(*(arg1 + 0x70) + 4)
int32_t var_124 = eax_6
int32_t var_128 = xmm0:4.d
int32_t var_12c = xmm0.d
void var_84
sub_561770(&var_84)
int32_t var_134 = *(arg1 + 0xc8)
int32_t var_148 = *(arg1 + 0xc4)
float var_c4
sub_5868a0(&var_c4, *(arg1 + 0xc0))
float xmm3 = var_c4
float var_110 = *(arg1 + 0x1c) * xmm3
float var_b0
float var_10c = *(arg1 + 0x20) * var_b0
float var_9c
float var_108 = *(arg1 + 0x24) * var_9c
int32_t var_104 = *(arg1 + 0x28)
float var_100 = *(arg1 + 0x2c) * xmm3
float var_fc = *(arg1 + 0x30) * var_b0
float var_f8 = *(arg1 + 0x34) * var_9c
int32_t var_f4 = *(arg1 + 0x38)
float var_f0 = *(arg1 + 0x3c) * xmm3
float var_ec = *(arg1 + 0x40) * var_b0
float var_e8 = *(arg1 + 0x44) * var_9c
int32_t var_e4 = *(arg1 + 0x48)
float var_e0 = *(arg1 + 0x4c) * xmm3
float var_dc = *(arg1 + 0x50) * var_b0
float var_d8 = *(arg1 + 0x54) * var_9c
int32_t var_d4 = *(arg1 + 0x58)
float var_44[0x4][0x4]
float (* eax_10)[0x4] = sub_6cb020(arg1 + 0x80, &var_110, &var_44, arg1 + 0x80)
float xmm1_2 = (*eax_10)[3]
float var_104_1 = xmm1_2
int128_t* esi_3 = (arg3 << 6) + *(arg1 + 0x164)
float var_54
var_110 = xmm1_2 * var_54 + *eax_10
float var_50
float var_10c_1 = xmm1_2 * var_50 + (*eax_10)[1]
float xmm1_3 = (*eax_10)[7]
float var_f4_1 = xmm1_3
float var_4c
float var_108_1 = xmm1_2 * var_4c + (*eax_10)[2]
float var_100_1 = xmm1_3 * var_54 + eax_10[1][0]
float var_fc_1 = xmm1_3 * var_50 + (*eax_10)[5]
float xmm1_4 = (*eax_10)[0xb]
float var_e4_1 = xmm1_4
float var_f8_1 = xmm1_3 * var_4c + (*eax_10)[6]
float var_f0_1 = xmm1_4 * var_54 + eax_10[2][0]
float var_ec_1 = xmm1_4 * var_50 + (*eax_10)[9]
float xmm1_5 = (*eax_10)[0xf]
float var_d4_1 = xmm1_5
float var_e8_1 = xmm1_4 * var_4c + (*eax_10)[0xa]
float var_e0_1 = xmm1_5 * var_54 + eax_10[3][0]
float var_dc_1 = xmm1_5 * var_50 + (*eax_10)[0xd]
float var_d8_1 = xmm1_5 * var_4c + (*eax_10)[0xe]
sub_6cb020(&var_110, esi_3, arg2, &var_110)
return arg2
