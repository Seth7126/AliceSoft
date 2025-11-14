// 函数: sub_6982b0
// 地址: 0x6982b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

BOOL hMenu = *(arg1 + 4)

if (hMenu == 0)
    return hMenu

return TrackPopupMenu(hMenu, TPM_RIGHTBUTTON, arg3, arg4, 0, arg2, nullptr)
