// 函数: sub_4d74a0
// 地址: 0x4d74a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t var_c = arg1
sub_4d7310(arg1)
char* edx = *(arg2 + 4)
uint32_t result

if (&edx[4] u<= *(arg2 + 8))
    uint32_t eax_3 = zx.d(*edx) | ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8
    *(arg2 + 4) = &edx[4]
    
    if (sub_6c9360(arg2, arg1 + 0xc, (eax_3 + 3) & 0xfffffffc).b != 0)
        var_c = 0
        
        if (sub_61ec90(arg2, &var_c).b != 0
                && sub_6c9360(arg2, arg1 + 0x24, (var_c + 3) & 0xfffffffc).b != 0)
            var_c = 0
            
            if (sub_61ec90(arg2, &var_c).b != 0)
                *(arg1 + 8) = var_c
                
                if (sub_61ec90(arg2, arg1 + 0x3c).b != 0)
                    int32_t ecx_12
                    result, ecx_12 = sub_61ec90(arg2, arg1 + 0x40)
                    
                    if (result.b != 0)
                        result = *(arg1 + 8)
                        
                        if (result != 3)
                            if (result == 4)
                                uint32_t var_1c_8 = arg2
                                result = sub_4d7760(arg1)
                                goto label_4d7583
                            
                            if (result != 5)
                                result.b = 1
                                return result
                            
                            int32_t var_1c_9 = ecx_12
                            
                            if (sub_4d7900(arg1, arg2).b != 0)
                                result.b = 1
                                return result
                        else
                            int32_t var_1c_7 = arg3
                            result = sub_4d75c0(arg1, arg2, ecx_12, *(arg1 + 0x40))
                        label_4d7583:
                            
                            if (result.b != 0)
                                result.b = 1
                                return result

result.b = 0
return result
