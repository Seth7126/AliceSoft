// 函数: sub_6095c0
// 地址: 0x6095c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = arg1[1]
int32_t ecx_2 = (ebx - *arg1) s>> 2

if (ecx_2 u> arg2)
    arg1[1] = ebx + ((arg2 - ecx_2) << 2)
    return 

if (ecx_2 u>= arg2)
    return 

int32_t ebp_1 = arg1[2]
int32_t edx_2 = arg2 - ecx_2

if ((ebp_1 - ebx) s>> 2 u< edx_2)
    if (0x3fffffff - ecx_2 u< edx_2)
        sub_6d0927("vector<T> too long")
        noreturn
    
    int32_t edx_3 = edx_2 + ecx_2
    int32_t ebp_3 = (ebp_1 - *arg1) s>> 2
    int32_t ecx_3 = 0
    uint32_t eax_7 = ebp_3 u>> 1
    
    if (0x3fffffff - eax_7 u>= ebp_3)
        ecx_3 = eax_7 + ebp_3
    
    if (ecx_3 u>= edx_3)
        edx_3 = ecx_3
    
    sub_404670(arg1, edx_3)

uint32_t (* edx_4)[0x4] = arg1[1]
_memset(edx_4, 0, (arg2 - ((edx_4 - *arg1) s>> 2)) << 2)
arg1[1] += (arg2 - ((arg1[1] - *arg1) s>> 2)) << 2
