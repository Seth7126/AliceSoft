// 函数: ___initconout
// 地址: 0x1000b88a
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

HANDLE result = CreateFileA("CONOUT$", 0x40000000, FILE_SHARE_READ | FILE_SHARE_WRITE, nullptr, 
    OPEN_EXISTING, SECURITY_ANONYMOUS, nullptr)
data_10020f04 = result
return result
