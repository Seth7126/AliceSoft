// 函数: ___get_machine_control_sse2
// 地址: 0x720388
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = 0

if ((arg1 & 0x31f) != 0)
    if ((arg1.b & 0x10) != 0)
        result = 0x80
    
    int32_t edi
    int32_t var_8_1 = edi
    
    if ((arg1.b & 8) != 0)
        result |= 0x200
    
    if ((arg1.b & 4) != 0)
        result |= 0x400
    
    if ((arg1.b & 2) != 0)
        result |= 0x800
    
    if ((arg1.b & 1) != 0)
        result |= 0x1000
    
    if ((arg1 & 0x300) == 0x300)
        result |= 0x6000
    else if ((0x200 & arg1) != 0)
        result |= 0x2000
    else if ((arg1 & 0x100) != 0)
        result |= 0x4000

return result
