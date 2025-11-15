// 函数: sub_5b3640
// 地址: 0x5b3640
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result
uint32_t* ebx_1

if (*(arg1 + 4) s< 1)
    ebx_1 = arg3
    *ebx_1 = 0
else
    char* edx_1 = *(arg2 + 4)
    
    if (&edx_1[4] u> *(arg2 + 8))
        result.b = 0
        return result
    
    ebx_1 = arg3
    *ebx_1 = ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
    *(arg2 + 4) += 4
    
    if (sub_5b3580(sub_5864d0(arg5 + 0x28, *ebx_1 + arg4), arg5 + 0x28, arg2, arg4, *ebx_1).b == 0)
        result.b = 0
        return result

result.b = *ebx_1 s> 0
*(arg5 + 0x40) = result.b
result.b = 1
return result
