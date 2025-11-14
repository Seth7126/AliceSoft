// 函数: sub_5dd380
// 地址: 0x5dd380
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ecx = *(*(arg1 + 4) + 8)

if (ecx == 0xffffff28)
    return 0xffffffff

if (arg2 s>= 0)
    int32_t edi_1 = *(ecx + 0xd8)
    int32_t eax_1
    int32_t edx_1
    edx_1:eax_1 = muls.dp.d(0x66666667, *(ecx + 0xdc) - edi_1)
    int32_t edx_2 = edx_1 s>> 4
    
    if (arg2 s< (edx_2 u>> 0x1f) + edx_2)
        return *(edi_1 + arg2 * 0x28 + 0x18)

return 0xffffffff
