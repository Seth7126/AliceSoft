// 函数: sub_4c2a70
// 地址: 0x4c2a70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result = *(arg1 + 0x3c)
int32_t* esi = *(arg1 + 0x38)
uint32_t ebx_3 = (result - esi + 3) u>> 2
int32_t edi = 0

if (esi u> result)
    ebx_3 = 0

if (ebx_3 != 0)
    do
        result = *esi
        
        if (*(result + 0xaa) != 0 && *(result + 0xab) != 0 && *(result + 0xb0) != 0)
            result = (*(**(result + 0x74) + 0x40))(arg2, arg3)
        
        edi += 1
        esi = &esi[1]
    while (edi != ebx_3)

return result
