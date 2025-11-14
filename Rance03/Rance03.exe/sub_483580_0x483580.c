// 函数: sub_483580
// 地址: 0x483580
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 4) != 0)
    void* esi_1 = arg2
    int32_t eax_1 = *(esi_1 + 0x44) - *(esi_1 + 0x34)
    int32_t eax_3 = *(esi_1 + 0x48) - *(esi_1 + 0x38)
    int32_t var_c_1 = *(esi_1 + 0x4c) - *(esi_1 + 0x3c)
    int32_t eax_5
    
    if (*(esi_1 + 0x30) s<= 0)
    label_483628:
        eax_5.b = 1
        return eax_5
    
    int32_t ebp_1 = 0
    arg2 = nullptr
    eax_5 = 0
    int32_t var_10_1 = 0
    int32_t ebx_1 = 0
    
    while (true)
        int32_t edi_1 = *(esi_1 + 0x30)
        int32_t var_24_1 = divs.dp.d(sx.q(eax_5), edi_1) + *(esi_1 + 0x3c)
        int32_t var_28_1 = divs.dp.d(sx.q(arg2), edi_1) + *(esi_1 + 0x38)
        int32_t var_2c_1 = divs.dp.d(sx.q(ebp_1), edi_1) + *(esi_1 + 0x34)
        int32_t var_30_1 = 1
        int32_t var_34_1 = *(esi_1 + 0x2c)
        int32_t var_38_1 = *(esi_1 + 0x20) + ebx_1
        int32_t var_3c_1 = *(esi_1 + 0x1c)
        
        if (sub_506fb0(arg1) == 0)
            int32_t var_24_2 = *(esi_1 + 0x30)
            int32_t var_28_2 = *(esi_1 + 0x2c)
            int32_t var_2c_2 = *(esi_1 + 0x20)
            int32_t var_30_2 = *(esi_1 + 0x1c)
            sub_455870(0x6deae0)
            break
        
        ebx_1 += 1
        eax_5 = var_10_1 + var_c_1
        arg2 += eax_3
        ebp_1 += eax_1
        var_10_1 = eax_5
        
        if (ebx_1 s>= *(esi_1 + 0x30))
            goto label_483628

void* eax_20
eax_20.b = 0
return eax_20
