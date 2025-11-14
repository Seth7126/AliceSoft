// 函数: sub_539400
// 地址: 0x539400
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* result = arg2

for (int32_t* i = *result; i != result[1]; i = &i[1])
    void** eax = *(arg1 + 0x10)
    int32_t edi_1 = *i
    void** edx_1 = eax
    int32_t var_4 = edi_1
    void** ecx = eax[1]
    
    while (*(ecx + 0xd) == 0)
        if (ecx[4] s>= edi_1)
            edx_1 = ecx
            ecx = *ecx
        else
            ecx = ecx[2]
    
    void*** ecx_1
    
    if (edx_1 == eax || edi_1 s< edx_1[4])
        void** var_c = eax
        ecx_1 = &var_c
    else
        void** var_10 = edx_1
        ecx_1 = &var_10
    
    if (*ecx_1 == eax)
        *sub_42f350(arg1 + 0x10, &var_4) = *(arg1 + 0x14)
    
    result = arg2

return result
