// 函数: sub_67f120
// 地址: 0x67f120
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

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
