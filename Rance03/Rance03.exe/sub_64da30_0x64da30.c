// 函数: sub_64da30
// 地址: 0x64da30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

HMENU hMenu = CreatePopupMenu()

if (hMenu != 0)
    AppendMenuA(hMenu, MF_BYCOMMAND, 1, 0x7007a0)
    AppendMenuA(hMenu, MF_BYCOMMAND, 2, 0x7007b8)
    POINT point
    GetCursorPos(&point)
    TrackPopupMenu(hMenu, TPM_RIGHTBUTTON, point.x, point.y, 0, arg1, nullptr)
    DestroyMenu(hMenu)

return 0
