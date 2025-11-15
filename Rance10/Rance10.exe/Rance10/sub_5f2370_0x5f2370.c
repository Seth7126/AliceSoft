// 函数: sub_5f2370
// 地址: 0x5f2370
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t numberOfBytesRead = arg1
HANDLE hFile = *(arg1 + 8)
BOOL result

if (hFile != 0xffffffff && *(arg1 + 0xc) + 4 u<= *(arg1 + 0x10)
        && ReadFile(hFile, arg2, 4, &numberOfBytesRead, nullptr) != 0 && numberOfBytesRead == 4)
    *(arg1 + 0xc) += 4
    result.b = 1
    return result

result.b = 0
return result
