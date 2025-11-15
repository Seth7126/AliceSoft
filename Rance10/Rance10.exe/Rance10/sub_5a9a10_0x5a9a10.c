// 函数: sub_5a9a10
// 地址: 0x5a9a10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int128_t var_5c

if (*(*(arg2 + 0x28c) + 0x14) != 0)
    sub_579560(&var_5c, *(arg2 + 0x20))
else
    var_5c = data_79a970[0x10][0].o

if (*(arg2 + 0x108) == 4)
    int32_t eax_3 = sub_59f440(arg5, arg2 + 0x10c)
    
    if (*(arg2 + 0x108) == 4 && eax_3 != 0xffffffff)
        void* ecx_5 = *(arg4 + 0x220)
        
        if (ecx_5 == 0)
            *arg3 = ecx_5
            arg3[1] = ecx_5
            arg3[2] = ecx_5
            arg3[3] = 0x3f800000
            return arg3
        
        void* eax_5 = sub_59f380(ecx_5, eax_3)
        
        if (eax_5 != 0)
            int64_t* eax_6 = sub_579230(arg2, &var_5c)
            float eax_7 = eax_6[1].d
            int64_t var_68 = *eax_6
            int64_t* eax_8 = sub_579230(eax_5, &var_5c)
            float eax_9 = eax_8[1].d
            int64_t var_74 = *eax_8
            var_5c.d = var_74.d f- var_68.d
            var_5c:4.d = var_74:4.d f- var_68:4.d
            var_5c:8.d = eax_9 - eax_7
            sub_6ca9e0(&var_5c, &var_74)
            float xmm5_1 = var_74:4.d
            float xmm2_4 = data_7e70e0
            float xmm7_1 = var_74.d
            var_5c.d = data_7e70e4 * eax_9 - data_7e70e8 * xmm5_1
            var_5c:4.d = xmm7_1 f* data_7e70e8 - xmm2_4 * eax_9
            var_5c:8.d = xmm2_4 * xmm5_1 - xmm7_1 f* data_7e70e4
            sub_6ca9e0(&var_5c, &var_68)
            float xmm5_2 = var_68:4.d
            float xmm1_7 = var_68.d
            int32_t var_3c_1 = 0
            float var_48 = xmm1_7
            float var_40_1 = xmm7_1
            float var_38_1 = xmm5_2
            float var_44_1 = xmm5_1 * eax_7 - xmm5_2 * eax_9
            float var_34_1 = xmm1_7 * eax_9 - xmm7_1 * eax_7
            int32_t var_30_1 = var_74:4.d
            float var_24_1 = xmm7_1 * xmm5_2 - xmm1_7 f* var_74:4.d
            int32_t var_2c_1 = 0
            float var_28_1 = eax_7
            float var_20_1 = eax_9
            int128_t var_1c_1 = zx.o(0)
            int32_t var_c_1 = 0x3f800000
            var_5c = *sub_6cb8c0(&var_48, &var_5c)

if (*(arg2 + 4) == 4)
    var_5c.d ^= 0x80000000
    var_5c:4.d ^= 0x80000000
    var_5c:8.d ^= 0x80000000

*arg3 = var_5c
return arg3
