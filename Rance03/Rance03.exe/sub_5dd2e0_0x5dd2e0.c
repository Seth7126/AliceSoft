// 函数: sub_5dd2e0
// 地址: 0x5dd2e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = *(*(arg1 + 4) + 8)
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x38e38e39, *(esi + 0xa0) - *(esi + 0x9c))
int32_t edx_1 = edx s>> 4

if (arg2 u< (edx_1 u>> 0x1f) + edx_1)
    void* eax_5 = *(esi + 0x9c) + arg2 * 0x48
    
    if (eax_5 != 0)
        return *(eax_5 + 0x2c)

return 0xffffffff
