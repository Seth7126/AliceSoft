// 函数: sub_574ca0
// 地址: 0x574ca0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* i = *arg1
int32_t j

for (int32_t edi = arg1[1]; i != edi; i += 0x5c)
    j = 0
    void* edi_1 = i + 0x24
    void* i_1 = i
    
    do
        int32_t ecx = 0xff800000
        
        if (*edi_1 == 0)
            ecx = 0xff00ffff
        
        int32_t var_4_1 = ecx
        int32_t var_14_1 = ecx
        int32_t eax_2 = mods.dp.d(sx.q(j + 1), 3) * 3
        int64_t xmm0_1 = *(i + (eax_2 << 2))
        int32_t var_8_1 = *(i + (eax_2 << 2) + 8)
        int64_t xmm0_2 = *i_1
        int32_t var_18_1 = *(i_1 + 8)
        
        if (arg2[1] == arg2[2])
            int32_t var_3c_1 = ecx
            sub_571180(arg2)
        
        int128_t* eax_6 = arg2[1]
        
        if (eax_6 != 0)
            *eax_6 = xmm0_2.o
            eax_6[1] = xmm0_1.o
        
        arg2[1] += 0x20
        edi_1 += 4
        j += 1
        i_1 += 0xc
    while (j s< 3)

j.b = 1
return j
