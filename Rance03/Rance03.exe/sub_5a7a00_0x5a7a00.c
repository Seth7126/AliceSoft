// 函数: sub_5a7a00
// 地址: 0x5a7a00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax

if (arg1 s>= 0)
    void* edx_1 = data_75d508
    
    if (arg1 s< (*(edx_1 + 0x54) - *(edx_1 + 0x50)) s>> 2)
        eax = *(*(edx_1 + 0x50) + (arg1 << 2))
        
        if (eax != 0 && eax != 0xffffffec)
            *(eax + 0x74) = _mm_unpacklo_ps(arg2, arg3)
            *(eax + 0x7c) = arg4
            int32_t eax_4
            eax_4.b = 1
            return eax_4

eax.b = 0
return eax
