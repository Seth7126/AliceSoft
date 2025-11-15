// 函数: ___get_abstract_control_x87
// 地址: 0x7202a4
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = 0

if ((arg1 & 0xc3d) != 0)
    if ((arg1.b & 1) != 0)
        result = 0x10
    
    if ((arg1.b & 4) != 0)
        result |= 8
    
    if ((arg1.b & 8) != 0)
        result |= 4
    
    if ((arg1.b & 0x10) != 0)
        result |= 2
    
    if ((arg1.b & 0x20) != 0)
        result |= 1
    
    if ((arg1 & 0xc00) == 0xc00)
        return result | 0x300
    
    if ((arg1 & 0x800) != 0)
        return result | 0x100
    
    if ((arg1 & 0x400) != 0)
        return result | 0x200

return result
