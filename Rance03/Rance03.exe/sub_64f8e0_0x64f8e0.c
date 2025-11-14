// 函数: sub_64f8e0
// 地址: 0x64f8e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t edi_1 = arg2 u>> 0x10

if (edi_1 s> 0)
    sub_64fb50(arg1, arg3)
    sub_64feb0(arg1)
    sub_6501a0(arg1)
    
    if (*(arg1 + 0x88) s>= 0)
        int32_t eax_1
        int32_t edx_1
        edx_1:eax_1 = muls.dp.d(0x38e38e39, *(arg1 + 0x80) - *(arg1 + 0x7c))
        int32_t edx_2 = edx_1 s>> 3
        
        if (*(arg1 + 0x88) s< (edx_2 u>> 0x1f) + edx_2)
            int32_t Y = (*(*(arg1 + 0xc) + 0x14))()
            MoveWindow(*(*(arg1 + 0x7c) + *(arg1 + 0x88) * 0x24), 0, Y, arg3, edi_1 - Y, 1)

return 0
