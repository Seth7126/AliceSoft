// 函数: sub_697e00
// 地址: 0x697e00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct MEMORY_MAPPED_VIEW_ADDRESS lpBaseAddress = *(arg1 + 8)

if (lpBaseAddress != 0)
    UnmapViewOfFile(lpBaseAddress)
    *(arg1 + 8) = 0

HANDLE hObject = *(arg1 + 4)

if (hObject != 0)
    CloseHandle(hObject)
    *(arg1 + 4) = 0

void** lpName = arg2
*(arg1 + 0xc) = 0

if (lpName[5] u>= 0x10)
    lpName = *lpName

HANDLE hFileMappingObject = CreateFileMappingA(0xffffffff, nullptr, PAGE_READWRITE, 0, arg3, lpName)
*(arg1 + 4) = hFileMappingObject

if (hFileMappingObject != 0)
    hFileMappingObject = MapViewOfFile(hFileMappingObject, FILE_MAP_ALL_ACCESS, 0, 0, 0)
    *(arg1 + 8) = hFileMappingObject
    
    if (hFileMappingObject != 0)
        *(arg1 + 0xc) = arg3
        hFileMappingObject.b = 1
        return hFileMappingObject

hFileMappingObject.b = 0
return hFileMappingObject
