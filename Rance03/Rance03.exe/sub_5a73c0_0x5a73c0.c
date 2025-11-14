// 函数: sub_5a73c0
// 地址: 0x5a73c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 s>= 0)
    void* edx_1 = data_75d508
    
    if (arg1 s< (*(edx_1 + 0x54) - *(edx_1 + 0x50)) s>> 2)
        void* ecx = *(*(edx_1 + 0x50) + (arg1 << 2))
        
        if (ecx != 0)
            *(ecx + 0x3c) = _mm_unpacklo_ps(arg2, arg3)
            *(ecx + 0x44) = arg4
            int32_t eax_3
            eax_3.b = 1
            return eax_3

int32_t eax
eax.b = 0
return eax
