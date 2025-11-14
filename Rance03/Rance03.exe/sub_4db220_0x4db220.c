// 函数: sub_4db220
// 地址: 0x4db220
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* edx = *(arg3 + 4)
char* eax

if (&edx[4] u<= *(arg3 + 8))
    *(arg1 + 8) = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(arg3 + 4) += 4
    char* edx_1 = *(arg3 + 4)
    
    if (&edx_1[4] u<= *(arg3 + 8))
        *(arg1 + 0xc) =
            ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        *(arg3 + 4) += 4
        uint32_t var_40
        uint32_t var_3c
        uint32_t var_38
        uint32_t var_34
        uint32_t var_30
        uint32_t var_2c
        uint32_t var_28
        uint32_t var_24
        uint32_t var_20
        
        if (sub_468b20(arg3, &var_40).b != 0 && sub_468b20(arg3, &var_3c).b != 0
                && sub_468b20(arg3, &var_38).b != 0 && sub_468b20(arg3, &var_34).b != 0
                && sub_468b20(arg3, &var_30).b != 0 && sub_468bc0(arg3, &var_2c).b != 0
                && sub_468bc0(arg3, &var_28).b != 0 && sub_468b20(arg3, &var_24).b != 0
                && sub_468b20(arg3, &var_20).b != 0)
            uint32_t var_1c
            int32_t ecx_24
            eax, ecx_24 = sub_468b20(arg3, &var_1c)
            
            if (eax.b != 0)
                int32_t var_54_11 = ecx_24
                uint32_t var_58_1 = var_38
                *(arg1 + 0x14) = var_40
                uint32_t var_5c_1 = var_34
                uint32_t var_60_1 = var_30
                *(arg1 + 0x18) = var_3c
                void var_18
                int32_t* eax_9
                int32_t ecx_26
                eax_9, ecx_26 = sub_47f000(&var_18, var_60_1, var_5c_1, var_58_1)
                int32_t var_54_12 = ecx_26
                uint32_t var_58_2 = var_24
                uint32_t var_5c_2 = var_20
                *(arg1 + 0x1c) = *eax_9
                uint32_t var_60_2 = var_1c
                *(arg1 + 0x2c) = var_2c
                *(arg1 + 0x30) = var_28
                *(arg1 + 0x34) = *sub_47f000(&var_18, var_60_2, var_5c_2, var_58_2)
                
                if (sub_468ab0(arg3, arg1 + 0x44).b != 0 && sub_468d00(arg3, arg1 + 0x48).b != 0
                        && sub_468b20(arg3, arg1 + 0x60).b != 0
                        && sub_468b20(arg3, arg1 + 0x64).b != 0
                        && sub_468b20(arg3, arg1 + 0x68).b != 0
                        && sub_468b20(arg3, arg1 + 0x6c).b != 0
                        && sub_468b20(arg3, arg1 + 0x70).b != 0
                        && sub_468b20(arg3, arg1 + 0x74).b != 0
                        && sub_468b20(arg3, arg1 + 0x78).b != 0
                        && sub_468b20(arg3, arg1 + 0x7c).b != 0
                        && sub_468b20(arg3, arg1 + 0x80).b != 0
                        && sub_468b20(arg3, arg1 + 0x84).b != 0
                        && sub_468b20(arg3, arg1 + 0x88).b != 0
                        && sub_468b20(arg3, arg1 + 0x8c).b != 0
                        && sub_468b20(arg3, arg1 + 0x90).b != 0
                        && sub_468d00(arg3, arg1 + 0x94).b != 0
                        && sub_468b20(arg3, arg1 + 0xac).b != 0)
                    if (arg2 s< 5)
                    label_4db523:
                        sub_4c2150(arg1 + 0x48, *(arg1 + 0x60))
                        char* eax_28
                        eax_28.b = 1
                        return eax_28
                    
                    if (sub_468ab0(arg3, arg1 + 0xb0).b != 0)
                        goto label_4db523

eax.b = 0
return eax
