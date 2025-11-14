// 函数: sub_5a7170
// 地址: 0x5a7170
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 s>= 0)
    void* edx = data_75d508
    
    if (arg3 s< (*(edx + 0x54) - *(edx + 0x50)) s>> 2)
        void* edx_1 = *(*(edx + 0x50) + (arg3 << 2))
        
        if (edx_1 != 0 && arg2 s>= 0 && arg2 s< (*(edx_1 + 0x20) - *(edx_1 + 0x1c)) s>> 2)
            void* esi_1 = *(*(edx_1 + 0x1c) + (arg2 << 2))
            
            if (esi_1 != 0)
                arg1 = sub_527000(arg3, arg4)
                
                if (arg1 != 0)
                    return sub_5436d0(esi_1, arg1, arg5, arg6)

arg1.b = 0
return arg1
