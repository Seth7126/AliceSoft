// 函数: sub_4ffe30
// 地址: 0x4ffe30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* edx = *(arg2 + 4)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (&edx[4] u<= *(arg2 + 8))
    *(arg1 + 0x4c) = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(arg2 + 4) += 4
    char* edx_1 = *(arg2 + 4)
    
    if (&edx_1[4] u<= *(arg2 + 8))
        *(arg1 + 0x50) =
            ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        *(arg2 + 4) += 4
        uint32_t var_44
        uint32_t var_40
        uint32_t var_3c
        uint32_t var_38
        uint32_t var_34
        uint32_t var_30
        uint32_t var_2c
        uint32_t var_28
        uint32_t var_24
        uint32_t var_20
        
        if (sub_61ec90(arg2, arg1 + 0x54).b != 0 && sub_61ec90(arg2, arg1 + 0x58).b != 0
                && sub_61ec90(arg2, arg1 + 0x5c).b != 0 && sub_61ed80(arg2, arg1 + 0x60).b != 0
                && sub_61ec90(arg2, arg1 + 0x78).b != 0 && sub_61ec90(arg2, &var_44).b != 0
                && sub_61ec90(arg2, &var_40).b != 0 && sub_61ec90(arg2, &var_3c).b != 0
                && sub_61ec90(arg2, &var_38).b != 0 && sub_61ec90(arg2, &var_34).b != 0
                && sub_6c9300(arg2, &var_30).b != 0 && sub_6c9300(arg2, &var_2c).b != 0
                && sub_61ec90(arg2, &var_28).b != 0 && sub_61ec90(arg2, &var_24).b != 0
                && sub_61ec90(arg2, &var_20).b != 0)
            uint32_t var_58_1 = var_3c
            *(arg1 + 0x80) = var_44
            uint32_t var_5c_1 = var_38
            uint32_t var_60_1 = var_34
            *(arg1 + 0x84) = var_40
            void var_18
            int32_t* eax_13 = sub_402f50(&var_18, var_60_1, var_5c_1, var_58_1, 0xff)
            uint32_t var_58_2 = var_28
            uint32_t var_5c_2 = var_24
            *(arg1 + 0x88) = *eax_13
            uint32_t var_60_2 = var_20
            *(arg1 + 0x98) = var_30
            *(arg1 + 0x9c) = var_2c
            int32_t* eax_14 = sub_402f50(&var_18, var_60_2, var_5c_2, var_58_2, 0xff)
            var_44 = 0
            *(arg1 + 0xa0) = *eax_14
            
            if (sub_61ec90(arg2, &var_44).b != 0)
                uint32_t var_54_17 = var_44
                var_20 = arg1 + 0xb0
                sub_416ab0(arg1 + 0xb0, var_54_17)
                int32_t edi_1 = 0
                
                if (var_44 s> 0)
                    int32_t ebx_1 = 0
                    
                    do
                        if (sub_61ed80(arg2, *var_20 + ebx_1).b == 0)
                            goto label_5000dd
                        
                        edi_1 += 1
                        ebx_1 += 0x18
                    while (edi_1 s< var_44)
                
                if (sub_61ec90(arg2, arg1 + 0xbc).b != 0 && sub_61ec90(arg2, arg1 + 0xc0).b != 0)
                    *(arg1 + 0xc4) = 1
                    result.b = 1
                    return result

label_5000dd:
result.b = 0
return result
