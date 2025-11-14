// 函数: sub_46d130
// 地址: 0x46d130
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edx_1 = *(arg1 + 4)

if (arg2 s>= 0 && arg2 s< (*(edx_1 + 0xc) - *(edx_1 + 8)) s>> 2)
    void* ecx_1 = *(*(edx_1 + 8) + (arg2 << 2))
    
    if (arg3 s>= 0 && arg3 s< (*(ecx_1 + 0xc) - *(ecx_1 + 8)) s>> 2)
        int32_t eax_5
        eax_5.b = *(*(ecx_1 + 8) + (arg3 << 2)) != 0
        return eax_5

int32_t eax
eax.b = 0
return eax
