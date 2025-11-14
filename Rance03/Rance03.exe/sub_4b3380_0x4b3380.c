// 函数: sub_4b3380
// 地址: 0x4b3380
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t esi = arg2
void* result

if (arg1[1].b != 0)
    result = *arg1

if (arg1[1].b == 0 || esi == *(result + 0x94))
    if (*(arg1 + 5) != 0)
        result = *arg1
    
    if (*(arg1 + 5) == 0 || esi == *(result + 0x98))
        void* eax_2
        eax_2.b = *(*(*arg1 + 0x178) + 0x8d)
        
        if (*(esi + 0x8d) != eax_2.b)
            *(esi + 0x8d) = eax_2.b
            *(esi + 0x70) = 1
        
        void* ecx = *(*arg1 + 0x178)
        void* eax_4 = *(ecx + 0xd8)
        
        if (eax_4 == 0)
            int32_t __saved_edi_3 = *(*(*(ecx + 0x50) + 0x58) + 0x90)
            
            if (__saved_edi_3 s<= 0)
                eax_4 = nullptr
            else
                int32_t __saved_edi_1 = __saved_edi_3
                void* eax_7 = sub_4a56f0(*(ecx + 0x54))
                
                if (eax_7 == 0)
                    eax_4 = nullptr
                else
                    eax_4 = sub_4a2ab0(eax_7)
                    
                    if (eax_4 == 0)
                        eax_4 = nullptr
        
        sub_4a2af0(esi, eax_4)
        int32_t eax_8 = sub_4a2720(*(*arg1 + 0x178))
        arg2 = eax_8
        int32_t* ecx_6 = &arg2
        int32_t var_18 = 0xff
        int32_t var_14 = 0
        
        if (eax_8 s>= 0xff)
            ecx_6 = &var_18
        
        int32_t* eax_9 = &var_14
        
        if (*ecx_6 s> 0)
            eax_9 = ecx_6
        
        int32_t eax_10 = *eax_9
        
        if (*(esi + 0x90) != eax_10)
            *(esi + 0x90) = eax_10
            *(esi + 0x70) = 1
        
        int32_t eax_13 = *(*(*arg1 + 0x178) + 0xf0)
        
        if (*(esi + 0xf0) != eax_13)
            *(esi + 0xf0) = eax_13
            *(esi + 0x70) = 1
        
        void* eax_15
        eax_15.b = *(*(*arg1 + 0x178) + 0xf4)
        
        if (*(esi + 0xf4) != eax_15.b)
            *(esi + 0xf4) = eax_15.b
            *(esi + 0x70) = 1
        
        void* esi_1 = *(*arg1 + 0x178)
        int32_t eax_17 = sub_4a1bb0(esi_1)
        var_14 = 0xff
        int32_t ebx_2 = eax_17 + *(esi_1 + 0xa0)
        arg2 = ebx_2
        int32_t eax_18 = sub_4a1b50(esi_1)
        int32_t var_10 = 0xff
        int32_t edi_2 = eax_18 + *(esi_1 + 0x9c)
        var_18 = edi_2
        int32_t eax_19 = sub_4a1af0(esi_1)
        int32_t var_8 = 0xff
        int32_t edx_2 = eax_19 + *(esi_1 + 0x98)
        int32_t var_c = edx_2
        int32_t* ecx_10 = &arg2
        
        if (ebx_2 s>= 0xff)
            ecx_10 = &var_14
        
        int32_t* eax_20 = &var_18
        int32_t var_2c_1 = *ecx_10
        
        if (edi_2 s>= 0xff)
            eax_20 = &var_10
        
        int32_t var_30_1 = *eax_20
        int32_t* eax_21 = &var_c
        
        if (edx_2 s>= 0xff)
            eax_21 = &var_8
        
        sub_4b7960(esi + 0x6c, *eax_21)
        void* esi_2 = *(*arg1 + 0x178)
        int32_t var_2c_2 = sub_4a2850(esi_2)
        int32_t var_30_2 = sub_4a2800(esi_2)
        sub_4b7a20(esi + 0x6c, sub_4a27b0(esi_2))
        int32_t eax_28 = *(*(*arg1 + 0x178) + 0xb0)
        
        if (*(esi + 0xb0) != eax_28)
            *(esi + 0xb0) = eax_28
            *(esi + 0x70) = 1
        
        int32_t eax_31 = *(*(*arg1 + 0x178) + 0xf8)
        
        if (*(esi + 0xf8) != eax_31)
            *(esi + 0xf8) = eax_31
            *(esi + 0x70) = 1
        
        result.b = *(*(*arg1 + 0x178) + 0x47d)
        
        if (*(esi + 0x47d) != result.b)
            *(esi + 0x47d) = result.b
            *(esi + 0x70) = 1

return result
