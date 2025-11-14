// 函数: sub_604e00
// 地址: 0x604e00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t numberOfBytesWritten = arg1
HANDLE hFile = *(arg1 + 4)

if (hFile == 0xffffffff)
    hFile.b = 0
    return hFile

BOOL eax

if (WriteFile(hFile, arg2, arg3, &numberOfBytesWritten, nullptr) == 0
        || arg3 != numberOfBytesWritten)
    eax.b = 0
    return eax

*(arg1 + 8) += arg3
eax.b = 1
return eax
