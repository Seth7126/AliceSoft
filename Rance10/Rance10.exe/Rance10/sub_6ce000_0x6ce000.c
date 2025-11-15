// 函数: sub_6ce000
// 地址: 0x6ce000
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

LOGFONTA lplf
int32_t eax_1 = __security_cookie ^ &lplf
HGDIOBJ ho = *(arg1 + 4)

if (ho != 0)
    DeleteObject(ho)
    *(arg1 + 4) = 0

lplf.lfWidth = 0
lplf.lfHeight = neg.d(*(arg1 + 8))
lplf.lfUnderline = *(arg1 + 0x28) != 0
lplf.lfWeight = *(arg1 + 0x24)
void* eax_5 = arg1 + 0xc
lplf.lfStrikeOut = *(arg1 + 0x29) != 0
lplf.lfEscapement = 0
lplf.lfOrientation = 0
lplf.lfItalic = 0
lplf.lfCharSet = 0x80
lplf.lfOutPrecision = 0
lplf.lfClipPrecision = 0
lplf.lfQuality = 0
lplf.lfPitchAndFamily = 1

if (*(eax_5 + 0x14) u>= 0x10)
    eax_5 = *eax_5

var_24
_strcpy_s(&var_24, 0x20, eax_5)
HFONT result = CreateFontIndirectA(&lplf)
*(arg1 + 4) = result
result.b = result != 0
@__security_check_cookie@4(eax_1 ^ &lplf)
return result
