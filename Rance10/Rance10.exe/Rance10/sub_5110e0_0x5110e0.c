// 函数: sub_5110e0
// 地址: 0x5110e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t esi = arg2
char* edx = *(esi + 4)
uint32_t result

if (&edx[4] u> *(esi + 8))
label_511185:
    result.b = 0
    return result

int32_t ebp_1 = 0
uint32_t edi_7 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
*(esi + 4) = &edx[4]

if (edi_7 s> 0)
    do
        char* edx_1 = *(esi + 4)
        
        if (&edx_1[4] u> *(esi + 8))
            goto label_511185
        
        uint32_t ecx_7 =
            ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        *(esi + 4) = &edx_1[4]
        arg2 = ecx_7
        uint32_t var_24_1 = arg2
        uint32_t* var_28_1 = &arg2
        int32_t* var_8
        sub_514cb0(arg1 + 0x20, &var_8, ecx_7)
        ebp_1 += 1
    while (ebp_1 s< edi_7)

result.b = 1
return result
