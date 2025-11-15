// 函数: ___get_machine_status_x87
// 地址: 0x720469
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = 0

if ((arg1.b & 0x1f) != 0)
    if ((arg1 & 0x100010) == 0x100010)
        result = 1
    
    if ((arg1 & 0x80008) == 0x80008)
        result |= 4
    
    if ((arg1 & 0x40004) == 0x40004)
        result |= 8
    
    if ((arg1 & 0x20002) == 0x20002)
        result |= 0x10
    
    if ((arg1 & 0x10001) == 0x10001)
        return result | 0x20

return result
