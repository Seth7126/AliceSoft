// 函数: sub_5a7360
// 地址: 0x5a7360
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 s>= 0)
    void* esi_1 = data_75d508
    
    if (arg3 s< (*(esi_1 + 0x54) - *(esi_1 + 0x50)) s>> 2)
        void* ecx = *(*(esi_1 + 0x50) + (arg3 << 2))
        
        if (ecx != 0 && arg2 s>= 0 && arg2 s< (*(ecx + 0x20) - *(ecx + 0x1c)) s>> 2)
            void* ecx_1 = *(*(ecx + 0x1c) + (arg2 << 2))
            
            if (ecx_1 != 0)
                void* ecx_2 = *(ecx_1 + 0x1d8)
                
                if (ecx_2 != 0)
                    sub_5617e0(ecx_2, arg4, arg5)
                    int32_t eax_4
                    eax_4.b = 1
                    return eax_4

arg1.b = 0
return arg1
