// 函数: sub_58e810
// 地址: 0x58e810
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float xmm0 = arg2
float var_28 = xmm0
void* eax_1

if (arg4 == 0 || arg4[0x17] == 0)
    eax_1 = *(arg1 + 8)
    int32_t* ecx_3 = *(arg1 + 4)
    int32_t edx_1 = 0
    uint32_t esi_4 = (eax_1 - ecx_3 + 3) u>> 2
    
    if (ecx_3 u> eax_1)
        esi_4 = 0
    
    if (esi_4 != 0)
        do
            eax_1 = *ecx_3
            ecx_3 = &ecx_3[1]
            edx_1 += 1
            *(eax_1 + 0x3c) = *arg3
        while (edx_1 != esi_4)
else
    int32_t* esi = *(arg1 + 4)
    void* ecx = &arg4[0x16]
    eax_1 = *(arg1 + 8)
    void* var_30_1 = ecx
    
    if (esi != eax_1)
        int128_t* eax_8
        
        do
            void* ebp_1 = *esi
            void** edi_1 = sub_432330(ecx, ebp_1 + 0x10)
            void** eax_4 = *var_30_1
            bool cond:0_1
            
            if (edi_1 != eax_4)
                cond:0_1 = sub_412ca0(ebp_1 + 0x10, &edi_1[4]) == 0
            
            if (edi_1 == eax_4 || not(cond:0_1))
                edi_1 = eax_4
            
            if (edi_1 == eax_4)
                eax_8 = arg3
                *(ebp_1 + 0x3c) = *eax_8
            else
                void var_14
                int128_t* eax_7 = sub_579760(&edi_1[0xa], xmm0, &var_14)
                float* ecx_2 = arg3
                float var_20_1 = *(eax_7 + 4) * ecx_2[1]
                float var_1c_1 = *(eax_7 + 8) * ecx_2[2]
                eax_8 = *esi
                float var_18_1 = *(eax_7 + 0xc) * ecx_2[3]
                *(eax_8 + 0x3c) = (*eax_7 * *ecx_2).o
            
            xmm0 = var_28
            esi = &esi[1]
            ecx = var_30_1
        while (esi != eax_1)
        
        return eax_8

return eax_1
