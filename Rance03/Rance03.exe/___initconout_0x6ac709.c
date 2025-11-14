// 函数: ___initconout
// 地址: 0x6ac709
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

HANDLE result = CreateFileW(CONOUT$", 0x40000000, FILE_SHARE_READ | FILE_SHARE_WRITE, nullptr, 
    OPEN_EXISTING, SECURITY_ANONYMOUS, nullptr)
data_74b410 = result
return result
