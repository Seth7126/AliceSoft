// 函数: ___get_machine_status_sse2
// 地址: 0x720408
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = 0

if ((arg1.b & 0x1f) != 0)
    if ((arg1 & 0x10000010) == 0x10000010)
        result = 1
    
    if ((arg1 & 0x8000008) == 0x8000008)
        result |= 4
    
    if ((arg1 & 0x4000004) == 0x4000004)
        result |= 8
    
    if ((arg1 & 0x2000002) == 0x2000002)
        result |= 0x10
    
    if ((arg1 & 0x1000001) == 0x1000001)
        return result | 0x20

return result
