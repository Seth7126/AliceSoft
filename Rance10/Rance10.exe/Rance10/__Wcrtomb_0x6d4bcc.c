// 函数: __Wcrtomb
// 地址: 0x6d4bcc
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

BOOL usedDefaultChar = arg3
wchar16 wideCharStr

if (arg5[2] == 0)
    usedDefaultChar = 0
    int32_t result =
        WideCharToMultiByte(*arg5, 0, &wideCharStr, 1, arg4, arg5[1], nullptr, &usedDefaultChar)
    
    if (result != 0 && usedDefaultChar == 0)
        return result
else
    uint32_t* eax
    eax.w = wideCharStr
    
    if (eax.w u<= 0xff)
        *arg4 = eax.b
        return 1
*__errno() = 0x2a
return 0xffffffff
