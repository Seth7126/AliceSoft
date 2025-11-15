// 函数: sub_6220e0
// 地址: 0x6220e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = 0
void** var_18
sub_44a580(arg1 + 4, &var_18)
void var_c
sub_6221b0(arg1 + 4, &var_c)
int32_t var_10
int32_t esi_1 = var_10
int32_t var_4

if (esi_1 != var_4)
    void** edi_1 = var_18
    
    do
        void* ecx_2
        
        if (edi_1 != 0)
            ecx_2 = *edi_1
        else
            ecx_2 = nullptr
        
        int32_t* ecx_5 =
            *(*(*(ecx_2 + 4) + ((esi_1 u>> 2 & (*(ecx_2 + 8) - 1)) << 2)) + ((esi_1 & 3) << 2))
        
        if (ecx_5 != 0)
            result += (*(*ecx_5 + 0x10))()
        
        esi_1 += 1
    while (esi_1 != var_4)

return result
