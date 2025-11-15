// 函数: sub_5837e0
// 地址: 0x5837e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 s>= 0)
    int32_t eax_1
    int32_t edx_3
    edx_3:eax_1 = muls.dp.d(0x2aaaaaab, *(arg1 + 0xd0) - *(arg1 + 0xcc))
    int32_t edx_4 = edx_3 s>> 1
    
    if (arg2 s< (edx_4 u>> 0x1f) + edx_4)
        int64_t* ecx_1 = *(arg1 + 0xcc) + arg2 * 0xc
        *ecx_1 = *arg3
        ecx_1[1].d = arg3[1].d
        int32_t eax_6
        eax_6.b = 1
        return eax_6

int32_t eax
eax.b = 0
return eax
