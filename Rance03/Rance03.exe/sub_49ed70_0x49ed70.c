// 函数: sub_49ed70
// 地址: 0x49ed70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* edx = *(arg2 + 4)
uint32_t* result

if (&edx[4] u<= *(arg2 + 8))
    *(arg1 + 0x50) = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(arg2 + 4) += 4
    char* edx_1 = *(arg2 + 4)
    
    if (&edx_1[4] u<= *(arg2 + 8))
        *(arg1 + 0x54) =
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
        
        if (sub_468b20(arg2, arg1 + 0x58).b != 0 && sub_468b20(arg2, arg1 + 0x5c).b != 0
                && sub_468d00(arg2, arg1 + 0x60).b != 0 && sub_468d00(arg2, arg1 + 0x78).b != 0
                && sub_468b20(arg2, &var_40).b != 0 && sub_468b20(arg2, &var_3c).b != 0
                && sub_468b20(arg2, &var_38).b != 0 && sub_468b20(arg2, &var_34).b != 0
                && sub_468b20(arg2, &var_30).b != 0 && sub_468bc0(arg2, &var_2c).b != 0
                && sub_468bc0(arg2, &var_28).b != 0 && sub_468b20(arg2, &var_24).b != 0
                && sub_468b20(arg2, &var_20).b != 0)
            uint32_t var_1c
            int32_t ecx_28
            result, ecx_28 = sub_468b20(arg2, &var_1c)
            
            if (result.b != 0)
                int32_t var_4c_15 = ecx_28
                uint32_t var_50 = var_38
                *(arg1 + 0x94) = var_40
                uint32_t var_54 = var_34
                uint32_t var_58 = var_30
                *(arg1 + 0x98) = var_3c
                void var_18
                int32_t* eax_12
                int32_t ecx_30
                eax_12, ecx_30 = sub_47f000(&var_18, var_58, var_54, var_50)
                int32_t var_4c_16 = ecx_30
                uint32_t var_50_1 = var_24
                uint32_t var_54_1 = var_20
                *(arg1 + 0x9c) = *eax_12
                uint32_t var_58_1 = var_1c
                *(arg1 + 0xac) = var_2c
                *(arg1 + 0xb0) = var_28
                *(arg1 + 0xb4) = *sub_47f000(&var_18, var_58_1, var_54_1, var_50_1)
                return sub_468b20(arg2, arg1 + 0xc4) != 0

result.b = 0
return result
