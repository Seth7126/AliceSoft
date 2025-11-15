// 函数: sub_4935a0
// 地址: 0x4935a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = arg2
void** esi = arg1
void** var_4
sub_494190(&var_4, &var_8)
void** eax = var_4

if (eax != *data_7fcb84)
    void* edi_1 = eax[5]
    
    if (edi_1 != 0)
        void** ecx
        
        if (esi[5] u< 0x10)
            ecx = esi
        else
            ecx = *esi
        
        int32_t* eax_2 = (*(*(edi_1 + 4) + 0x2c))(ecx)
        
        if (eax_2 != 0)
            jump(*(*eax_2 + 8))
        
        if (esi[5] u>= 0x10)
            esi = *esi
        
        int32_t* eax_4 = (*(*(edi_1 + 4) + 0x28))(esi)
        
        if (eax_4 != 0)
            jump(*(*eax_4 + 0xc))

return 0
