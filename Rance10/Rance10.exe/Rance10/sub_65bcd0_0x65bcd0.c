// 函数: sub_65bcd0
// 地址: 0x65bcd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebx = arg1[6]
int32_t* var_4 = ebx
int32_t esi = ebx[1]
char* edi = *ebx

if (esi != 0)
    goto label_65bd08

if (ebx[3](arg1) != 0)
    edi = *ebx
    esi = ebx[1]
label_65bd08:
    void* edi_1 = &edi[1]
    uint32_t ecx_1 = zx.d(*edi) << 8
    int32_t esi_1 = esi - 1
    
    if (esi != 1)
        goto label_65bd31
    
    if (ebx[3](arg1) != 0)
        edi_1 = *ebx
        esi_1 = ebx[1]
    label_65bd31:
        uint32_t i = ecx_1 - 2 + zx.d(*edi_1)
        int32_t esi_2 = esi_1 - 1
        void* edi_2 = edi_1 + 1
        bool cond:0_1 = i == 0
        uint32_t result
        
        while (i s> 0)
            if (esi_2 == 0)
                if (ebx[3](arg1) == 0)
                    return 0
                
                edi_2 = *ebx
                esi_2 = ebx[1]
            
            esi_2 -= 1
            uint32_t ecx_4 = zx.d(*edi_2)
            edi_2 += 1
            void* var_8_1 = edi_2
            int32_t ecx_5 = ecx_4 & 0xf
            uint32_t edx_2 = ecx_4 u>> 4
            *(*arg1 + 0x14) = 0x53
            *(*arg1 + 0x18) = ecx_5
            *(*arg1 + 0x1c) = edx_2
            (*(*arg1 + 4))(arg1, 1)
            int32_t ecx_6 = ecx_5
            
            if (ecx_6 u>= 4)
                *(*arg1 + 0x14) = 0x20
                *(*arg1 + 0x18) = ecx_6
                (**arg1)(arg1)
                ecx_6 = ecx_5
            
            void* eax_15 = &arg1[0x24 + ecx_6]
            
            if (arg1[0x24 + ecx_6] == 0)
                void* eax_18 = (*arg1[1])(arg1, 0, 0x82)
                *(eax_18 + 0x80) = 0
                *eax_15 = eax_18
            
            void* ecx_8 = *eax_15
            int32_t var_1c_1
            int32_t edx_4
            
            if (edx_2 == 0)
                if (i - 1 s>= 0x40)
                    edx_4 = 0x40
                    var_1c_1 = edx_4
                else
                    edx_4 = i - 1
                    __builtin_memcpy(ecx_8, 
                        "\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x"
                    "00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01"
                    "00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01"
                    "00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01"
                    "00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01"
                    "00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01"
                    "00\x01\x00\x01\x00\x01\x00\x01\x00", 
                        0x80)
                    var_1c_1 = i - 1
            else if (i - 1 s>= 0x80)
                edx_4 = 0x40
                var_1c_1 = edx_4
            else
                __builtin_memcpy(ecx_8, 
                    "\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x"
                "01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01"
                "00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00"
                "01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01"
                "00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00"
                "01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01"
                "00\x01\x00", 
                    0x80)
                edx_4 = (i - 1) s>> 1
                var_1c_1 = edx_4
            
            void* const var_20_1
            
            if (edx_4 - 4 u> 0x2d)
                var_20_1 = &data_76e8a0
            else
                switch (edx_4 + &jump_table_65c03c[6])
                    case &lookup_table_65c058
                        var_20_1 = &data_76ed48
                    case &lookup_table_65c058[1], &lookup_table_65c058[2], &lookup_table_65c058[3], 
                            &lookup_table_65c058[4], &lookup_table_65c058[6], 
                            &lookup_table_65c058[7], &lookup_table_65c058[8], 
                            &lookup_table_65c058[9], &lookup_table_65c058[0xa], 
                            &lookup_table_65c058[0xb], &lookup_table_65c058[0xd], 
                            &lookup_table_65c058[0xe], &lookup_table_65c058[0xf], 
                            &lookup_table_65c058[0x10], &lookup_table_65c058[0x11], 
                            &lookup_table_65c058[0x12], &lookup_table_65c058[0x13], 
                            &lookup_table_65c058[0x14], &lookup_table_65c058[0x16], 
                            &lookup_table_65c058[0x17], &lookup_table_65c058[0x18], 
                            &lookup_table_65c058[0x19], &lookup_table_65c058[0x1a], 
                            &lookup_table_65c058[0x1b], &lookup_table_65c058[0x1c], 
                            &lookup_table_65c058[0x1d], &lookup_table_65c058[0x1e], 
                            &lookup_table_65c058[0x1f], &lookup_table_65c058[0x21], 
                            &lookup_table_65c058[0x22], &lookup_table_65c058[0x23], 
                            &lookup_table_65c058[0x24], &lookup_table_65c058[0x25], 
                            &lookup_table_65c058[0x26], &lookup_table_65c058[0x27], 
                            &lookup_table_65c058[0x28], &lookup_table_65c058[0x29], 
                            &lookup_table_65c058[0x2a], &lookup_table_65c058[0x2b], 
                            &lookup_table_65c058[0x2c]
                        var_20_1 = &data_76e8a0
                    case &lookup_table_65c058[5]
                        var_20_1 = &data_76eae8
                    case &lookup_table_65c058[0xc]
                        var_20_1 = &data_76ecc8
                    case &lookup_table_65c058[0x15]
                        var_20_1 = &data_76ec20
                    case &lookup_table_65c058[0x20]
                        var_20_1 = &data_76eb50
                    case &lookup_table_65c058[0x2d]
                        var_20_1 = &data_76e9e0
            
            int32_t var_14_3 = 0
            
            if (edx_4 s> 0)
                int32_t eax_29
                
                do
                    uint16_t ecx_11
                    
                    if (edx_2 == 0)
                        if (esi_2 == 0)
                            if (ebx[3](arg1) == 0)
                                return 0
                            
                            edi_2 = *ebx
                            esi_2 = ebx[1]
                        
                        ecx_11 = zx.w(*edi_2)
                        esi_2 -= 1
                    else
                        if (esi_2 == 0)
                            if (ebx[3](arg1) == 0)
                                return 0
                            
                            edi_2 = *ebx
                            esi_2 = ebx[1]
                        
                        uint32_t ecx_9 = zx.d(*edi_2)
                        edi_2 += 1
                        int32_t esi_3 = esi_2 - 1
                        
                        if (esi_2 == 1)
                            if (ebx[3](arg1) == 0)
                                return 0
                            
                            edi_2 = *ebx
                            esi_3 = ebx[1]
                        
                        esi_2 = esi_3 - 1
                        ecx_11 = (ecx_9 << 8).w + zx.w(*edi_2)
                    
                    edi_2 += 1
                    var_8_1 = edi_2
                    *(ecx_8 + (*(var_20_1 + (var_14_3 << 2)) << 1)) = ecx_11
                    edx_4 = var_1c_1
                    eax_29 = var_14_3 + 1
                    var_14_3 = eax_29
                while (eax_29 s< edx_4)
            
            if (*(*arg1 + 0x68) s>= 2)
                void* ebx_1 = ecx_8 + 4
                int32_t j_1 = 8
                int32_t j
                
                do
                    void* ecx_12 = *arg1
                    *(ecx_12 + 0x18) = zx.d(*(ebx_1 - 4))
                    *(ecx_12 + 0x1c) = zx.d(*(ebx_1 - 2))
                    *(ecx_12 + 0x20) = zx.d(*ebx_1)
                    *(ecx_12 + 0x24) = zx.d(*(ebx_1 + 2))
                    *(ecx_12 + 0x28) = zx.d(*(ebx_1 + 4))
                    *(ecx_12 + 0x2c) = zx.d(*(ebx_1 + 6))
                    *(ecx_12 + 0x30) = zx.d(*(ebx_1 + 8))
                    *(ecx_12 + 0x34) = zx.d(*(ebx_1 + 0xa))
                    *(*arg1 + 0x14) = 0x5f
                    (*(*arg1 + 4))(arg1, 2)
                    ebx_1 += 0x10
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                edi_2 = var_8_1
                ebx = var_4
                edx_4 = var_1c_1
            
            result = i - 1 - edx_4
            i = result - edx_4
            
            if (edx_2 == 0)
                i = result
            
            cond:0_1 = i == 0
        
        if (not(cond:0_1))
            *(*arg1 + 0x14) = 0xc
            (**arg1)(arg1)
        
        *ebx = edi_2
        result.b = 1
        ebx[1] = esi_2
        return result

return 0
