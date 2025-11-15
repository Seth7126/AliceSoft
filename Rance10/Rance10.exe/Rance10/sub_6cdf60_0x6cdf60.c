// 函数: sub_6cdf60
// 地址: 0x6cdf60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

BOOL lpBaseAddress = *(arg1 + 8)

if (lpBaseAddress != 0)
    lpBaseAddress = UnmapViewOfFile(lpBaseAddress)
    *(arg1 + 8) = 0

return lpBaseAddress
