// 函数: sub_696f50
// 地址: 0x696f50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 4) != 0)
    goto label_696f6c

BOOL result = OpenClipboard(nullptr)

if (result != 0)
    *(arg1 + 4) = 1
label_696f6c:
    EmptyClipboard()
    void** ebx_1 = arg2
    result = GlobalAlloc(GHND, ebx_1[4] + 1)
    BOOL hMem = result
    
    if (hMem != 0)
        char* eax_3 = GlobalLock(hMem)
        
        if (eax_3 != 0)
            if (ebx_1[5] u>= 0x10)
                ebx_1 = *ebx_1
            
            _strcpy_s(eax_3, ebx_1[4] + 1, ebx_1)
            GlobalUnlock(hMem)
            result = SetClipboardData(1, hMem)
        
        if (eax_3 == 0 || result == 0)
            result = GlobalFree(hMem)
    
    if (*(arg1 + 4) != 0)
        result = CloseClipboard()
        *(arg1 + 4) = 0

return result
