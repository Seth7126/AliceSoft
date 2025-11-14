// 函数: sub_4a9180
// 地址: 0x4a9180
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t var_2c
int32_t eax_1 = __security_cookie ^ &var_2c
sub_4a8230(arg1)
*(arg1 + 0xc) = 0
sub_4a62e0(arg1 + 4, sub_4e7600)
int32_t* eax_2

if (arg2 s< 3)
    char* edx_1 = *(arg3 + 4)
    
    if (&edx_1[4] u<= *(arg3 + 8))
        uint32_t ecx_10 =
            ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        *(arg3 + 4) = &edx_1[4]
        uint32_t var_40_2 = ecx_10
        int32_t var_20
        int32_t* eax_7 = sub_4691f0(&var_20, "%05d")
        var_2c = eax_7
        
        if (arg1 + 0x58 != eax_7)
            if (*(arg1 + 0x6c) u>= 0x10)
                j__free(*(arg1 + 0x58))
                eax_7 = var_2c
            
            *(arg1 + 0x6c) = 0xf
            *(arg1 + 0x68) = 0
            *(arg1 + 0x58) = 0
            sub_4030b0(arg1 + 0x58, eax_7)
        
        int32_t var_c
        
        if (var_c u>= 0x10)
            j__free(var_20)
        
        goto label_4a926c
else if (sub_468d00(arg3, arg1 + 0x58).b != 0)
label_4a926c:
    void* var_40_6 = arg3
    uint32_t var_24
    
    if (sub_4a6050(arg1 + 4, arg2).b != 0 && sub_468b20(arg3, &var_24).b != 0)
        eax_2 = sub_4a8f20(arg1, arg3)
        *(arg1 + 0x44) = eax_2
        
        if (eax_2 != 0 && sub_468b20(arg3, &var_2c).b != 0)
            uint32_t ebp_1 = var_2c
            
            if (ebp_1 s> 0)
                int32_t ebx_3 = 0
                
                if (ebp_1 s> 0)
                    do
                        uint32_t var_28
                        
                        if (sub_468b20(arg3, &var_28).b == 0)
                            goto label_4a91cb
                        
                        if (sub_468b20(arg3, &var_2c).b == 0)
                            goto label_4a91cb
                        
                        sub_4a8470(arg1, var_28, var_2c, 0xffffffff)
                        void* var_40_12 = arg1
                        
                        if (sub_4a7860(sub_4a8be0(arg1), arg3).b == 0)
                            goto label_4a91cb
                        
                        ebx_3 += 1
                    while (ebx_3 s< ebp_1)
                
                uint32_t eax_9 = var_24
                
                if (eax_9 != 0)
                    *(arg1 + 0x54) = sub_4a8700(arg1, eax_9)
                
                *(arg1 + 0xc) = arg1
                void* var_40_14 = arg1
                sub_4a6280(arg1 + 4, arg1 + 4)
                int32_t* eax_11
                eax_11.b = 1
                sub_69a5bc(eax_1 ^ &var_2c)
                return eax_11

label_4a91cb:
eax_2.b = 0
sub_69a5bc(eax_1 ^ &var_2c)
return eax_2
