// 函数: sub_417c60
// 地址: 0x417c60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

RECT rect
int32_t eax_1 = __security_cookie ^ &rect
int32_t eax_2 = GetScrollPos(*(arg1 + 0xc), SB_VERT)
GetClientRect(*(arg1 + 0xc), &rect)
int32_t result = divs.dp.d(sx.q(rect.bottom - rect.top), *(arg1 + 0x58) + *(arg1 + 0x54))

if (arg2 s< eax_2 || arg2 s> result + eax_2)
    int32_t eax_6
    int32_t edx_2
    edx_2:eax_6 = sx.q(result)
    int32_t eax_9 = neg.d((eax_6 - edx_2) s>> 1)
    int32_t nPos = arg2 + eax_9
    
    if (arg2 + eax_9 s< 0)
        nPos = 0
    
    result = SetScrollPos(*(arg1 + 0xc), SB_VERT, nPos, 1)

sub_69a5bc(eax_1 ^ &rect)
return result
