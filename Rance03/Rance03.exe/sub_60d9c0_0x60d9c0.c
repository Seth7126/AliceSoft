// 函数: sub_60d9c0
// 地址: 0x60d9c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

for (int32_t* i = *(arg1 + 4); i != *(arg1 + 8); i = &i[1])
    int32_t* ecx_1 = *i
    int32_t* edi_1 = ecx_1[5]
    
    if (edi_1 != 0)
        uint32_t eax_1 = zx.d(*(ecx_1 + 0x22))
        int32_t eax_2 = *(*ecx_1 + 8)
        ecx_1[5] = 0
        bool cond:0_1 = eax_2(edi_1, eax_1) == 0
        int32_t eax_4 = *edi_1
        
        if (cond:0_1)
            (*(eax_4 + 4))()
            int32_t eax_5
            eax_5.b = 0
            return eax_5
        
        (*(eax_4 + 4))()

int32_t eax
eax.b = 1
return eax
