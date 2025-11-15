// 函数: sub_4f0590
// 地址: 0x4f0590
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx_1 = *(arg1 + 0x70) + 0xc0
int32_t var_1c = *(arg1 + 0x6c)
int32_t* var_18 = ecx_1
int32_t esi_2 = (ecx_1[1] - *ecx_1) s>> 2
int32_t var_14 = esi_2
int32_t i_1 = 0
void* var_c = nullptr
int32_t result = sub_4a9fd0(&var_1c)

for (int32_t i = i_1; i != esi_2; i += 1)
    int32_t eax_1 = arg2[1]
    int32_t edi_1 = *(var_c + 0x40)
    int32_t var_24 = edi_1
    int32_t ecx_3
    
    if (&var_24 u< eax_1)
        ecx_3 = *arg2
    
    if (&var_24 u>= eax_1 || ecx_3 u> &var_24)
        if (eax_1 == arg2[2])
            sub_404610(arg2, 1)
        
        int32_t* eax_4 = arg2[1]
        
        if (eax_4 != 0)
            *eax_4 = edi_1
    else
        if (eax_1 == arg2[2])
            sub_404610(arg2, 1)
        
        int32_t* ecx_5 = arg2[1]
        
        if (ecx_5 != 0)
            *ecx_5 = *(*arg2 + ((&var_24 - ecx_3) s>> 2 << 2))
    
    arg2[1] += 4
    sub_4f0590(arg2)
    result = sub_4a9fd0(&var_1c)

return result
