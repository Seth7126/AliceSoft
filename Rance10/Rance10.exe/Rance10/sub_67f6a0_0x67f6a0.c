// 函数: sub_67f6a0
// 地址: 0x67f6a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

BOOL hFindFile = *arg1

if (hFindFile == 0xffffffff)
    return hFindFile

return FindClose(hFindFile)
