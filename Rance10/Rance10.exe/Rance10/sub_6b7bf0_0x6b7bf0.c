// 函数: sub_6b7bf0
// 地址: 0x6b7bf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if ((arg1[1] & 0x80000000) == 0)
    void* eax_1 = arg1[3]
    
    if (eax_1 != 0)
        arg1[2] -= eax_1
        void* edx = arg1[2]
        
        if (edx s> 0)
            char* ecx = *arg1
            sub_6feca0(ecx, eax_1 + ecx, edx)
        
        arg1[3] = 0
    
    int32_t ecx_1 = arg1[2]
    
    if (arg2 s<= arg1[1] - ecx_1)
        return arg1[2] + *arg1
    
    int32_t eax_5 = *arg1
    int32_t edi_2 = arg2 + 0x1000 + ecx_1
    int32_t var_c_2 = edi_2
    int32_t eax_6
    
    if (eax_5 == 0)
        eax_6 = sub_705e22()
    else
        int32_t var_10_2 = eax_5
        eax_6 = _realloc()
    
    if (eax_6 != 0)
        *arg1 = eax_6
        arg1[1] = edi_2
        return arg1[2] + *arg1
    
    sub_6b7bc0(arg1)

return 0
