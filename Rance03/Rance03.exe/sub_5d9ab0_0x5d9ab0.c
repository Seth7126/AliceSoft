// 函数: sub_5d9ab0
// 地址: 0x5d9ab0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x38e38e39, *(arg2 + 0x58) - *(arg2 + 0x54))
int32_t edx_3 = edx_2 s>> 4

if (arg1 u< (edx_3 u>> 0x1f) + edx_3)
    int32_t eax_5 = *(arg2 + 0x54) + arg1 * 0x48
    
    if (eax_5 != 0)
        return eax_5 + 8

return 0
