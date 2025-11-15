// 函数: sub_63ed20
// 地址: 0x63ed20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t ebx = arg2
char* edx = *(ebx + 4)
char* result

if (&edx[4] u<= *(ebx + 8))
    uint32_t ecx_6 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(ebx + 4) = &edx[4]
    *(arg1 + 4) = ecx_6
    result = *(ebx + 4) + 4
    
    if (result u<= *(ebx + 8))
        *(ebx + 4) = result
        
        if (sub_61ec90(ebx, &arg2).b != 0)
            result = arg2
            
            if (result s>= 0)
                sub_63edc0(arg1 + 8, result)
                void* i = *(arg1 + 8)
                
                for (int32_t edi_1 = *(arg1 + 0xc); i != edi_1; i += 0x10)
                    if (sub_63e5f0(i, ebx).b == 0)
                        goto label_63edae
                
                result.b = 1
                return result

label_63edae:
result.b = 0
return result
