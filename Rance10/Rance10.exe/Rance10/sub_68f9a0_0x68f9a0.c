// 函数: sub_68f9a0
// 地址: 0x68f9a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_40
sub_6cad30(&var_40, (*(*arg4 + 0xc))())
int128_t var_180
sub_6cad30(&var_180, (*(*arg4 + 0x18))())
float var_140[0x4]
sub_6cb020(&var_40, arg2, &var_140, &var_40)
sub_6cb020(&var_180, &var_140, &var_40, &var_180)
float var_100[0x4]
sub_6cac10(&var_100)
float var_c0[0x4]

if ((*(*arg5 + 0x1c))() != 0)
    int32_t* eax_10 = (*(*arg4 + 0x20))()
    
    if (eax_10 == 0)
        eax_10.b = 0
        return eax_10
    
    int128_t* eax_13 = sub_6cad30(&var_180, (**eax_10)())
    float (* eax_14)[0x4] = sub_6cb020(eax_13, arg2, &var_c0, eax_13)
    var_100 = *eax_14
    int128_t var_f0_1 = eax_14[1]
    int128_t var_e0_1 = eax_14[2]
    int128_t var_d0_1 = eax_14[3]

int128_t var_80
sub_6cba50(arg2, &var_80)
sub_6cba50(&var_140, &var_c0)
sub_6cba50(&var_40, &var_180)
sub_6cba50(&var_100, &var_140)
int128_t xmm0_5 = var_80
int32_t var_184 = 0x40
*arg3 = xmm0_5
int128_t var_70
arg3[1] = var_70
int128_t var_60
arg3[2] = var_60
int128_t var_50
arg3[3] = var_50
arg3[4] = var_c0
int128_t var_b0
arg3[5] = var_b0
int128_t var_a0
arg3[6] = var_a0
int128_t var_90
arg3[7] = var_90
arg3[8] = var_180
int128_t var_170
arg3[9] = var_170
int128_t var_160
arg3[0xa] = var_160
int128_t var_150
arg3[0xb] = var_150
arg3[0xc] = var_140
int128_t var_130
arg3[0xd] = var_130
int128_t var_120
arg3[0xe] = var_120
int128_t var_110
arg3[0xf] = var_110
sub_6903f0(&var_40, &var_184, arg3, arg4, &var_40)
int32_t eax_16
eax_16.b = 1
return eax_16
