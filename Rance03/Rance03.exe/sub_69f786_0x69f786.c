// 函数: sub_69f786
// 地址: 0x69f786
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

STARTUPINFOW startupInfo
GetStartupInfoW(&startupInfo)

if ((startupInfo.dwFlags.b & 1) == 0)
    return 0xa

return zx.d(startupInfo.wShowWindow)
