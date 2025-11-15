// 函数: sub_4ed600
// 地址: 0x4ed600
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_4cbd50(arg1 + 4, arg2, 0)
void* result = *(*(arg1 + 0x60) + 0x70)
int32_t esi = *(result + 0xbc)

if (esi s> 0)
    int32_t var_10_1 = esi
    result = sub_4f15e0(*(arg1 + 0x64))
    void* result_1 = result
    void* ecx_2
    
    if (result_1 == 0)
        ecx_2 = nullptr
    else
        int32_t edx_1 = *(result_1 + 8)
        
        if (esi s< edx_1)
            ecx_2 = nullptr
        else
            result = *(result_1 + 4) + edx_1
            
            if (result s<= esi)
                ecx_2 = nullptr
            else
                result = *(result_1 + 0xc)
                ecx_2 = *(result + ((esi - edx_1) << 2))
    
    if (ecx_2 != 0)
        int32_t eax_3 = neg.d(arg1 - 8)
        return sub_4ed680(ecx_2, arg1 - 8, sbb.d(eax_3, eax_3, arg1 != 8) & (arg1 + 4), arg2)

return result
