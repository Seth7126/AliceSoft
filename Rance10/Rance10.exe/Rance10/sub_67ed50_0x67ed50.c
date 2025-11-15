// 函数: sub_67ed50
// 地址: 0x67ed50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

HANDLE hObject = *(arg1 + 4)

if (hObject == 0xffffffff)
    goto label_67ed6d

BOOL hFile

if (CloseHandle(hObject) != 0)
    *(arg1 + 4) = 0xffffffff
label_67ed6d:
    void** lpFileName = arg2
    
    if (lpFileName[5] u>= 0x10)
        lpFileName = *lpFileName
    
    hFile = CreateFileA(lpFileName, 0x80000000, FILE_SHARE_READ, nullptr, OPEN_EXISTING, 
        FILE_ATTRIBUTE_NORMAL, nullptr)
    *(arg1 + 4) = hFile
    
    if (hFile != 0xffffffff)
        *(arg1 + 0xc) = GetFileSize(hFile, nullptr)
        uint32_t eax
        eax.b = 1
        *(arg1 + 8) = 0
        return eax

hFile.b = 0
return hFile
