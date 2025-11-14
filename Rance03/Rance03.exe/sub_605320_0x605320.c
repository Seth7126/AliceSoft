// 函数: sub_605320
// 地址: 0x605320
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t result = arg2
uint32_t nNumberOfBytesToWrite = *(result + 0x10)

if (nNumberOfBytesToWrite s> 0)
    if (*(result + 0x14) u>= 0x10)
        result = *result
    
    HANDLE hFile = *(arg1 + 4)
    
    if (hFile == 0xffffffff)
        result.b = 0
        return result
    
    if (WriteFile(hFile, result, nNumberOfBytesToWrite, &arg2, nullptr) == 0
            || nNumberOfBytesToWrite != arg2)
        result.b = 0
        return result
    
    *(arg1 + 8) += nNumberOfBytesToWrite

uint8_t buffer

if (buffer == 0)
    result.b = 1
    return result

result = *(arg1 + 4)
buffer = 0

if (result == 0xffffffff)
    result.b = 0
    return result

if (WriteFile(result, &buffer, 1, &arg2, nullptr) == 0 || arg2 != 1)
    result.b = 0
    return result

*(arg1 + 8) += 1
result.b = 1
return result
