// 函数: sub_431d40
// 地址: 0x431d40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x60) != 0)
    void* lpClassName = arg1 + 8
    
    if (*(arg1 + 0x1c) u>= 0x10)
        lpClassName = *lpClassName
    
    UnregisterClassA(lpClassName, *(arg1 + 0x58))
    *(arg1 + 0x60) = 0

void* eax_1 = *(arg1 + 4)
*(arg1 + 0x58) = arg2
void* lpClassName_1 = arg1 + 8
*(eax_1 + 0x10) = arg2
void* lpClassName_2

if (*(lpClassName_1 + 0x14) u< 0x10)
    lpClassName_2 = lpClassName_1
else
    lpClassName_2 = *lpClassName_1

*(*(arg1 + 4) + 0x24) = lpClassName_2
RegisterClassA(*(arg1 + 4))
void* lpWindowName = arg1 + 0x20
*(arg1 + 0x60) = 1

if (*(lpWindowName + 0x14) u>= 0x10)
    lpWindowName = *lpWindowName

if (*(lpClassName_1 + 0x14) u>= 0x10)
    lpClassName_1 = *lpClassName_1

HWND result = CreateWindowExA(*(arg1 + 0x38), lpClassName_1, lpWindowName, *(arg1 + 0x3c), 
    *(arg1 + 0x40), *(arg1 + 0x44), *(arg1 + 0x48), *(arg1 + 0x4c), *(arg1 + 0x50), *(arg1 + 0x54), 
    arg2, arg1)

if (result == 0)
    result.b = 0
    return result

*(arg1 + 0x5c) = result
result.b = 1
return result
