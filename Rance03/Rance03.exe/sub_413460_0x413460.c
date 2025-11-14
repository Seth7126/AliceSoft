// 函数: sub_413460
// 地址: 0x413460
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

SetFocus(arg2)

if (data_75d4b4 != 0)
    int32_t eax_1 = GetScrollPos(arg1[3], SB_VERT)
    int32_t temp0_1 = divs.dp.d(sx.q(arg3 u>> 0x10), arg1[0x16] + arg1[0x15])
    arg1[0x1c] = temp0_1 + eax_1
    int32_t eax_8
    
    if (temp0_1 + eax_1 s>= 0)
        eax_8 = (*(*arg1 + 0x90))()
    
    if (temp0_1 + eax_1 s< 0 || arg1[0x1c] s>= eax_8)
        arg1[0x1c] = 0xffffffff
    
    InvalidateRect(arg2, nullptr, 1)
    int32_t esi_2 = arg1[0x1c]
    
    if (esi_2 s>= 0)
        int32_t eax_9
        int32_t edx_3
        edx_3:eax_9 = muls.dp.d(0x4bda12f7, arg1[0x19] - arg1[0x18])
        int32_t edx_4 = edx_3 s>> 5
        
        if (esi_2 s< (edx_4 u>> 0x1f) + edx_4)
            void* ecx_6 = esi_2 * 0x6c + arg1[0x18]
            sub_417cf0(arg1[0x1f], *(ecx_6 + 4), *(ecx_6 + 8) + 1)

return 0
