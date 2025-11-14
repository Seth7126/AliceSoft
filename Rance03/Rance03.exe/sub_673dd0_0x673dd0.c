// 函数: sub_673dd0
// 地址: 0x673dd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 s> 0)
    void* edi_1 = data_75d4fc
    int32_t var_10_1 = arg1
    
    if (sub_4a55e0(edi_1 + 0x178) != 0)
        int32_t var_10_2 = arg1
        
        if (sub_4a55e0(edi_1 + 0x178) != 0)
            int32_t eax_3
            eax_3.b = sub_4f0040(arg1, arg2) == 0xb
            
            if (eax_3.b != 0)
                void* eax_4 = sub_4a8b80(data_75d4fc + 0x174, arg1)
                
                if (eax_4 != 0)
                    void* esi_1 = *(eax_4 + 0x34)
                    sub_510cf0(esi_1, 0xb, arg2)
                    return *(*(*(esi_1 + 0x28) + (arg2 << 2)) + 0x20)

return 0
