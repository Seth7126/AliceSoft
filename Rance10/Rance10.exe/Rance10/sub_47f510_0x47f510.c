// 函数: sub_47f510
// 地址: 0x47f510
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = data_7fcb68

if (*(esi + 4) == 0)
    int32_t* ecx_1 = data_7fcb88
    int32_t result
    
    if (ecx_1 != 0)
        result = (**ecx_1)(0x75ff30)
        *(esi + 4) = result
    
    if (ecx_1 == 0 || result == 0)
        result.b = 0
        return result

jump(*(**(esi + 4) + 0x30))
