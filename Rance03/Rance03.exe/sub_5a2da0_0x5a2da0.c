// 函数: sub_5a2da0
// 地址: 0x5a2da0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 s>= 0)
    void* esi_1 = data_75d508
    
    if (arg3 s< (*(esi_1 + 0x54) - *(esi_1 + 0x50)) s>> 2)
        void* ecx = *(*(esi_1 + 0x50) + (arg3 << 2))
        
        if (ecx != 0 && arg2 s>= 0 && arg2 s< (*(ecx + 0x20) - *(ecx + 0x1c)) s>> 2)
            void* edx = *(*(ecx + 0x1c) + (arg2 << 2))
            
            if (edx != 0)
                void** edx_1 = edx + 0x14
                
                if (edx_1[5] u>= 0x10)
                    edx_1 = *edx_1
                
                (*(*arg4 + 4))(edx_1)
                int32_t eax_5
                eax_5.b = 1
                return eax_5

arg1.b = 0
return arg1
