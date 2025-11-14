// 函数: sub_6052e0
// 地址: 0x6052e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

HANDLE hFile = *(arg1 + 4)

if (hFile == 0xffffffff)
    hFile.b = 0
    return hFile

if (arg2 u>= *(arg1 + 0xc))
    hFile.b = 0
    return hFile

SetFilePointer(hFile, arg2, nullptr, FILE_BEGIN)
*(arg1 + 8) = arg2
uint32_t eax
eax.b = 1
return eax
