// 函数: sub_5ffa20
// 地址: 0x5ffa20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t ebx = arg2
char* edx = *(ebx + 4)
int32_t result

if (&edx[4] u<= *(ebx + 8))
    uint32_t ecx_6 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(ebx + 4) = &edx[4]
    *(arg1 + 4) = ecx_6
    char* edx_1 = *(ebx + 4)
    
    if (&edx_1[4] u<= *(ebx + 8))
        *(arg1 + 8) =
            ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        *(ebx + 4) += 4
        
        if (sub_61ec90(ebx, &arg2).b != 0)
            sub_6000e0(arg1 + 0xc, arg2)
            int32_t i = *(arg1 + 0xc)
            
            for (int32_t edi_1 = *(arg1 + 0x10); i != edi_1; i += 0x18)
                if (sub_5ffa20(ebx).b == 0)
                    goto label_5ffacf
            
            result.b = 1
            return result

label_5ffacf:
result.b = 0
return result
