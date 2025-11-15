// 函数: sub_5c04e0
// 地址: 0x5c04e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx = *(arg1 + 0x10)
int32_t* edx = *(ecx + 4)

if (edx u>= *(ecx + 8))
    if (edx != 0)
        int32_t ecx_3 = *arg2
        *arg2 = 0
        *edx = ecx_3
    
    void* ecx_4 = *(arg1 + 0x10)
    *(ecx_4 + 4) += 4
    *(*(arg1 + 0x10) + 8) = *(ecx_4 + 4)
else
    *(ecx + 4) = &edx[1]
    
    if (edx != arg2)
        int32_t eax_2 = *arg2
        *arg2 = 0
        int32_t* edi = *edx
        *edx = eax_2
        
        if (edi != 0)
            sub_5bd030(edi)
            int32_t var_c_1 = 0x80
            operator new(edi)

return arg1
