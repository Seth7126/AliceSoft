// 函数: sub_651040
// 地址: 0x651040
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

SCROLLINFO lpsi
int32_t eax_1 = __security_cookie ^ &lpsi
int32_t* result = arg1[2]
HWND ebx = *result

if (ebx != 0)
    int32_t eax_2 = GetScrollPos(ebx, SB_HORZ)
    lpsi.cbSize = 0x1c
    lpsi.fMask = 7
    lpsi.nMin = 0
    int32_t eax_4 = (*(*arg1 + 8))() + 1
    lpsi.nPos = eax_2
    lpsi.nMax = eax_4
    lpsi.nPage = arg2
    result = SetScrollInfo(ebx, SB_HORZ, &lpsi, 1)

sub_69a5bc(eax_1 ^ &lpsi)
return result
