// 函数: sub_5f4b20
// 地址: 0x5f4b20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (data_75d4b5 != 0)
    timeEndPeriod(data_75d51c)
    data_75d4b5 = 0

uint32_t result = timeGetDevCaps(&data_75d51c, 8)

if (result == 0)
    result = timeBeginPeriod(data_75d51c)
    char ecx_1 = data_75d4b5
    
    if (result == 0)
        ecx_1 = 1
    
    data_75d4b5 = ecx_1

return result
