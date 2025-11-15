// 函数: sub_4b9f80
// 地址: 0x4b9f80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_88
int32_t eax
float xmm2
float xmm3
int128_t* eax_1 = sub_561360(eax, arg2, &var_88, xmm2, xmm3, 1f, 0x3f800000, 0f, 0f, 0f)
float var_48[0x4][0x4]
float (* result)[0x4] = sub_6cb020(eax_1, eax_1, &var_48, arg1 + 8)
*(arg1 + 8) = *result
*(arg1 + 0x18) = result[1]
*(arg1 + 0x28) = result[2]
*(arg1 + 0x38) = result[3]
return result
