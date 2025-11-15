// 函数: sub_622070
// 地址: 0x622070
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = 0
void** var_18
sub_44a580(arg1 + 4, &var_18)
void var_c
sub_6221b0(arg1 + 4, &var_c)
int32_t var_10
int32_t edi = var_10
int32_t var_4

if (edi != var_4)
    void** esi_1 = var_18
    
    do
        void* ecx_2
        
        if (esi_1 != 0)
            ecx_2 = *esi_1
        else
            ecx_2 = nullptr
        
        int32_t edx_3 = edi u>> 2 & (*(ecx_2 + 8) - 1)
        int32_t ecx_3 = edi
        edi += 1
        int32_t result_1 = result + 1
        
        if (*(*(*(ecx_2 + 4) + (edx_3 << 2)) + ((ecx_3 & 3) << 2)) == 0)
            result_1 = result
        
        result = result_1
    while (edi != var_4)

return result
