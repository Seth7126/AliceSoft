// 函数: sub_4fd660
// 地址: 0x4fd660
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t var_4 = arg1
uint32_t arg_8
uint32_t esi = arg_8
char* edx = *(esi + 4)
uint32_t* result

if (&edx[4] u<= *(esi + 8))
    uint32_t ecx_6 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(esi + 4) = &edx[4]
    *(arg1 + 4) = ecx_6
    result = *(esi + 4)
    var_4 = ecx_6
    void* ecx_7 = result + 1
    
    if (ecx_7 u<= *(esi + 8))
        result.b = *result == 1
        *(esi + 4) = ecx_7
        *(arg1 + 8) = result.b
        
        if (arg2 s>= 4)
            if (sub_6c9300(esi, arg1 + 0xc).b != 0)
                goto label_4fd6fe
        else
            arg_8 = 0
            
            if (sub_61ec90(esi, &arg_8).b != 0)
                *(arg1 + 0xc) = _mm_cvtepi32_ps(zx.o(arg_8))
            label_4fd6fe:
                
                if (arg2 s< 4)
                label_4fd719:
                    
                    if (sub_61ec90(esi, &var_4).b != 0)
                        *(arg1 + 0x14) = var_4
                        
                        if (sub_61ec90(esi, arg1 + 0x18).b != 0
                                && sub_61ec90(esi, arg1 + 0x1c).b != 0
                                && sub_61ec90(esi, arg1 + 0x20).b != 0
                                && sub_61ec90(esi, arg1 + 0x24).b != 0)
                            *(arg1 + 0x28) = 1
                            result.b = 1
                            return result
                else if (sub_6c9280(esi, arg1 + 0x10).b != 0)
                    goto label_4fd719

result.b = 0
return result
