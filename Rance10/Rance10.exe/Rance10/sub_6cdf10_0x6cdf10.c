// 函数: sub_6cdf10
// 地址: 0x6cdf10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct MEMORY_MAPPED_VIEW_ADDRESS lpBaseAddress = *(arg1 + 8)

if (lpBaseAddress != 0)
    UnmapViewOfFile(lpBaseAddress)
    *(arg1 + 8) = 0

BOOL hObject = *(arg1 + 4)

if (hObject != 0)
    hObject = CloseHandle(hObject)
    *(arg1 + 4) = 0

*(arg1 + 0xc) = 0
bool cond:0 = *(arg1 + 0x24) u< 0x10
*(arg1 + 0x20) = 0

if (cond:0)
    *(arg1 + 0x10) = 0
    return hObject

char* eax = *(arg1 + 0x10)
*eax = 0
return eax
