// 函数: sub_5b7570
// 地址: 0x5b7570
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0x168) != 0)
    float var_104[0x4][0x4]
    float (* eax_5)[0x4] = sub_6cb020(arg1 + 0xa8, arg1 + 0x68, &var_104, arg1 + 0xa8)
    float var_c4[0x4][0x4]
    float (* eax_6)[0x4] = sub_6cb020(eax_5, eax_5, &var_c4, arg1 + 0xe8)
    float var_84[0x4][0x4]
    float (* eax_7)[0x4] = sub_6cb020(eax_6, eax_6, &var_84, arg1 + 0x1c)
    float var_44[0x4][0x4]
    float (* eax_8)[0x4] = sub_6cb020(eax_7, eax_7, &var_44, arg1 + 0x128)
    *(arg1 + 0x16c) = *eax_8
    *(arg1 + 0x17c) = eax_8[1]
    *(arg1 + 0x18c) = eax_8[2]
    int128_t xmm0_4 = eax_8[3]
    *(arg1 + 0x168) = 0
    *(arg1 + 0x19c) = xmm0_4

return arg1 + 0x16c
