// 函数: sub_67f160
// 地址: 0x67f160
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

HANDLE hFile = *(arg1 + 4)

if (hFile == 0xffffffff)
    int32_t eax
    eax.b = 0
    return eax

uint32_t nNumberOfBytesToRead = arg3
BOOL eax_2

if (*(arg1 + 8) + nNumberOfBytesToRead u<= *(arg1 + 0xc)
        && ReadFile(hFile, arg2, nNumberOfBytesToRead, &arg3, nullptr) != 0
        && nNumberOfBytesToRead == arg3)
    *(arg1 + 8) += nNumberOfBytesToRead
    eax_2.b = 1
    return eax_2

eax_2.b = 0
return eax_2
