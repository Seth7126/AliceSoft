// 函数: sub_4e4120
// 地址: 0x4e4120
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* edx = *(arg3 + 4)
uint32_t* result

if (&edx[4] u<= *(arg3 + 8))
    *(arg1 + 4) = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(arg3 + 4) += 4
    char* edx_1 = *(arg3 + 4)
    
    if (&edx_1[4] u<= *(arg3 + 8))
        *(arg1 + 8) =
            ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        *(arg3 + 4) += 4
        result = *(arg3 + 4)
        
        if (arg2 s< 0x10)
            goto label_4e41bc
        
        if (result + 1 u<= *(arg3 + 8))
            bool cond:1_1 = *result == 1
            *(arg3 + 4) = result + 1
            result.b = cond:1_1
            *(arg1 + 0xc) = result.b
        label_4e41bc:
            result = *(arg3 + 4)
            
            if (result + 1 u<= *(arg3 + 8))
                bool cond:0_1 = *result == 1
                *(arg3 + 4) = result + 1
                result.b = cond:0_1
                *(arg1 + 0xd) = result.b
                sub_61ec90(arg3, arg1 + 0x10)
                sub_61ec90(arg3, arg1 + 0x14)
                sub_61ec90(arg3, arg1 + 0x18)
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
                
                if (sub_61ec90(arg3, &var_40).b != 0 && sub_61ec90(arg3, &var_3c).b != 0
                        && sub_61ec90(arg3, &var_38).b != 0 && sub_61ec90(arg3, &var_34).b != 0
                        && sub_61ec90(arg3, &var_30).b != 0 && sub_6c9300(arg3, &var_2c).b != 0
                        && sub_6c9300(arg3, &var_28).b != 0 && sub_61ec90(arg3, &var_24).b != 0
                        && sub_61ec90(arg3, &var_20).b != 0 && sub_61ec90(arg3, &var_1c).b != 0)
                    uint32_t var_58_1 = var_38
                    *(arg1 + 0x20) = var_40
                    uint32_t var_5c_1 = var_34
                    uint32_t var_60_1 = var_30
                    *(arg1 + 0x24) = var_3c
                    void var_18
                    int32_t* eax_11 = sub_402f50(&var_18, var_60_1, var_5c_1, var_58_1, 0xff)
                    uint32_t var_58_2 = var_24
                    uint32_t var_5c_2 = var_20
                    *(arg1 + 0x28) = *eax_11
                    uint32_t var_60_2 = var_1c
                    *(arg1 + 0x38) = var_2c
                    *(arg1 + 0x3c) = var_28
                    *(arg1 + 0x40) = *sub_402f50(&var_18, var_60_2, var_5c_2, var_58_2, 0xff)
                    
                    if (sub_61ed80(arg3, arg1 + 0x50).b != 0)
                        if (arg2 s< 0x25)
                        label_4e4367:
                            
                            if (arg2 s< 2)
                            label_4e4382:
                                
                                if (arg2 s< 0x25)
                                label_4e43b8:
                                    
                                    if (sub_61ed80(arg3, arg1 + 0xe0).b != 0
                                            && sub_61ec90(arg3, &var_1c).b != 0)
                                        *(arg1 + 0xf8) = var_1c
                                        
                                        if (sub_6c9280(arg3, arg1 + 0xfc).b != 0
                                                && sub_61ec90(arg3, arg1 + 0x100).b != 0
                                                && sub_61ec90(arg3, arg1 + 0x104).b != 0)
                                            *(arg1 + 0x108) = 1
                                            result.b = 1
                                            return result
                                else if (sub_61ed80(arg3, arg1 + 0xb0).b != 0
                                        && sub_61ed80(arg3, arg1 + 0xc8).b != 0)
                                    goto label_4e43b8
                            else if (sub_61ed80(arg3, arg1 + 0x98).b != 0)
                                goto label_4e4382
                        else if (sub_61ed80(arg3, arg1 + 0x68).b != 0
                                && sub_61ed80(arg3, arg1 + 0x80).b != 0)
                            goto label_4e4367

result.b = 0
return result
