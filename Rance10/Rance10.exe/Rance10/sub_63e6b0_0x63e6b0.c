// 函数: sub_63e6b0
// 地址: 0x63e6b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* esi = *(arg2 + 4)
char* result

if (&esi[4] u<= *(arg2 + 8))
    int32_t edx_7 = ((zx.d(esi[3]) << 8 | zx.d(esi[2])) << 8 | zx.d(esi[1])) << 8 | zx.d(*esi)
    *(arg2 + 4) = &esi[4]
    
    if (edx_7 s>= 0)
        sub_63e730(arg1 + 4, edx_7)
        void* i = *(arg1 + 4)
        
        for (int32_t edi_2 = *(arg1 + 8); i != edi_2; i += 0x14)
            if (sub_63ed20(i, arg2).b == 0)
                goto label_63e71d
        
        result.b = 1
        return result

label_63e71d:
result.b = 0
return result
