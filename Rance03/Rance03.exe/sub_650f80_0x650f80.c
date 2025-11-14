// 函数: sub_650f80
// 地址: 0x650f80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

SCROLLINFO lpsi
int32_t eax_1 = __security_cookie ^ &lpsi
int32_t eax_3 = GetScrollPos(*arg1[2], SB_VERT)
RECT rect
GetClientRect(*arg1[2], &rect)
int32_t result = divs.dp.d(sx.q(rect.bottom - rect.top), arg1[7] + arg1[5])

if (arg3 == 0 || arg2 s< eax_3 || arg2 s>= eax_3 + result)
    int32_t eax_7
    int32_t edx_2
    edx_2:eax_7 = sx.q(result)
    lpsi.cbSize = 0x1c
    int32_t eax_10 = neg.d((eax_7 - edx_2) s>> 1)
    lpsi.fMask = 7
    int32_t esi_1 = arg2 + eax_10
    lpsi.nMin = 0
    
    if (arg2 + eax_10 s< 0)
        esi_1 = 0
    
    int32_t eax_13 = (*(*arg1 + 4))() - 1
    lpsi.nPage = result
    lpsi.nMax = eax_13
    lpsi.nPos = esi_1
    result = SetScrollInfo(*arg1[2], SB_VERT, &lpsi, 1)

sub_69a5bc(eax_1 ^ &lpsi)
return result
