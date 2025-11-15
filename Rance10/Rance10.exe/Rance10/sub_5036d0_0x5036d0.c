// 函数: sub_5036d0
// 地址: 0x5036d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* eax_17 = arg3
void* esi_1 = arg4 - eax_17
int32_t ebp_1 = esi_1 s>> 2

if (ebp_1 != 0)
    char* edx_1 = arg1[1]
    int32_t edi_1 = arg1[2]
    
    if ((edi_1 - edx_1) s>> 2 u< ebp_1)
        int32_t ecx_3 = *arg1
        int32_t edx_3 = (edx_1 - ecx_3) s>> 2
        
        if (0x3fffffff - edx_3 u< ebp_1)
            sub_6d0927("vector<T> too long")
            noreturn
        
        int32_t edx_4 = edx_3 + ebp_1
        int32_t edi_3 = (edi_1 - ecx_3) s>> 2
        int32_t ecx_4 = 0
        uint32_t eax_2 = edi_3 u>> 1
        
        if (0x3fffffff - eax_2 u>= edi_3)
            ecx_4 = eax_2 + edi_3
        
        if (ecx_4 u>= edx_4)
            edx_4 = ecx_4
        
        char var_4
        var_4.d = edx_4
        char* eax_4 = sub_4046d0(edx_4)
        char* ecx_5 = *arg1
        void* esi_4 = arg2 - ecx_5
        sub_6feca0(eax_4, ecx_5, esi_4)
        void* edi_5 = eax_4 + esi_4
        void* esi_6 = arg4 - arg3
        sub_6feca0(edi_5, arg3, esi_6)
        sub_6feca0(esi_6 + edi_5, arg2, arg1[1] - arg2)
        void* ecx_8 = *arg1
        int32_t ebp_2 = ebp_1 + ((arg1[1] - ecx_8) s>> 2)
        
        if (ecx_8 != 0)
            sub_403160(ecx_8, (arg1[2] - ecx_8) s>> 2, 4)
        
        arg1[2] = &eax_4[var_4.d << 2]
        void* eax_16 = &eax_4[ebp_2 << 2]
        arg1[1] = eax_16
        *arg1 = eax_4
        return eax_16
    
    sub_6feca0(edx_1, eax_17, esi_1)
    int32_t* edx_5 = arg1[1]
    int32_t* ecx_10 = arg2
    eax_17 = &edx_5[ebp_1]
    
    if (ecx_10 != edx_5 && edx_5 != eax_17)
        int32_t var_1c_4 = 0.d
        eax_17 = sub_503820(eax_17, edx_5, ecx_10, eax_17)
    
    arg1[1] += ebp_1 << 2

return eax_17
