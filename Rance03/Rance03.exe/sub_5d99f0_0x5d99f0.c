// 函数: sub_5d99f0
// 地址: 0x5d99f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 == 0xffffffff)
    return 0

int32_t eax_1
int32_t edx
edx:eax_1 = muls.dp.d(0x38e38e39, *(arg2 + 0x58) - *(arg2 + 0x54))
int32_t edx_1 = edx s>> 4

if (arg1 u< (edx_1 u>> 0x1f) + edx_1)
    int32_t eax_6 = *(arg2 + 0x54) + arg1 * 0x48
    
    if (eax_6 != 0)
        return eax_6 + 8

return 0
