// 函数: sub_493f50
// 地址: 0x493f50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = arg2
void** esi = arg1
void** var_4
sub_494190(&var_4, &var_8)
void** eax = var_4

if (eax != *data_7fcb84)
    void* ecx = eax[5]
    
    if (ecx != 0)
        if (esi[5] u>= 0x10)
            esi = *esi
        
        int32_t* eax_2 = (*(*(ecx + 4) + 0x24))(esi)
        
        if (eax_2 != 0)
            jump(*(*eax_2 + 0x14))

return 0
