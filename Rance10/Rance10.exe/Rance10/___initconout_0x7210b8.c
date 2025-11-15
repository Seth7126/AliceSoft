// 函数: ___initconout
// 地址: 0x7210b8
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

HANDLE result = CreateFileW(CONOUT$", 0x40000000, FILE_SHARE_READ | FILE_SHARE_WRITE, nullptr, 
    OPEN_EXISTING, SECURITY_ANONYMOUS, nullptr)
data_7e1d40 = result
return result
