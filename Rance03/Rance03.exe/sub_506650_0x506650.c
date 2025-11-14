// 函数: sub_506650
// 地址: 0x506650
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* eax_5 = *(arg1 + 4)

if (eax_5 != 0)
    void* esi_1 = data_75d4cc
    int32_t var_8 = *(eax_5 + 8)
    int32_t* var_4
    sub_42f3d0(esi_1 + 0x2a0, &var_4, &var_8)
    int32_t* eax_1 = var_4
    
    if (eax_1 != *(esi_1 + 0x2a0))
        void* eax_2 = eax_1[5]
        
        if (eax_2 != 0)
            return *(eax_2 + 0xd8)

return 0
