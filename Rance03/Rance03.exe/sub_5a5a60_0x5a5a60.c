// 函数: sub_5a5a60
// 地址: 0x5a5a60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 s>= 0)
    void* esi_1 = data_75d508
    
    if (arg3 s< (*(esi_1 + 0x54) - *(esi_1 + 0x50)) s>> 2)
        void* ecx = *(*(esi_1 + 0x50) + (arg3 << 2))
        
        if (ecx != 0 && arg2 s>= 0 && arg2 s< (*(ecx + 0x20) - *(ecx + 0x1c)) s>> 2)
            void* edi_1 = *(*(ecx + 0x1c) + (arg2 << 2))
            
            if (edi_1 != 0 && arg4 s>= 0 && arg4 s< (*(edi_1 + 0xfc) - *(edi_1 + 0xf8)) s/ 0x38)
                *(*(edi_1 + 0xf8) + arg4 * 0x38 + 0x28) = arg5
                int32_t eax_7
                eax_7.b = 1
                return eax_7

arg1.b = 0
return arg1
