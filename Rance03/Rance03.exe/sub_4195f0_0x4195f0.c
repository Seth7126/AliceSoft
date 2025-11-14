// 函数: sub_4195f0
// 地址: 0x4195f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t nWidth = zx.d(arg2.w)
uint32_t edi_1 = arg2 u>> 0x10

if (nWidth s> 0 && edi_1 s> 0)
    sub_419880(arg1, nWidth)
    sub_419bf0(arg1)
    sub_419f00(arg1)
    
    if (*(arg1 + 0x90) s>= 0)
        int32_t eax_1
        int32_t edx_1
        edx_1:eax_1 = muls.dp.d(0x38e38e39, *(arg1 + 0x88) - *(arg1 + 0x84))
        int32_t edx_2 = edx_1 s>> 3
        
        if (*(arg1 + 0x90) s< (edx_2 u>> 0x1f) + edx_2)
            int32_t Y = (*(*(arg1 + 0x14) + 0x14))()
            MoveWindow(*(*(arg1 + 0x84) + *(arg1 + 0x90) * 0x24), 0, Y, nWidth, edi_1 - Y, 1)

return 0
