// 函数: sub_600c70
// 地址: 0x600c70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

SCROLLINFO lpsi
int32_t eax_1 = __security_cookie ^ &lpsi
enum SCROLLBAR_CONSTANTS nBar
int32_t nPos
int32_t nMin
int32_t nMin_1

switch (arg3)
    case 0
        int32_t eax_3 = GetScrollPos(arg2, SB_VERT)
        lpsi.cbSize = 0x1c
        lpsi.fMask = 0x17
        GetScrollInfo(arg2, SB_VERT, &lpsi)
        nMin = eax_3 - lpsi.nPage
    label_600cc3:
        int32_t nMax = lpsi.nMax
        
        if (nMin s< lpsi.nMin)
            nMin = lpsi.nMin
        
        if (nMin s>= nMax)
            nMin = nMax - 1
        
        int32_t var_30_2 = 1
        nPos = nMin
        nBar = SB_VERT
    label_600d98:
        SetScrollPos(arg2, nBar, nPos, 1)
        InvalidateRect(**(arg1 + 0x14), nullptr, 1)
        UpdateWindow(**(arg1 + 0x14))
    case 1
        int32_t eax_4 = GetScrollPos(arg2, SB_VERT)
        lpsi.cbSize = 0x1c
        lpsi.fMask = 0x17
        GetScrollInfo(arg2, SB_VERT, &lpsi)
        nMin = eax_4 + lpsi.nPage
        goto label_600cc3
    case 4
        nMin_1 = GetScrollPos(arg2, SB_HORZ) - 1
    label_600d64:
        lpsi.cbSize = 0x1c
        lpsi.fMask = 0x17
        GetScrollInfo(arg2, SB_HORZ, &lpsi)
        int32_t nMax_1 = lpsi.nMax
        
        if (nMin_1 s< lpsi.nMin)
            nMin_1 = lpsi.nMin
        
        if (nMin_1 s>= nMax_1)
            nMin_1 = nMax_1 - 1
        
        int32_t var_30_6 = 1
        nPos = nMin_1
        nBar = SB_HORZ
        goto label_600d98
    case 5
        nMin = GetScrollPos(arg2, SB_VERT) - 1
    label_600d1c:
        lpsi.cbSize = 0x1c
        lpsi.fMask = 0x17
        GetScrollInfo(arg2, SB_VERT, &lpsi)
        goto label_600cc3
    case 6
        nMin_1 = GetScrollPos(arg2, SB_HORZ) + 1
        goto label_600d64
    case 7
        nMin = GetScrollPos(arg2, SB_VERT) + 1
        goto label_600d1c

sub_69a5bc(eax_1 ^ &lpsi)
return 0
