// 函数: sub_64bd30
// 地址: 0x64bd30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

HDC hdc = *(arg1 + 0x30)
HGDIOBJ h = SelectObject(hdc, *(arg1 + 0x40))
SetTextColor(hdc, 0xffffff)
SetBkColor(hdc, 0)
void** lpString = arg2
int32_t c = lpString[4]

if (lpString[5] u>= 0x10)
    lpString = *lpString

TextOutA(hdc, 0, 0, lpString, c)
SelectObject(hdc, h)
HGDIOBJ result
result.b = 1
return result
