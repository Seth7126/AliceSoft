// 函数: sub_48e680
// 地址: 0x48e680
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

sub_48e4e0(arg1)
uint32_t arg_4
uint32_t esi = arg_4
char* edx = *(esi + 4)
uint32_t result

if (&edx[4] u<= *(esi + 8))
    uint32_t eax_3 = zx.d(*edx) | ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8
    *(esi + 4) = &edx[4]
    
    if (sub_468c20(esi, arg1 + 0xc, (eax_3 + 3) & 0xfffffffc).b != 0)
        arg_4 = 0
        
        if (sub_468b20(esi, &arg_4).b != 0
                && sub_468c20(esi, arg1 + 0x24, (arg_4 + 3) & 0xfffffffc).b != 0)
            arg_4 = 0
            
            if (sub_468b20(esi, &arg_4).b != 0)
                *(arg1 + 8) = arg_4
                
                if (sub_468b20(esi, arg1 + 0x3c).b != 0)
                    struct IInterface::partsengine::CFlatKeyDataGraphic::VTable** ecx_12
                    result, ecx_12 = sub_468b20(esi, arg1 + 0x40)
                    
                    if (result.b != 0)
                        result = *(arg1 + 8)
                        
                        if (result != 3)
                            if (result == 4)
                                uint32_t var_10_8 = esi
                                result = sub_48e860(arg1)
                                goto label_48e75e
                            
                            if (result != 5)
                                result.b = 1
                                return result
                            
                            struct IInterface::partsengine::CFlatKeyDataGraphic::VTable** 
                                var_10_9 = ecx_12
                            
                            if (sub_48e9f0(arg1, esi).b != 0)
                                result.b = 1
                                return result
                        else
                            int32_t var_10_7 = arg2
                            result = sub_48e7a0(arg1, esi, ecx_12, *(arg1 + 0x40))
                        label_48e75e:
                            
                            if (result.b != 0)
                                result.b = 1
                                return result

result.b = 0
return result
