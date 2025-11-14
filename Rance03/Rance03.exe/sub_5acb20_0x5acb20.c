// 函数: sub_5acb20
// 地址: 0x5acb20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 s>= 0)
    void* esi_1 = data_75d508
    
    if (arg3 s< (*(esi_1 + 0x54) - *(esi_1 + 0x50)) s>> 2)
        void* ecx = *(*(esi_1 + 0x50) + (arg3 << 2))
        
        if (ecx != 0 && arg2 s>= 0 && arg2 s< (*(ecx + 0x20) - *(ecx + 0x1c)) s>> 2)
            void* esi_2 = *(*(ecx + 0x1c) + (arg2 << 2))
            
            if (esi_2 != 0)
                void* esi_3 = *(esi_2 + 0x1d8)
                
                if (esi_3 != 0 && sub_561860(esi_3, arg4).b != 0)
                    *(esi_3 + 0x10) += 1
                    arg1.b = 1
                    return arg1

arg1.b = 0
return arg1
