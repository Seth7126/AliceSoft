// 函数: sub_5a3580
// 地址: 0x5a3580
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 s>= 0)
    void* esi_1 = data_75d508
    
    if (arg3 s< (*(esi_1 + 0x54) - *(esi_1 + 0x50)) s>> 2)
        void* ecx = *(*(esi_1 + 0x50) + (arg3 << 2))
        
        if (ecx != 0 && arg2 s>= 0 && arg2 s< (*(ecx + 0x20) - *(ecx + 0x1c)) s>> 2)
            void* edx = *(*(ecx + 0x1c) + (arg2 << 2))
            
            if (edx != 0)
                *arg4 = *(edx + 0x80)
                *arg5 = *(edx + 0x84)
                *arg6 = *(edx + 0x88)
                int32_t* eax_6
                eax_6.b = 1
                return eax_6

arg1.b = 0
return arg1
