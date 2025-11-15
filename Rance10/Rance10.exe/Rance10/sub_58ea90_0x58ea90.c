// 函数: sub_58ea90
// 地址: 0x58ea90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax = arg4

if (eax == 0 || *(eax + 0x6c) == 0)
    eax = *(arg1 + 8)
    void** ecx_2 = *(arg1 + 4)
    int32_t edx_1 = 0
    uint32_t esi_5 = (eax - ecx_2 + 3) u>> 2
    
    if (ecx_2 u> eax)
        esi_5 = 0
    
    if (esi_5 != 0)
        do
            eax = *ecx_2
            ecx_2 = &ecx_2[1]
            edx_1 += 1
            *(eax + 0x5c) = arg2
        while (edx_1 != esi_5)
else
    int32_t* i = *(arg1 + 4)
    void* ecx = eax + 0x68
    arg4 = ecx
    
    if (i != *(arg1 + 8))
        void** ebx = *ecx
        
        do
            void* ebp_1 = *i
            void** esi_1 = sub_432330(ecx, ebp_1 + 0x10)
            char eax_5
            
            if (esi_1 != ebx)
                eax_5 = sub_412ca0(ebp_1 + 0x10, &esi_1[4])
            
            if (esi_1 == ebx || eax_5 != 0)
                esi_1 = ebx
            
            void var_4
            
            if (esi_1 == ebx)
                *(ebp_1 + 0x5c) = arg2
            else
                *(ebp_1 + 0x5c) = *sub_579820(&esi_1[0xa], arg3, &var_4) * arg2
            i = &i[1]
            ecx = arg4
        while (i != *(arg1 + 8))
        
        return arg1

return eax
