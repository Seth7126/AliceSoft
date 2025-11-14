// 函数: sub_56bda0
// 地址: 0x56bda0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_88
int32_t eax_1 = __security_cookie ^ &var_88
int128_t xmm1 = arg5
int32_t var_58 = xmm1
int32_t eax_3 = *(arg2 + 0x20)
int128_t var_6c

if (eax_3 == 0)
    sub_56ef60(arg2 + 0x1cc, xmm1.d, &var_6c)
else if (eax_3 == 1)
    sub_56f060(arg2 + 0x1cc, xmm1.d, &var_6c)
else
    var_6c = data_7093d0

if (*(arg2 + 0xb4) != 4)
label_56c059:
    
    if (*(arg2 + 4) == 2)
        var_6c.d ^= 0x80000000
        var_6c:4.d ^= 0x80000000
        var_6c:8.d ^= 0x80000000
    
    *arg1 = var_6c
else
    int32_t eax_7 = sub_5616b0(arg4, arg2 + 0xb8)
    
    if (*(arg2 + 0xb4) != 4 || eax_7 == 0xffffffff)
        goto label_56c059
    
    void* ecx_3 = *(arg3 + 0x1d8)
    
    if (ecx_3 != 0)
        void* eax_8 = sub_561670(ecx_3, eax_7)
        
        if (eax_8 != 0)
            struct sealengine::CEmitterPos::VTable* var_74
            struct sealengine::CEmitterPos::VTable** eax_9 = sub_537660(&var_74, *(arg2 + 0x20))
            float eax_10 = eax_9[3]
            int32_t var_94_6 = *(eax_8 + 0x20)
            int64_t var_80 = *(eax_9 + 4)
            struct sealengine::CEmitterPos::VTable** eax_11 = sub_537660(&var_74, var_94_6)
            float eax_12 = eax_11[3]
            int64_t var_54 = *(eax_11 + 4)
            var_6c:4.d = var_54.d f- var_80.d
            var_6c:8.d = var_54:4.d f- var_80:4.d
            var_6c:0xc.d = eax_12 - eax_10
            sub_59f780(&var_6c:4, &var_54)
            float xmm7_1 = var_54.d
            float xmm3_2 = var_54:4.d * 0f
            var_6c:4.d = eax_12 - xmm3_2
            var_6c:0xc.d = xmm3_2 - xmm7_1
            var_6c:8.d = xmm7_1 * 0f - eax_12 * 0f
            sub_59f780(&var_6c:4, &var_80)
            float xmm5_1 = var_80:4.d
            int32_t var_3c_1 = 0
            float xmm1_4 = var_80.d
            int32_t var_2c_1 = 0
            float xmm4_3 = var_54:4.d * eax_10 - xmm5_1 * eax_12
            float var_48 = xmm1_4
            float var_44_1 = xmm4_3
            float var_40_1 = xmm7_1
            float var_38_1 = xmm5_1
            float var_28_1 = eax_10
            float var_34_1 = xmm1_4 * eax_12 - xmm7_1 * eax_10
            int32_t var_30_1 = var_54:4.d
            float var_24_1 = xmm7_1 * xmm5_1 - xmm1_4 f* var_54:4.d
            float var_20_1 = eax_12
            int128_t var_1c_1 = zx.o(0)
            int32_t var_c_1 = 0x3f800000
            var_6c = *sub_47c1a0(&var_48, &var_6c)
        
        goto label_56c059
    
    *arg1 = ecx_3
    arg1[1] = ecx_3
    arg1[2] = ecx_3
    arg1[3] = 0x3f800000

sub_69a5bc(eax_1 ^ &var_88)
return arg1
