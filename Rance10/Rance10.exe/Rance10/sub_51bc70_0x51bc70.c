// 函数: sub_51bc70
// 地址: 0x51bc70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* edx = *(arg3 + 4)

if (&edx[4] u<= *(arg3 + 8))
    *(arg1 + 4) = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(arg3 + 4) += 4
    char* edx_1 = *(arg3 + 4)
    
    if (&edx_1[4] u<= *(arg3 + 8))
        *(arg1 + 8) =
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
        uint32_t var_1c
        
        if (sub_61ec90(arg3, &var_40).b != 0 && sub_61ec90(arg3, &var_3c).b != 0
                && sub_61ec90(arg3, &var_38).b != 0 && sub_61ec90(arg3, &var_34).b != 0
                && sub_61ec90(arg3, &var_30).b != 0 && sub_6c9300(arg3, &var_2c).b != 0
                && sub_6c9300(arg3, &var_28).b != 0 && sub_61ec90(arg3, &var_24).b != 0
                && sub_61ec90(arg3, &var_20).b != 0 && sub_61ec90(arg3, &var_1c).b != 0)
            uint32_t var_58_1 = var_38
            *(arg1 + 0x10) = var_40
            uint32_t var_5c_1 = var_34
            uint32_t var_60_1 = var_30
            *(arg1 + 0x14) = var_3c
            void var_18
            int32_t* eax_9 = sub_402f50(&var_18, var_60_1, var_5c_1, var_58_1, 0xff)
            uint32_t var_58_2 = var_24
            uint32_t var_5c_2 = var_20
            *(arg1 + 0x18) = *eax_9
            uint32_t var_60_2 = var_1c
            *(arg1 + 0x28) = var_2c
            *(arg1 + 0x2c) = var_28
            *(arg1 + 0x30) = *sub_402f50(&var_18, var_60_2, var_5c_2, var_58_2, 0xff)
            
            if (sub_6c9280(arg3, arg1 + 0x40).b != 0 && sub_61ed80(arg3, arg1 + 0x44).b != 0
                    && sub_61ec90(arg3, arg1 + 0x5c).b != 0 && sub_61ec90(arg3, arg1 + 0x60).b != 0
                    && sub_61ec90(arg3, arg1 + 0x64).b != 0 && sub_61ec90(arg3, arg1 + 0x68).b != 0
                    && sub_61ec90(arg3, arg1 + 0x6c).b != 0 && sub_61ec90(arg3, arg1 + 0x70).b != 0
                    && sub_61ec90(arg3, arg1 + 0x74).b != 0 && sub_61ec90(arg3, arg1 + 0x78).b != 0
                    && sub_61ec90(arg3, arg1 + 0x7c).b != 0 && sub_61ec90(arg3, arg1 + 0x80).b != 0
                    && sub_61ec90(arg3, arg1 + 0x84).b != 0 && sub_61ec90(arg3, arg1 + 0x88).b != 0
                    && sub_61ec90(arg3, arg1 + 0x8c).b != 0 && sub_61ed80(arg3, arg1 + 0x90).b != 0
                    && sub_61ec90(arg3, arg1 + 0xa8).b != 0)
                if (arg2 s< 5)
                label_51bf74:
                    sub_508fe0(arg1 + 0x44, *(arg1 + 0x5c))
                    *(arg1 + 0xad) = 1
                    struct _EXCEPTION_REGISTRATION_RECORD** eax_28
                    eax_28.b = 1
                    return eax_28
                
                if (sub_6c9280(arg3, arg1 + 0xac).b != 0)
                    goto label_51bf74

char* eax
eax.b = 0
return eax
