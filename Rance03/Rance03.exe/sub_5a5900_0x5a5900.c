// 函数: sub_5a5900
// 地址: 0x5a5900
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 s>= 0)
    void* esi_1 = data_75d508
    
    if (arg3 s< (*(esi_1 + 0x54) - *(esi_1 + 0x50)) s>> 2)
        void* ecx = *(*(esi_1 + 0x50) + (arg3 << 2))
        
        if (ecx != 0 && arg2 s>= 0 && arg2 s< (*(ecx + 0x20) - *(ecx + 0x1c)) s>> 2)
            void* esi_2 = *(*(ecx + 0x1c) + (arg2 << 2))
            
            if (esi_2 != 0)
                if (arg5 s>= 0 && arg5 s< (*(esi_2 + 0xfc) - *(esi_2 + 0xf8)) s/ 0x38)
                    int32_t ecx_3 = *(esi_2 + 0xf8)
                    int32_t edx_4 = arg5 * 7
                    *(ecx_3 + (edx_4 << 3) + 0x18) = _mm_unpacklo_ps(arg4, arg6)
                    *(ecx_3 + (edx_4 << 3) + 0x20) = arg7
                    int32_t eax_7
                    eax_7.b = 1
                    return eax_7
                
                arg1.b = 0
                return arg1

arg1.b = 0
return arg1
