// 函数: sub_4069a0
// 地址: 0x4069a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (data_7fcb29 != 0)
    timeEndPeriod(data_7fcb2c)
    data_7fcb29 = 0

uint32_t result = timeGetDevCaps(&data_7fcb2c, 8)

if (result == 0)
    result = timeBeginPeriod(data_7fcb2c)
    char ecx_1 = data_7fcb29
    
    if (result == 0)
        ecx_1 = 1
    
    data_7fcb29 = ecx_1

return result
