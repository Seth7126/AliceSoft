// 函数: ___get_machine_control
// 地址: 0x720317
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = 0

if ((arg1 & 0x31f) != 0)
    if ((arg1.b & 0x10) != 0)
        result = 1
    
    if ((arg1.b & 8) != 0)
        result |= 4
    
    if ((arg1.b & 4) != 0)
        result |= 8
    
    if ((arg1.b & 2) != 0)
        result |= 0x10
    
    if ((arg1.b & 1) != 0)
        result |= 0x20
    
    if ((arg1 & 0x300) == 0x300)
        return result | 0xc00
    
    if ((arg1 & 0x200) != 0)
        return result | 0x400
    
    if ((arg1 & 0x100) != 0)
        return result | 0x800

return result
