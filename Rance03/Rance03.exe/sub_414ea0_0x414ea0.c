// 函数: sub_414ea0
// 地址: 0x414ea0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 s>= 0)
    int32_t eax_1
    int32_t edx_3
    edx_3:eax_1 = muls.dp.d(0x2aaaaaab, arg1[0x1a] - arg1[0x19])
    int32_t edx_4 = edx_3 s>> 3
    
    if (arg3 s< (edx_4 u>> 0x1f) + edx_4)
        COLORREF color
        
        if (arg3 != arg1[0x1c])
            color = arg1[0x1d]
        else
            color = arg1[0x1e]
        
        SetBkColor(arg2, color)
        void* edi_3 = arg3 * 0x30 + arg1[0x19]
        int32_t* eax_5 = edi_3 + 0x18
        
        if (*(edi_3 + 0x2c) u>= 0x10)
            eax_5 = *eax_5
        
        sub_41b120(arg1, arg2, arg4, arg5, eax_5)
        return *(edi_3 + 0x28)

return 0
