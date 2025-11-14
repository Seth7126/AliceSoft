// 函数: sub_100033f8
// 地址: 0x100033f8
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

if (data_10020118 != 0xffffffff)
    if (arg1 == 0 && TlsGetValue(data_1002011c) != 0)
        arg1 = TlsGetValue(data_1002011c)(data_10020118)
    
    sub_10003063(data_1002206c)(data_10020118, 0)
    sub_100032c9(arg1)

BOOL dwTlsIndex = data_1002011c

if (dwTlsIndex == 0xffffffff)
    return dwTlsIndex

return TlsSetValue(dwTlsIndex, nullptr)
