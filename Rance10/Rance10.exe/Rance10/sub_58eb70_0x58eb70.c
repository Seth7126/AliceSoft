// 函数: sub_58eb70
// 地址: 0x58eb70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax

if (arg2 == 0 || arg2[0x1d] == 0)
    eax = *(arg1 + 8)
    int32_t* ecx_2 = *(arg1 + 4)
    int32_t edx_1 = 0
    uint32_t esi_4 = (eax - ecx_2 + 3) u>> 2
    
    if (ecx_2 u> eax)
        esi_4 = 0
    
    if (esi_4 != 0)
        do
            eax = *ecx_2
            ecx_2 = &ecx_2[1]
            edx_1 += 1
            *(eax + 0x64) = 0
        while (edx_1 != esi_4)
else
    int32_t* esi = *(arg1 + 4)
    void* ecx = &arg2[0x1c]
    eax = *(arg1 + 8)
    void* var_c_1 = ecx
    
    if (esi != eax)
        void** eax_3
        
        do
            void* ebx_1 = *esi
            void** edi_1 = sub_432330(ecx, ebx_1 + 0x10)
            eax_3 = *var_c_1
            bool cond:0_1
            
            if (edi_1 != eax_3)
                cond:0_1 = sub_412ca0(ebx_1 + 0x10, &edi_1[4]) == 0
            
            if (edi_1 == eax_3 || not(cond:0_1))
                edi_1 = eax_3
            
            if (edi_1 == eax_3)
                *(ebx_1 + 0x64) = 0
            else
                void var_4
                int32_t xmm2
                eax_3 = *sub_58edd0(&edi_1[0xa], xmm2, &var_4)
                *(ebx_1 + 0x64) = eax_3
            
            ecx = var_c_1
            esi = &esi[1]
        while (esi != eax)
        
        return eax_3

return eax
