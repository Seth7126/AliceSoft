// 函数: sub_67f1b0
// 地址: 0x67f1b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t numberOfBytesRead = arg1
HANDLE hFile = *(arg1 + 4)
BOOL result

if (hFile != 0xffffffff && *(arg1 + 8) + 4 u<= *(arg1 + 0xc)
        && ReadFile(hFile, arg2, 4, &numberOfBytesRead, nullptr) != 0 && numberOfBytesRead == 4)
    *(arg1 + 8) += 4
    result.b = 1
    return result

result.b = 0
return result
