// 函数: sub_5d18a0
// 地址: 0x5d18a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 != arg2)
    int32_t* edx_1 = *arg2
    int32_t eax_1 = arg2[1]
    
    if (edx_1 == eax_1)
        arg1[1] = *arg1
        return arg1
    
    int32_t* ecx = *arg1
    void* ebp_2 = arg1[1] - ecx
    void* edi_2 = eax_1 - edx_1
    
    if (edi_2 u<= ebp_2)
        _memcpy(ecx, edx_1, eax_1 - edx_1)
        arg1[1] = arg2[1] - *arg2 + *arg1
        return arg1
    
    if (edi_2 u<= arg1[2] - ecx)
        void* edi_3 = edx_1 + ebp_2
        _memcpy(ecx, edx_1, edi_3 - edx_1)
        void* esi_2 = arg2[1] - edi_3
        arg1[1] = _memcpy(arg1[1], edi_3, esi_2) + esi_2
        return arg1
    
    if (ecx != 0)
        j__free(ecx)
    
    if (sub_448ed0(arg1, arg2[1] - *arg2) != 0)
        int32_t* eax_19 = *arg2
        void* esi_4 = arg2[1] - eax_19
        arg1[1] = _memcpy(*arg1, eax_19, esi_4) + esi_4

return arg1
