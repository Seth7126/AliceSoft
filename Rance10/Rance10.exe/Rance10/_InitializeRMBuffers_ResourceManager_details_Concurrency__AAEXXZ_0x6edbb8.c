// 函数: ?InitializeRMBuffers@ResourceManager@details@Concurrency@@AAEXXZ
// 地址: 0x6edbb8
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i = *(arg1 + 0xc)

if (i u< *(arg1 + 8))
    do
        i *= 2
    while (i u< *(arg1 + 8))
    
    int32_t var_10_1 = *(arg1 + 0x54)
    *(arg1 + 0xc) = i
    _free(var_10_1)
    _free(*(arg1 + 0x58))
    _free(*(arg1 + 0x5c))
    int32_t eax = *(arg1 + 0xc)
    int32_t ecx
    ecx.b = mulu.dp.d(eax, 4) u>> 0x20 != 0
    int32_t var_1c_1 = neg.d(ecx) | (eax * 4)
    *(arg1 + 0x54) = sub_6e8787()
    
    if (*(arg1 + 0x58) != 0)
        int32_t eax_3 = *(arg1 + 0xc)
        int32_t ecx_3
        ecx_3.b = mulu.dp.d(eax_3, 4) u>> 0x20 != 0
        int32_t var_10_2 = neg.d(ecx_3) | (eax_3 * 4)
        *(arg1 + 0x58) = sub_6e8787()
        int32_t eax_6 = *(arg1 + 0xc)
        int32_t ecx_6
        ecx_6.b = mulu.dp.d(eax_6, 4) u>> 0x20 != 0
        int32_t var_14_2 = neg.d(ecx_6) | (eax_6 * 4)
        *(arg1 + 0x5c) = sub_6e8787()

uint32_t (* result)[0x4] = _memset(*(arg1 + 0x54), 0, *(arg1 + 8) << 2)

if (*(arg1 + 0x58) == 0)
    return result

_memset(*(arg1 + 0x58), 0, *(arg1 + 8) << 2)
return _memset(*(arg1 + 0x5c), 0, *(arg1 + 8) << 2)
