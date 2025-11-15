// 函数: sub_67ece0
// 地址: 0x67ece0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

HANDLE hObject = *(arg1 + 4)

if (hObject == 0xffffffff)
    goto label_67ecfd

BOOL result

if (CloseHandle(hObject) != 0)
    *(arg1 + 4) = 0xffffffff
label_67ecfd:
    void** lpFileName = arg2
    
    if (lpFileName[5] u>= 0x10)
        lpFileName = *lpFileName
    
    result = CreateFileA(lpFileName, 0x40000000, FILE_SHARE_NONE, nullptr, CREATE_ALWAYS, 
        FILE_ATTRIBUTE_NORMAL, nullptr)
    *(arg1 + 4) = result
    
    if (result != 0xffffffff)
        *(arg1 + 8) = 0
        result.b = 1
        *(arg1 + 0xc) = 0xffffffff
        return result

result.b = 0
return result
