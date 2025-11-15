// 函数: sub_5f23c0
// 地址: 0x5f23c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

HANDLE hFile = *(arg1 + 8)

if (hFile == 0xffffffff)
    hFile.b = 0
    return hFile

if (arg2 u>= *(arg1 + 0x10))
    hFile.b = 0
    return hFile

SetFilePointer(hFile, arg2, nullptr, FILE_BEGIN)
*(arg1 + 0xc) = arg2
uint32_t eax
eax.b = 1
return eax
