// 函数: sub_67d1b0
// 地址: 0x67d1b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

SCROLLINFO lpsi
int32_t eax_1 = __security_cookie ^ &lpsi
enum SCROLLBAR_CONSTANTS nBar
int32_t nPos
int32_t nMin
int32_t nMin_1

if (arg3 - 0x21 u<= 7)
    switch (arg3)
        case 0x21
            int32_t eax_4 = GetScrollPos(arg2, SB_VERT)
            lpsi.cbSize = 0x1c
            lpsi.fMask = 0x17
            GetScrollInfo(arg2, SB_VERT, &lpsi)
            nMin = eax_4 - lpsi.nPage
        label_67d20f:
            int32_t nMax = lpsi.nMax
            
            if (nMin s< lpsi.nMin)
                nMin = lpsi.nMin
            
            if (nMin s>= nMax)
                nMin = nMax - 1
            
            int32_t var_30_2 = 1
            nPos = nMin
            nBar = SB_VERT
        label_67d2e4:
            SetScrollPos(arg2, nBar, nPos, 1)
            InvalidateRect(**(arg1 + 0x14), nullptr, 1)
            UpdateWindow(**(arg1 + 0x14))
        case 0x22
            int32_t eax_5 = GetScrollPos(arg2, SB_VERT)
            lpsi.cbSize = 0x1c
            lpsi.fMask = 0x17
            GetScrollInfo(arg2, SB_VERT, &lpsi)
            nMin = eax_5 + lpsi.nPage
            goto label_67d20f
        case 0x25
            nMin_1 = GetScrollPos(arg2, SB_HORZ) - 1
        label_67d2b0:
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
            goto label_67d2e4
        case 0x26
            nMin = GetScrollPos(arg2, SB_VERT) - 1
        label_67d268:
            lpsi.cbSize = 0x1c
            lpsi.fMask = 0x17
            GetScrollInfo(arg2, SB_VERT, &lpsi)
            goto label_67d20f
        case 0x27
            nMin_1 = GetScrollPos(arg2, SB_HORZ) + 1
            goto label_67d2b0
        case 0x28
            nMin = GetScrollPos(arg2, SB_VERT) + 1
            goto label_67d268
@__security_check_cookie@4(eax_1 ^ &lpsi)
return 0
