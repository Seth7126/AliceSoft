// 函数: sub_493670
// 地址: 0x493670
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** var_4 = arg1
int32_t arg_4 = arg_4
void** esi = arg1
sub_494190(&var_4, &arg_4)
void** eax_1 = var_4

if (eax_1 != *data_7fcb84)
    void* ecx = eax_1[5]
    
    if (ecx != 0)
        if (esi[5] u>= 0x10)
            esi = *esi
        
        int32_t* eax_3 = (*(*(ecx + 4) + 0x2c))(esi)
        
        if (eax_3 != 0)
            return (**eax_3)(arg2)

return 0
