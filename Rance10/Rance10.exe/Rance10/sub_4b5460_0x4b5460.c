// 函数: sub_4b5460
// 地址: 0x4b5460
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* edx = *(arg2 + 4)
uint32_t* result

if (&edx[4] u<= *(arg2 + 8))
    *(arg1 + 4) = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(arg2 + 4) += 4
    char* edx_1 = *(arg2 + 4)
    
    if (&edx_1[4] u<= *(arg2 + 8))
        *(arg1 + 8) =
            ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        *(arg2 + 4) += 4
        uint32_t var_40
        uint32_t var_3c
        uint32_t var_38
        uint32_t var_34
        uint32_t var_30
        uint32_t var_2c
        uint32_t var_28
        uint32_t var_24
        uint32_t var_20
        uint32_t var_1c
        
        if (sub_61ec90(arg2, &var_40).b != 0 && sub_61ec90(arg2, &var_3c).b != 0
                && sub_61ec90(arg2, &var_38).b != 0 && sub_61ec90(arg2, &var_34).b != 0
                && sub_61ec90(arg2, &var_30).b != 0 && sub_6c9300(arg2, &var_2c).b != 0
                && sub_6c9300(arg2, &var_28).b != 0 && sub_61ec90(arg2, &var_24).b != 0
                && sub_61ec90(arg2, &var_20).b != 0 && sub_61ec90(arg2, &var_1c).b != 0)
            uint32_t var_58_1 = var_38
            *(arg1 + 0x10) = var_40
            uint32_t var_5c_1 = var_34
            uint32_t var_60_1 = var_30
            *(arg1 + 0x14) = var_3c
            void var_18
            int32_t* eax_8 = sub_402f50(&var_18, var_60_1, var_5c_1, var_58_1, 0xff)
            uint32_t var_58_2 = var_24
            uint32_t var_5c_2 = var_20
            *(arg1 + 0x18) = *eax_8
            uint32_t var_60_2 = var_1c
            *(arg1 + 0x28) = var_2c
            *(arg1 + 0x2c) = var_28
            *(arg1 + 0x30) = *sub_402f50(&var_18, var_60_2, var_5c_2, var_58_2, 0xff)
            
            if (sub_6c9280(arg2, arg1 + 0x40).b != 0 && sub_6c9300(arg2, arg1 + 0x44).b != 0
                    && sub_6c9300(arg2, arg1 + 0x48).b != 0 && sub_6c9300(arg2, arg1 + 0x4c).b != 0
                    && sub_6c9300(arg2, arg1 + 0x50).b != 0 && sub_6c9300(arg2, arg1 + 0x54).b != 0
                    && sub_61ec90(arg2, arg1 + 0x58).b != 0 && sub_61ec90(arg2, arg1 + 0x5c).b != 0
                    && sub_61ec90(arg2, arg1 + 0x60).b != 0 && sub_61ec90(arg2, arg1 + 0x64).b != 0
                    && sub_61ec90(arg2, arg1 + 0x68).b != 0 && sub_61ec90(arg2, arg1 + 0x6c).b != 0
                    && sub_61ec90(arg2, arg1 + 0x70).b != 0 && sub_61ec90(arg2, arg1 + 0x74).b != 0
                    && sub_61ec90(arg2, arg1 + 0x78).b != 0 && sub_61ec90(arg2, arg1 + 0x7c).b != 0
                    && sub_61ec90(arg2, arg1 + 0x80).b != 0 && sub_61ec90(arg2, arg1 + 0x84).b != 0
                    && sub_61ec90(arg2, arg1 + 0x88).b != 0 && sub_61ed80(arg2, arg1 + 0x8c).b != 0
                    && sub_61ec90(arg2, arg1 + 0xa4).b != 0)
                int32_t xmm1 = *(arg1 + 0x44)
                int32_t xmm0_5 = *(arg1 + 0x50)
                
                if (not(xmm0_5 f> xmm1))
                    xmm0_5 = _mm_min_ss(*(arg1 + 0x4c), xmm1)
                
                *(arg1 + 0x44) = xmm0_5
                result.b = 1
                *(arg1 + 0xa8) = 1
                return result

result.b = 0
return result
