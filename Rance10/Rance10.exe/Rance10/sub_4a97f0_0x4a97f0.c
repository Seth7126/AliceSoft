// 函数: sub_4a97f0
// 地址: 0x4a97f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** esi = arg2
int32_t* ecx = data_7fcb9c

if (ecx == 0)
    int32_t* ecx_1 = data_7fcb88
    int32_t* result
    
    if (ecx_1 != 0)
        result = (**ecx_1)(0x7615c4)
        data_7fcb9c = result
    
    if (ecx_1 == 0 || result == 0)
        result.b = 0
        return result
    
    (**result)()
    ecx = data_7fcb9c

if (esi[5] u>= 0x10)
    esi = *esi

return (*(*ecx + 0x18))(arg1, esi)
