// 函数: sub_6820c0
// 地址: 0x6820c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

HWND hWnd
int32_t eax_1 = __security_cookie ^ &hWnd
hWnd = arg2
PAINTSTRUCT paint
BitBlt(BeginPaint(arg2, &paint), 0, 0, 
    (*(*(arg1 + 0x6c) + 0x10))((*(*(arg1 + 0x6c) + 0x14))(*(arg1 + 0x90), 0, 0, 0xcc0020)))
EndPaint(hWnd, &paint)
sub_69a5bc(eax_1 ^ &hWnd)
return 0
