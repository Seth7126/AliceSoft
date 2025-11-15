// 函数: sub_493620
// 地址: 0x493620
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
        
        return (**(ecx + 4))(esi)

return 0
