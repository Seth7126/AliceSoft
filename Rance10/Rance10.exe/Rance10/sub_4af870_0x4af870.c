// 函数: sub_4af870
// 地址: 0x4af870
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* edx = *(arg2 + 4)
uint32_t* result

if (&edx[4] u> *(arg2 + 8))
label_4af8f6:
    result.b = 0
    return result

uint32_t ecx_6 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
*(arg2 + 4) = &edx[4]
sub_42c9c0(arg1, ecx_6)
result = *arg1
int32_t ecx_8 = arg1[1]

while (result != ecx_8)
    char* edx_1 = *(arg2 + 4)
    
    if (&edx_1[4] u> *(arg2 + 8))
        goto label_4af8f6
    
    *result = ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
    result = &result[1]
    *(arg2 + 4) += 4

result.b = 1
return result
