// 函数: sub_42c030
// 地址: 0x42c030
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

SCROLLINFO lpsi
int32_t result = __security_cookie ^ &lpsi
int32_t result_1 = result

if (arg1[0x32] != 0)
    RECT rect
    GetClientRect(arg1[0x17], &rect)
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = sx.q(arg1[0x32])
    lpsi.cbSize = 0x1c
    lpsi.fMask = 7
    int32_t eax_5
    int32_t edx_2
    edx_2:eax_5 = sx.q(rect.right - rect.left)
    lpsi.nMin = 0
    int32_t eax_8 = (*(*arg1 + 0x8c))() + 1
    lpsi.nPage = divs.dp.d(edx_2:eax_5, (eax_2 - edx_1) s>> 1)
    lpsi.nMax = eax_8
    lpsi.nPos = arg2
    result = SetScrollInfo(arg1[0x17], SB_HORZ, &lpsi, 1)

sub_69a5bc(result_1 ^ &lpsi)
return result
