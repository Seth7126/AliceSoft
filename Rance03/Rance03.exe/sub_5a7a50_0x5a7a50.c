// 函数: sub_5a7a50
// 地址: 0x5a7a50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 s>= 0)
    void* edx = data_75d508
    
    if (arg3 s< (*(edx + 0x54) - *(edx + 0x50)) s>> 2)
        void* ecx = *(*(edx + 0x50) + (arg3 << 2))
        
        if (ecx != 0)
            *(ecx + 0x80) = _mm_unpacklo_ps(arg4, arg5)
            *(ecx + 0x88) = arg6
            *(ecx + 0x8c) = _mm_unpacklo_ps(arg7, arg8)
            *(ecx + 0x94) = arg9
            int32_t eax_3
            eax_3.b = 1
            return eax_3

arg1.b = 0
return arg1
