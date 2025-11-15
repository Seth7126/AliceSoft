// 函数: sub_4f9080
// 地址: 0x4f9080
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_c = arg1
char* edx = *(arg3 + 4)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (&edx[4] u<= *(arg3 + 8))
    *(arg1 + 0x34) = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(arg3 + 4) += 4
    char* edx_1 = *(arg3 + 4)
    
    if (&edx_1[4] u<= *(arg3 + 8))
        *(arg1 + 0x38) =
            ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        *(arg3 + 4) += 4
        
        if (sub_61ec90(arg3, arg1 + 0x3c).b != 0 && sub_61ec90(arg3, arg1 + 0x40).b != 0
                && sub_61ec90(arg3, arg1 + 0x44).b != 0 && sub_61ec90(arg3, arg1 + 0x48).b != 0
                && sub_61ec90(arg3, arg1 + 0x4c).b != 0 && sub_6c9300(arg3, arg1 + 0x50).b != 0
                && sub_61ec90(arg3, arg1 + 0x54).b != 0 && sub_61ed80(arg3, arg1 + 0x58).b != 0)
            if (arg2 s< 0x25)
            label_4f91ec:
                
                if (arg2 s< 2)
                label_4f9203:
                    
                    if (arg2 s< 0x25)
                    label_4f9250:
                        
                        if (arg2 s< 0xd)
                            *(arg1 + 0x148) = 0
                            *(arg1 + 0x14c) = 0
                        label_4f9299:
                            *(arg1 + 0x150) = 1
                            result.b = 1
                            return result
                        
                        if (sub_61ec90(arg3, arg1 + 0x148).b != 0
                                && sub_61ec90(arg3, arg1 + 0x14c).b != 0)
                            goto label_4f9299
                    else if (sub_61ed80(arg3, arg1 + 0xe8).b != 0
                            && sub_61ed80(arg3, arg1 + 0x100).b != 0
                            && sub_61ed80(arg3, arg1 + 0x118).b != 0
                            && sub_61ed80(arg3, arg1 + 0x130).b != 0)
                        goto label_4f9250
                else if (sub_61ed80(arg3, arg1 + 0xd0).b != 0)
                    goto label_4f9203
            else if (sub_61ed80(arg3, arg1 + 0x70).b != 0 && sub_61ed80(arg3, arg1 + 0x88).b != 0
                    && sub_61ed80(arg3, arg1 + 0xa0).b != 0
                    && sub_61ed80(arg3, arg1 + 0xb8).b != 0)
                goto label_4f91ec

result.b = 0
return result
