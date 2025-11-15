// 函数: sub_636640
// 地址: 0x636640
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 != arg2)
    char* edx_1 = *arg2
    int32_t eax_1 = arg2[1]
    
    if (edx_1 == eax_1)
        arg1[1] = *arg1
        return arg1
    
    char* ecx = *arg1
    int32_t ebx_3 = (arg1[1] - ecx) s>> 3
    int32_t edi_3 = (eax_1 - edx_1) s>> 3
    
    if (edi_3 u<= ebx_3)
        sub_6feca0(ecx, edx_1, eax_1 - edx_1)
        arg1[1] = *arg1 + ((arg2[1] - *arg2) s>> 3 << 3)
        return arg1
    
    int32_t eax_10 = (arg1[2] - ecx) s>> 3
    
    if (edi_3 u<= eax_10)
        void* ebx_4 = &edx_1[ebx_3 << 3]
        sub_6feca0(ecx, edx_1, ebx_4 - edx_1)
        char* edi_4 = arg1[1]
        void* esi_2 = arg2[1] - ebx_4
        sub_6feca0(edi_4, ebx_4, esi_2)
        arg1[1] = esi_2 + edi_4
        return arg1
    
    if (ecx != 0)
        sub_403160(ecx, eax_10, 8)
    
    if (sub_60edb0(arg1, (arg2[1] - *arg2) s>> 3) != 0)
        char* eax_19 = *arg2
        char* edi_5 = *arg1
        void* esi_4 = arg2[1] - eax_19
        sub_6feca0(edi_5, eax_19, esi_4)
        arg1[1] = esi_4 + edi_5

return arg1
