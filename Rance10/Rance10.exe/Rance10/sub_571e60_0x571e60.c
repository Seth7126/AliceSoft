// 函数: sub_571e60
// 地址: 0x571e60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float var_10 = 0f
int32_t var_c = 0
*arg1 = *arg2
arg1[1] = arg2[1]
int32_t eax = arg2[2].d
*(arg1 + 0x24) = var_10.q
arg1[2].d = eax
*(arg1 + 0x2c) = 0
float* eax_1 = sub_5f1f30(eax, arg2, &var_10, arg2 + 0xc, arg2 + 0x18)
float xmm4 = eax_1[1]
float xmm1 = *eax_1
float xmm3 = eax_1[2]
float xmm2_2 = xmm1 f* *arg2 + xmm4 f* *(arg2 + 4)
float xmm0_6 = *(arg2 + 8) * xmm3
*(arg1 + 0x38) = xmm3
*(arg1 + 0x34) = xmm4
arg1[3].d = xmm1
*(arg1 + 0x3c) = (xmm2_2 + xmm0_6) ^ (data_79aad0).d
float xmm3_3 = (arg2[2].d f+ *(arg2 + 0x14) f+ *(arg2 + 8)) * 0.333333343f
arg1[4].d = (*(arg2 + 0xc) f+ *arg2 f+ *(arg2 + 0x18)) * 0.333333343f
*(arg1 + 0x44) = (*(arg2 + 0x1c) + arg2[1].d f+ *(arg2 + 4)) * 0.333333343f
*(arg1 + 0x48) = xmm3_3
*(arg1 + 0x4c) = 0
arg1[5].d = 0
*(arg1 + 0x54) = 0
*(arg1 + 0x58) = 0
return arg1
