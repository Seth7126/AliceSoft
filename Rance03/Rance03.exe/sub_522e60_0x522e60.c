// 函数: sub_522e60
// 地址: 0x522e60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

for (int32_t* i = *arg3; i != arg3[1]; i = &i[1])
    void* edx_1 = *i
    void** edi_1 = *(arg2 + 4)
    void** ecx = edi_1
    void** eax_2 = edi_1[1]
    
    while (*(eax_2 + 0xd) == 0)
        if (eax_2[4] s>= edx_1)
            ecx = eax_2
            eax_2 = *eax_2
        else
            eax_2 = eax_2[2]
    
    void*** eax_3
    
    if (ecx == edi_1 || edx_1 s< ecx[4])
        void** var_10 = edi_1
        eax_3 = &var_10
    else
        void** var_14 = ecx
        eax_3 = &var_14
    
    void** eax_4 = *eax_3
    int32_t eax_5
    
    if (eax_4 != *(arg2 + 4))
        eax_5 = eax_4[5]
    else
        eax_5 = 0
    
    int32_t var_24_1 = arg4
    
    if (sub_522f10(arg1, edx_1, eax_5) == 0)
        return 0

return 1
