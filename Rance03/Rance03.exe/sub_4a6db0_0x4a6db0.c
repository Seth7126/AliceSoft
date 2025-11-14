// 函数: sub_4a6db0
// 地址: 0x4a6db0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 != arg2)
    int32_t eax_1 = arg2[1]
    int32_t* ebp_1 = *arg2
    
    if (ebp_1 == eax_1)
        arg1[1] = *arg1
        return arg1
    
    int32_t* ecx = *arg1
    int32_t edx_3 = (eax_1 - ebp_1) s>> 2
    int32_t edi_3 = (arg1[1] - ecx) s>> 2
    
    if (edx_3 u<= edi_3)
        _memcpy(ecx, ebp_1, (eax_1 - ebp_1) & 0xfffffffc)
        arg1[1] = *arg1 + ((arg2[1] - *arg2) s>> 2 << 2)
        return arg1
    
    if (edx_3 u<= (arg1[2] - ecx) s>> 2)
        void* edi_5 = &ebp_1[edi_3]
        _memcpy(ecx, ebp_1, (edi_5 - ebp_1) & 0xfffffffc)
        arg1[1] = &_memcpy(arg1[1], edi_5, (arg2[1] - edi_5) s>> 2 << 2)[(arg2[1] - edi_5) s>> 2]
        return arg1
    
    if (ecx != 0)
        j__free(ecx)
    
    if (sub_42f510(arg1, (arg2[1] - *arg2) s>> 2) != 0)
        int32_t* ecx_5 = *arg2
        arg1[1] = &_memcpy(*arg1, ecx_5, (arg2[1] - ecx_5) s>> 2 << 2)[(arg2[1] - ecx_5) s>> 2]

return arg1
