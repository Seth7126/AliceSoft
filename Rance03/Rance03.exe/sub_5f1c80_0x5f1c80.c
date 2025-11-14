// 函数: sub_5f1c80
// 地址: 0x5f1c80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

SetTextColor(*(arg1 + 0x30), 0xffffff)
SetBkColor(*(arg1 + 0x30), 0)
SetBkMode(*(arg1 + 0x30), 1)
HGDIOBJ h = SelectObject(*(arg1 + 0x30), *(arg1 + 0xe0))
void** lpString = arg2
int32_t c = lpString[4]

if (lpString[5] u>= 0x10)
    lpString = *lpString

TextOutA(*(arg1 + 0x30), 0, 0, lpString, c)
SelectObject(*(arg1 + 0x30), h)
HGDIOBJ result
result.b = 1
return result
