// 函数: sub_4ad550
// 地址: 0x4ad550
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t var_4 = arg1
uint32_t arg_8
uint32_t esi = arg_8
char* edx = *(esi + 4)
uint32_t* result

if (&edx[4] u<= *(esi + 8))
    uint32_t ecx_6 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(esi + 4) = &edx[4]
    *(arg1 + 4) = ecx_6
    var_4 = ecx_6
    void* ecx_7 = *(esi + 4)
    
    if (ecx_7 + 1 u<= *(esi + 8))
        result.b = *ecx_7 == 1
        *(arg1 + 8) = result.b
        *(esi + 4) += 1
        
        if (arg2 s>= 4)
            if (sub_468bc0(esi, arg1 + 0xc).b != 0)
                goto label_4ad5ee
        else
            arg_8 = 0
            
            if (sub_468b20(esi, &arg_8).b != 0)
                *(arg1 + 0xc) = _mm_cvtepi32_ps(zx.o(arg_8))
            label_4ad5ee:
                
                if (arg2 s< 4)
                label_4ad609:
                    
                    if (sub_468b20(esi, &var_4).b != 0)
                        *(arg1 + 0x14) = var_4
                        
                        if (sub_468b20(esi, arg1 + 0x18).b != 0
                                && sub_468b20(esi, arg1 + 0x1c).b != 0
                                && sub_468b20(esi, arg1 + 0x20).b != 0)
                            return sub_468b20(esi, arg1 + 0x24) != 0
                else if (sub_468ab0(esi, arg1 + 0x10).b != 0)
                    goto label_4ad609

result.b = 0
return result
