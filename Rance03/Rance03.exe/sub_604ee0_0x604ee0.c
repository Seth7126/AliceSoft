// 函数: sub_604ee0
// 地址: 0x604ee0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

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
