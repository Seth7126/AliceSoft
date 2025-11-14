// 函数: sub_10001560
// 地址: 0x10001560
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

void* ebp = arg2
char* eax = *(ebp + 0xc)
void* esi

if (eax != 0)
    esi = *(ebp + 0x14) - eax
else
    esi = nullptr

if (arg1 != 0)
    int128_t* edi_1 = *(ebp + 0x10)
    
    if (eax - edi_1 - 1 u< arg1)
        sub_10001730()
        noreturn
    
    void* eax_1 = edi_1 - eax + arg1
    
    if (esi u< eax_1)
        uint32_t ecx_5 = esi u>> 1
        void* esi_2
        
        if (0xffffffff - ecx_5 u>= esi)
            esi_2 = esi + ecx_5
        else
            esi_2 = nullptr
        
        if (esi_2 u< eax_1)
            esi_2 = eax_1
        
        void* edx_4 = sub_100017b0(esi_2)
        arg2 = edx_4
        void* eax_5 = arg4 - *(ebp + 0xc) + edx_4
        int32_t i = arg1
        
        if (arg1 u> 0)
            void* edi_3 = eax_5
            
            do
                char* eax_6
                eax_6.b = *arg3
                *edi_3 = eax_6.b
                i -= 1
                edi_3 += 1
            while (i u> 0)
        
        int128_t* ecx_7 = arg4
        int128_t* edi_4 = *(ebp + 0xc)
        void* eax_8 = ecx_7 - edi_4
        
        if (ecx_7 != edi_4)
            sub_10001e2e(edx_4, eax_8, edi_4, eax_8)
            edx_4 = arg2
            ecx_7 = arg4
        
        int32_t eax_9 = *(ebp + 0x10)
        void* eax_10 = eax_9 - ecx_7
        
        if (eax_9 != ecx_7)
            sub_10001e2e(eax_5 + arg1, eax_10, ecx_7, eax_10)
            edx_4 = arg2
        
        int32_t eax_11 = *(ebp + 0xc)
        int32_t ebx_1 = arg1 + *(ebp + 0x10) - eax_11
        
        if (eax_11 != 0)
            int32_t var_18_3 = eax_11
            sub_10001d52()
            edx_4 = arg2
        
        void* eax_12 = edx_4 + esi_2
        *(ebp + 0x14) = eax_12
        *(ebp + 0x10) = edx_4 + ebx_1
        *(ebp + 0xc) = edx_4
        return eax_12
    
    int128_t* ecx_14 = arg4
    eax_1.b = *arg3
    void* esi_4 = edi_1 - ecx_14
    arg3.b = eax_1.b
    
    if (esi_4 u>= arg1)
        int128_t* edx_7 = edi_1 - arg1
        void* eax_16 = edi_1 - edx_7
        
        if (edi_1 != edx_7)
            sub_10001e2e(edi_1, eax_16, edx_7, eax_16)
            ecx_14 = arg4
        
        void* eax_19 = edi_1 - ecx_14 - arg1
        *(ebp + 0x10) = eax_16 + edi_1
        
        if (eax_19 s> 0)
            sub_10001e2e(edi_1 - eax_19, eax_19, ecx_14, eax_19)
            ecx_14 = arg4
        
        eax = ecx_14 + arg1
        
        if (ecx_14 != eax)
            return sub_10003d40(ecx_14, arg3.b, eax - ecx_14)
    else
        if (esi_4 u> 0)
            sub_10001e2e(ecx_14 + arg1, esi_4, ecx_14, esi_4)
            ecx_14 = arg4
        
        char* eax_13 = *(ebp + 0x10)
        sub_10001a50(ecx_14 - eax_13 + arg1, &arg3, eax_13)
        *(ebp + 0x10) += arg1
        eax = arg4
        int32_t ebp_2 = *(ebp + 0x10) - arg1
        
        if (eax != ebp_2)
            return sub_10003d40(eax, arg3.b, ebp_2 - eax)

return eax
