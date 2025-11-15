// 函数: sub_4e9150
// 地址: 0x4e9150
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t esi = arg3
char* edx = *(esi + 4)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (&edx[4] u<= *(esi + 8))
    *(arg1 + 0x50) = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(esi + 4) += 4
    char* edx_1 = *(esi + 4)
    
    if (&edx_1[4] u<= *(esi + 8))
        *(arg1 + 0x54) =
            ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        *(esi + 4) += 4
        uint32_t var_38
        uint32_t var_34
        uint32_t var_30
        uint32_t var_2c
        uint32_t var_28
        uint32_t var_24
        uint32_t var_20
        uint32_t var_1c
        uint32_t var_18
        
        if (sub_61ec90(esi, arg1 + 0x58).b != 0 && sub_61ec90(esi, arg1 + 0x5c).b != 0
                && sub_61ed80(esi, arg1 + 0x60).b != 0 && sub_61ed80(esi, arg1 + 0x78).b != 0
                && sub_61ec90(esi, &arg3).b != 0 && sub_61ec90(esi, &var_38).b != 0
                && sub_61ec90(esi, &var_34).b != 0 && sub_61ec90(esi, &var_30).b != 0
                && sub_61ec90(esi, &var_2c).b != 0 && sub_6c9300(esi, &var_28).b != 0
                && sub_6c9300(esi, &var_24).b != 0 && sub_61ec90(esi, &var_20).b != 0
                && sub_61ec90(esi, &var_1c).b != 0 && sub_61ec90(esi, &var_18).b != 0)
            uint32_t var_54_1 = var_34
            *(arg1 + 0x94) = arg3
            uint32_t var_58_1 = var_30
            uint32_t var_5c_1 = var_2c
            *(arg1 + 0x98) = var_38
            void var_14
            int32_t* eax_12 = sub_402f50(&var_14, var_5c_1, var_58_1, var_54_1, 0xff)
            uint32_t var_54_2 = var_20
            uint32_t var_58_2 = var_1c
            *(arg1 + 0x9c) = *eax_12
            uint32_t var_5c_2 = var_18
            *(arg1 + 0xac) = var_28
            *(arg1 + 0xb0) = var_24
            *(arg1 + 0xb4) = *sub_402f50(&var_14, var_5c_2, var_58_2, var_54_2, 0xff)
            
            if (sub_61ec90(esi, arg1 + 0xc4).b != 0)
                if (arg2 s< 0x18)
                label_4e9592:
                    *(arg1 + 0x124) = 1
                    result.b = 1
                    return result
                
                if (sub_61ec90(esi, arg1 + 0xc8).b != 0 && sub_61ec90(esi, arg1 + 0xcc).b != 0
                        && sub_61ec90(esi, arg1 + 0xd0).b != 0
                        && sub_61ec90(esi, arg1 + 0xd4).b != 0
                        && sub_61ec90(esi, arg1 + 0xd8).b != 0 && sub_61ec90(esi, &arg3).b != 0
                        && sub_61ec90(esi, &var_38).b != 0 && sub_61ec90(esi, &var_34).b != 0
                        && sub_61ec90(esi, &var_30).b != 0 && sub_61ec90(esi, &var_2c).b != 0
                        && sub_6c9300(esi, &var_28).b != 0 && sub_6c9300(esi, &var_24).b != 0
                        && sub_61ec90(esi, &var_20).b != 0 && sub_61ec90(esi, &var_1c).b != 0
                        && sub_61ec90(esi, &var_18).b != 0)
                    uint32_t var_54_3 = var_34
                    *(arg1 + 0xe0) = arg3
                    uint32_t var_58_3 = var_30
                    uint32_t var_5c_3 = var_2c
                    *(arg1 + 0xe4) = var_38
                    int32_t* eax_22 = sub_402f50(&var_14, var_5c_3, var_58_3, var_54_3, 0xff)
                    uint32_t var_54_4 = var_20
                    uint32_t var_58_4 = var_1c
                    *(arg1 + 0xe8) = *eax_22
                    uint32_t var_5c_4 = var_18
                    *(arg1 + 0xf8) = var_28
                    *(arg1 + 0xfc) = var_24
                    int32_t* eax_23 = sub_402f50(&var_14, var_5c_4, var_58_4, var_54_4, 0xff)
                    arg3 = 0
                    *(arg1 + 0x100) = *eax_23
                    
                    if (sub_61ec90(esi, &arg3).b != 0)
                        uint32_t ebp_1 = arg3
                        sub_416ab0(arg1 + 0x110, ebp_1)
                        int32_t ebx_1 = 0
                        
                        if (ebp_1 s> 0)
                            int32_t ebp_2 = 0
                            
                            do
                                if (sub_61ed80(esi, *(arg1 + 0x110) + ebp_2).b == 0)
                                    goto label_4e95a8
                                
                                ebx_1 += 1
                                ebp_2 += 0x18
                            while (ebx_1 s< arg3)
                        
                        if (sub_61ec90(esi, arg1 + 0x11c).b != 0
                                && sub_61ec90(esi, arg1 + 0x120).b != 0)
                            goto label_4e9592

label_4e95a8:
result.b = 0
return result
