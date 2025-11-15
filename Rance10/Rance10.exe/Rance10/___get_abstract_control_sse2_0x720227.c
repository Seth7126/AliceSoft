// 函数: ___get_abstract_control_sse2
// 地址: 0x720227
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = 0

if ((arg1 & 0x7e80) != 0)
    if (arg1.b s< 0)
        result = 0x10
    
    int32_t edi
    int32_t var_8_1 = edi
    
    if ((0x200 & arg1) != 0)
        result |= 8
    
    if ((arg1 & 0x400) != 0)
        result |= 4
    
    if ((arg1 & 0x800) != 0)
        result |= 2
    
    if ((arg1 & 0x1000) != 0)
        result |= 1
    
    if ((arg1 & 0x6000) == 0x6000)
        result |= 0x300
    else if ((arg1 & 0x4000) != 0)
        result |= 0x100
    else if ((arg1 & 0x2000) != 0)
        result |= 0x200

return result
