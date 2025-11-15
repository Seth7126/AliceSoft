// 函数: sub_5f2320
// 地址: 0x5f2320
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

HANDLE hFile = *(arg1 + 8)

if (hFile == 0xffffffff)
    int32_t eax
    eax.b = 0
    return eax

uint32_t nNumberOfBytesToRead = arg3
BOOL eax_2

if (*(arg1 + 0xc) + nNumberOfBytesToRead u<= *(arg1 + 0x10)
        && ReadFile(hFile, arg2, nNumberOfBytesToRead, &arg3, nullptr) != 0
        && nNumberOfBytesToRead == arg3)
    *(arg1 + 0xc) += nNumberOfBytesToRead
    eax_2.b = 1
    return eax_2

eax_2.b = 0
return eax_2
