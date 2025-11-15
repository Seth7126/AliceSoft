// 函数: sub_47dbe0
// 地址: 0x47dbe0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edx_1 = *(arg1 + 8)

if (arg2 s>= 0 && arg2 s< (*(edx_1 + 0xc) - *(edx_1 + 8)) s>> 2)
    void* ecx_1 = *(*(edx_1 + 8) + (arg2 << 2))
    
    if (arg3 s>= 0 && arg3 s< (*(ecx_1 + 0xc) - *(ecx_1 + 8)) s>> 2)
        int32_t eax_5
        eax_5.b = *(*(ecx_1 + 8) + (arg3 << 2)) != 0
        return eax_5

int32_t eax
eax.b = 0
return eax
