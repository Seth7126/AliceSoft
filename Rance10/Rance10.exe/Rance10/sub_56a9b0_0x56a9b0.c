// 函数: sub_56a9b0
// 地址: 0x56a9b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_c0
int32_t* eax = sub_6cadd0(&var_c0, arg1 + 0x24)
void* var_150 = &var_c0
float var_80[0x10]
float* eax_1 = sub_5dcbc0(arg1 + 8, &var_80)
void var_40
int32_t* eax_2 = sub_6cae40(&var_40, arg1 + 0x30)
float var_100[0x4][0x4]
float (* eax_3)[0x4] = sub_6cb020(eax_2, eax_2, &var_100, eax_1)
float var_140[0x4]
sub_6cb020(eax_3, eax_3, &var_140, eax)

if (arg2 == 0)
    *(arg1 + 0x3c) = var_140
    int128_t var_130
    *(arg1 + 0x4c) = var_130
    int128_t var_120
    *(arg1 + 0x5c) = var_120
    int128_t var_110
    *(arg1 + 0x6c) = var_110
    return arg2

float (* eax_6)[0x4] = sub_6cb020(arg2 + 0x3c, &var_140, &var_100, arg2 + 0x3c)
*(arg1 + 0x3c) = *eax_6
*(arg1 + 0x4c) = eax_6[1]
*(arg1 + 0x5c) = eax_6[2]
*(arg1 + 0x6c) = eax_6[3]
return eax_6
