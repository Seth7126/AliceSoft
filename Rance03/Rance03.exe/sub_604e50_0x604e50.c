// 函数: sub_604e50
// 地址: 0x604e50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t numberOfBytesWritten = arg1
BOOL hFile = *(arg1 + 4)
uint8_t buffer

if (hFile != 0xffffffff && WriteFile(hFile, &buffer, 4, &numberOfBytesWritten, nullptr) != 0
        && numberOfBytesWritten == 4)
    *(arg1 + 8) += 4
    hFile.b = 1
    return hFile

hFile.b = 0
return hFile
