// 函数: sub_5b2aa0
// 地址: 0x5b2aa0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t* var_4_1 = arg1
char* edx = *(arg2 + 4)
uint32_t* result

if (&edx[4] u> *(arg2 + 8))
label_5b2b59:
    result.b = 0
    return result

uint32_t ecx_6 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
*(arg2 + 4) = &edx[4]
sub_5b43c0(arg3, ecx_6)
int32_t* i = *arg3

for (int32_t edi_2 = arg3[1]; i != edi_2; i = &i[9])
    if (sub_61ed80(arg2, i).b == 0)
        goto label_5b2b59
    
    char* edx_1 = *(arg2 + 4)
    
    if (&edx_1[4] u> *(arg2 + 8))
        goto label_5b2b59
    
    uint32_t ecx_15 =
        ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
    *(arg2 + 4) = &edx_1[4]
    i[6] = ecx_15
    
    if (arg1[1] s< 3)
        i[7] = 0x3f800000
        i[8] = 0x3f800000
    else
        if (sub_6c9300(arg2, &i[7]).b == 0)
            goto label_5b2b59
        
        if (sub_6c9300(arg2, &i[8]).b == 0)
            goto label_5b2b59

result.b = 1
return result
