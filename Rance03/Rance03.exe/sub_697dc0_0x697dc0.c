// 函数: sub_697dc0
// 地址: 0x697dc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct MEMORY_MAPPED_VIEW_ADDRESS lpBaseAddress = arg1[2]
*arg1 = &win32only::CFileMapping::`vftable'

if (lpBaseAddress != 0)
    UnmapViewOfFile(lpBaseAddress)
    arg1[2] = 0

BOOL hObject = arg1[1]

if (hObject != 0)
    hObject = CloseHandle(hObject)
    arg1[1] = 0

arg1[3] = 0
return hObject
