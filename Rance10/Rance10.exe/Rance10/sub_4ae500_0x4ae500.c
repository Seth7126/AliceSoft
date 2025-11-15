// 函数: sub_4ae500
// 地址: 0x4ae500
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t* var_c = arg1
char* edx = *(arg3 + 4)
char* result

if (&edx[4] u<= *(arg3 + 8))
    *arg1 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(arg3 + 4) += 4
    char* edx_1 = *(arg3 + 4)
    
    if (&edx_1[4] u<= *(arg3 + 8))
        arg1[1] = ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        *(arg3 + 4) += 4
        
        if (sub_61ec90(arg3, &arg1[2]).b != 0)
            if (arg2 s< 0x13)
            label_4ae5f0:
                
                if (arg2 s< 0x1c)
                label_4ae60e:
                    
                    if (sub_61ed80(arg3, &arg1[0xa]).b != 0 && sub_61ed80(arg3, &arg1[0x10]).b != 0
                            && sub_61ec90(arg3, &arg1[0x16]).b != 0
                            && sub_61ec90(arg3, &arg1[0x17]).b != 0
                            && sub_61ec90(arg3, &arg1[0x18]).b != 0)
                        if (arg2 s< 0x17)
                        label_4ae695:
                            
                            if (arg2 s< 0x16)
                            label_4ae6c7:
                                *(arg1 + 0x72) = 1
                                result.b = 1
                                return result
                            
                            if (sub_6c9280(arg3, &arg1[0x1c]).b != 0
                                    && sub_61ec90(arg3, &arg1[3]).b != 0
                                    && sub_6c9280(arg3, arg1 + 0x71).b != 0)
                                goto label_4ae6c7
                        else if (sub_61ec90(arg3, &arg1[0x19]).b != 0
                                && sub_61ec90(arg3, &arg1[0x1a]).b != 0
                                && sub_61ec90(arg3, &arg1[0x1b]).b != 0)
                            goto label_4ae695
                else if (sub_61ec90(arg3, &arg1[9]).b != 0)
                    goto label_4ae60e
            else if (sub_61ec90(arg3, &arg1[4]).b != 0 && sub_61ec90(arg3, &arg1[5]).b != 0
                    && sub_61ec90(arg3, &arg1[6]).b != 0 && sub_61ec90(arg3, &arg1[7]).b != 0
                    && sub_6c9280(arg3, &arg1[8]).b != 0)
                goto label_4ae5f0

result.b = 0
return result
