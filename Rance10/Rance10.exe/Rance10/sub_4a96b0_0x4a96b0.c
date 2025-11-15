// 函数: sub_4a96b0
// 地址: 0x4a96b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** esi = arg1
int32_t* ecx = data_7fcb9c

if (ecx == 0)
    int32_t* ecx_1 = data_7fcb88
    int32_t* eax_2
    
    if (ecx_1 != 0)
        eax_2 = (**ecx_1)(0x7615c4)
        data_7fcb9c = eax_2
    
    if (ecx_1 == 0 || eax_2 == 0)
        return 0xffffffff
    
    (**eax_2)()
    ecx = data_7fcb9c

if (esi[5] u>= 0x10)
    esi = *esi

return (*(*ecx + 8))(esi)
