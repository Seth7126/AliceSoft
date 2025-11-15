// 函数: sub_636d50
// 地址: 0x636d50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx = *(arg1 + 4)
int32_t result = *(ecx + 4)

if (result != 0x14 && result != 8 && result != 0xd)
    if (result != 2)
        result.b = 0
        return result
    
    result = *(*(ecx + 0x10) + 4)
    
    if (result != 0x14 && result != 8 && result != 0xd)
        result.b = 0
        return result

result.b = 1
return result
