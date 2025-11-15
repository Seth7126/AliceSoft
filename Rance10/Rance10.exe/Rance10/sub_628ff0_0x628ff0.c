// 函数: sub_628ff0
// 地址: 0x628ff0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = arg2

if (result == 0)
    *(arg1 + 8) = arg1 + 4
    return arg1 + 4

void* esi = *(arg1 + 0xc)
*(arg1 + 8) = result
int32_t* ecx = *(esi + 0x24)

if (ecx != 0)
    result = (**ecx)()
    
    if (result.b != 0 && *(esi + 0x1ec) == 0)
        *(esi + 0x1ec) = 1

return result
