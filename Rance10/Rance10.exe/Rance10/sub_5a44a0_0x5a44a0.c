// 函数: sub_5a44a0
// 地址: 0x5a44a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 != arg2)
    char* edx_1 = *arg2
    int32_t eax_1 = arg2[1]
    
    if (edx_1 == eax_1)
        arg1[1] = *arg1
        return arg1
    
    char* ecx = *arg1
    void* ebx_2 = arg1[1] - ecx
    void* edi_2 = eax_1 - edx_1
    
    if (edi_2 u<= ebx_2)
        sub_6feca0(ecx, edx_1, eax_1 - edx_1)
        arg1[1] = arg2[1] - *arg2 + *arg1
        return arg1
    
    void* eax_10 = arg1[2] - ecx
    
    if (edi_2 u<= eax_10)
        void* ebx_3 = ebx_2 + edx_1
        sub_6feca0(ecx, edx_1, ebx_3 - edx_1)
        char* edi_3 = arg1[1]
        void* esi_2 = arg2[1] - ebx_3
        sub_6feca0(edi_3, ebx_3, esi_2)
        arg1[1] = esi_2 + edi_3
        return arg1
    
    if (ecx != 0)
        sub_403160(ecx, eax_10, 1)
    
    if (sub_405b70(arg1, arg2[1] - *arg2) != 0)
        char* eax_18 = *arg2
        char* edi_4 = *arg1
        void* esi_4 = arg2[1] - eax_18
        sub_6feca0(edi_4, eax_18, esi_4)
        arg1[1] = esi_4 + edi_4

return arg1
