// 函数: sub_691150
// 地址: 0x691150
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* eax_17 = arg3
void* ebp_1 = arg4 - eax_17

if (arg4 != eax_17)
    char* esi_1 = arg1[1]
    int32_t edi_1 = arg1[2]
    
    if (edi_1 - esi_1 u< ebp_1)
        int32_t ecx_2 = *arg1
        
        if (ecx_2 - esi_1 - 1 u< ebp_1)
            sub_6d0927("vector<T> too long")
            noreturn
        
        int32_t edi_2 = edi_1 - ecx_2
        void* edx_1 = nullptr
        uint32_t eax_4 = edi_2 u>> 1
        void* esi_3 = esi_1 - ecx_2 + ebp_1
        
        if (not.d(eax_4) u>= edi_2)
            edx_1 = eax_4 + edi_2
        
        if (edx_1 u>= esi_3)
            esi_3 = edx_1
        
        char* eax_6 = sub_4039d0(esi_3)
        char* ecx_5 = *arg1
        void* esi_5 = arg2 - ecx_5
        char var_4
        var_4.d = eax_6
        sub_6feca0(eax_6, ecx_5, esi_5)
        void* edi_4 = eax_6 + esi_5
        void* esi_7 = arg4 - arg3
        sub_6feca0(edi_4, arg3, esi_7)
        sub_6feca0(esi_7 + edi_4, arg2, arg1[1] - arg2)
        void* ecx_8 = *arg1
        void* ebp_2 = ebp_1 + arg1[1] - ecx_8
        
        if (ecx_8 != 0)
            sub_403160(ecx_8, arg1[2] - ecx_8, 1)
        
        void* ecx_9 = var_4.d
        arg1[2] = esi_3 + ecx_9
        void* eax_16 = ecx_9 + ebp_2
        arg1[1] = eax_16
        *arg1 = ecx_9
        return eax_16
    
    sub_6feca0(esi_1, eax_17, ebp_1)
    char* edx_2 = arg1[1]
    eax_17 = edx_2 + ebp_1
    
    if (arg2 != edx_2 && edx_2 != eax_17)
        int32_t var_1c_4 = 0.d
        eax_17 = sub_620b10(eax_17.b, edx_2, arg2, eax_17)
    
    arg1[1] += ebp_1

return eax_17
