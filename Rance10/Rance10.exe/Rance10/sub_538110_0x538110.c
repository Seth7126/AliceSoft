// 函数: sub_538110
// 地址: 0x538110
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = data_7fcba4
int32_t* result = *(esi + 0x100)

if (result != *(esi + 0x104))
    int32_t* ecx_1 = *result
    
    if (ecx_1 != 0)
        (**ecx_1)(1)
    
    char* eax_1 = *(esi + 0x100)
    result = sub_6feca0(eax_1, &eax_1[4], *(esi + 0x104) - &eax_1[4])
    *(esi + 0x104) -= 4

return result
