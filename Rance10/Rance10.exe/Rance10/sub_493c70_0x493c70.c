// 函数: sub_493c70
// 地址: 0x493c70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** var_4 = arg1
int32_t arg_4 = arg_4
void** esi = arg2
void** edi = arg1
sub_494190(&var_4, &arg_4)
void** eax_1 = var_4

if (eax_1 != *data_7fcb84)
    void* ecx = eax_1[5]
    
    if (ecx != 0)
        if (edi[5] u>= 0x10)
            edi = *edi
        
        int32_t* eax_3 = (*(*(ecx + 4) + 0x28))(edi)
        
        if (eax_3 != 0)
            if (esi[5] u>= 0x10)
                esi = *esi
            
            return (*(*eax_3 + 0x1c))(esi)

return 0xffffffff
