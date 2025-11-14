// 函数: sub_417530
// 地址: 0x417530
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

SetFocus(arg2)

if (data_75d4b4 != 0)
    int32_t eax_1 = GetScrollPos(*(arg1 + 0xc), SB_HORZ)
    int32_t eax_2 = GetScrollPos(*(arg1 + 0xc), SB_VERT)
    int32_t edi_1 = *(arg1 + 0x54)
    int32_t ebp_2 = eax_2 + divs.dp.d(sx.q(arg3 u>> 0x10), *(arg1 + 0x58) + edi_1)
    int32_t eax_8
    int32_t edx_2
    edx_2:eax_8 = sx.q(edi_1)
    *(arg1 + 0x90) = divs.dp.d(sx.q(zx.d(arg3.w)), (eax_8 - edx_2) s>> 1) + eax_1
    *(arg1 + 0x94) = ebp_2
    InvalidateRect(arg2, nullptr, 0)
    data_74b430 = data_75d4b0
    data_75d4ac = ebp_2 + 1
    HMENU hMenu = CreatePopupMenu()
    
    if (hMenu != 0)
        AppendMenuA(hMenu, MF_BYCOMMAND, 0x9c71, 0x6da5e0)
        AppendMenuA(hMenu, MF_BYCOMMAND, 0x9c74, 0x6da5fc)
        AppendMenuA(hMenu, MF_SEPARATOR, 0, nullptr)
        AppendMenuA(hMenu, MF_BYCOMMAND, 0x9d0b, 0x6da61c)
        POINT point
        GetCursorPos(&point)
        TrackPopupMenu(hMenu, TPM_RIGHTBUTTON, point.x, point.y, 0, 
            GetParent(GetParent(GetParent(arg2))), nullptr)
        DestroyMenu(hMenu)

return 0
