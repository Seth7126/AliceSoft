// 函数: __putwch_nolock
// 地址: 0x6aa5cf
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t numberOfCharsWritten = arg1
HANDLE hConsoleOutput = data_74b410

if (hConsoleOutput == 0xfffffffe)
    ___initconout()
    hConsoleOutput = data_74b410

int16_t buffer

if (hConsoleOutput != 0xffffffff
        && WriteConsoleW(hConsoleOutput, &buffer, 1, &numberOfCharsWritten, nullptr) != 0)
    BOOL result
    result.w = buffer
    return result

return 0xffff
