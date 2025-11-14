// 函数: sub_42bf70
// 地址: 0x42bf70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

SCROLLINFO lpsi
int32_t result = __security_cookie ^ &lpsi
int32_t result_1 = result

if (arg1[0x32] != 0)
    int32_t eax_1 = GetScrollPos(arg1[0x17], SB_VERT)
    RECT rect
    GetClientRect(arg1[0x17], &rect)
    arg1[0x32]
    result = divs.dp.d(sx.q(rect.bottom - rect.top), arg1[0x32])
    
    if (arg3 == 0 || arg2 s< eax_1 || arg2 s>= eax_1 + result)
        lpsi.cbSize = 0x1c
        lpsi.fMask = 7
        lpsi.nMin = 0
        int32_t eax_7 = (*(*arg1 + 0x88))() - 1
        lpsi.nPage = result
        lpsi.nMax = eax_7
        lpsi.nPos = arg2
        result = SetScrollInfo(arg1[0x17], SB_VERT, &lpsi, 1)

sub_69a5bc(result_1 ^ &lpsi)
return result
