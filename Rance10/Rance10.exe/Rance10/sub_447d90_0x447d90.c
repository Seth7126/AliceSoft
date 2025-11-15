// 函数: sub_447d90
// 地址: 0x447d90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = arg2
*(arg1 + 0x28) = ((sub_4365c0(esi) & 0x8fffffff) | 0x8000000) u>> 0x1b
esi[1] += 1
int32_t ebp = esi[1]

if (((*(arg1 + 0x28) u>> 4).b & 1) != 0)
    uint32_t ecx_2 = ebp u>> 3
    int32_t ebx_2 = ebp & 7
    
    if (ebx_2 == 0)
        arg2 = 0
    else
        arg2 = zx.d(*(**esi + ecx_2 + 1))
    
    char edx_4 = ((zx.d(*(**esi + ecx_2)) << 8 | arg2) s>> (8 - ebx_2.b)).b
    esi[1] = ebp + 5
    *(arg1 + 8) = zx.d(edx_4) u>> 3

_memset(arg1 + 0x30, 0, 0x300)
return sub_448180(arg1, esi) != 0
