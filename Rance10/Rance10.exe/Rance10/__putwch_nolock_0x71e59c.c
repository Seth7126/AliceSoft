// 函数: __putwch_nolock
// 地址: 0x71e59c
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t numberOfCharsWritten = arg1
HANDLE hConsoleOutput = data_7e1d40

if (hConsoleOutput == 0xfffffffe)
    ___initconout()
    hConsoleOutput = data_7e1d40

int16_t buffer

if (hConsoleOutput != 0xffffffff
        && WriteConsoleW(hConsoleOutput, &buffer, 1, &numberOfCharsWritten, nullptr) != 0)
    BOOL result
    result.w = buffer
    return result

return 0xffff
