// 函数: sub_674df0
// 地址: 0x674df0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 s> 0)
    void* edi_1 = data_75d4fc
    int32_t var_10_1 = arg1
    
    if (sub_4a55e0(edi_1 + 0x178) != 0)
        int32_t var_10_2 = arg1
        
        if (sub_4a55e0(edi_1 + 0x178) != 0)
            int32_t eax_3
            eax_3.b = sub_4f0040(arg1, arg2) == 0x12
            
            if (eax_3.b != 0)
                void* eax_4 = sub_4a8b80(data_75d4fc + 0x174, arg1)
                
                if (eax_4 != 0)
                    void* eax_5 = sub_510540(*(eax_4 + 0x34), arg2)
                    int32_t eax_6
                    int32_t edx_2
                    edx_2:eax_6 = muls.dp.d(0x2aaaaaab, *(eax_5 + 0x30) - *(eax_5 + 0x2c))
                    int32_t edx_3 = edx_2 s>> 5
                    return (edx_3 u>> 0x1f) + edx_3

return 0
