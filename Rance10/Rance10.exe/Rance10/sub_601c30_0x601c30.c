// 函数: sub_601c30
// 地址: 0x601c30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp
int32_t var_4 = ebp
int32_t* var_20 = &var_4
int32_t edi = *arg1
uint32_t eax = sub_6016e0(edi)

if (eax.b != 0)
    void* ecx_1 = data_7fcbb0
    
    if (ecx_1 != 0)
        char* esi_1 = arg1[4]
        
        if (esi_1 != 0)
            int32_t var_2c_1 = arg1[2]
            
            if (edi != 0x14)
                eax = sub_622840(ecx_1, var_2c_1)
                uint32_t ebp_5 = eax
                int32_t var_c
                
                if (ebp_5 != 0 && edi - 0x12 u<= 0x4b)
                    switch (edi)
                        case 0x12, 0x13, 0x5d
                            int32_t* eax_4 = sub_6007d0(ebp_5, arg1[3], esi_1)
                            *var_20
                            return eax_4
                        case 0x33
                            eax = sub_6007d0(ebp_5, arg1[3], &var_c)
                            
                            if (eax.b != 0)
                                eax.b = var_c != 0
                                *esi_1 = eax.b
                                *var_20
                                return eax
                        case 0x50
                            int32_t eax_6
                            int32_t ecx_8
                            eax_6, ecx_8 = (**(ebp_5 + 0x20))()
                            eax = eax_6 - 0xa
                            
                            if (eax u<= 0x25)
                                eax = zx.d(lookup_table_601f64[eax])
                                int32_t var_14
                                
                                switch (eax)
                                    case 0
                                        int32_t eax_20 = (*(*(ebp_5 + 0x20) + 8))()
                                        sub_42c9c0(arg1[4], eax_20)
                                        int32_t edi_3 = 0
                                        eax = (*(*(ebp_5 + 0x20) + 8))()
                                        
                                        if (eax s> 0)
                                            while (true)
                                                eax = sub_6007d0(ebp_5, edi_3, 
                                                    *arg1[4] + (edi_3 << 2))
                                                
                                                if (eax.b == 0)
                                                    break
                                                
                                                edi_3 += 1
                                                int32_t eax_26 = (*(*(ebp_5 + 0x20) + 8))()
                                                
                                                if (edi_3 s>= eax_26)
                                                    *var_20
                                                    return eax_26
                                    case 1
                                        int32_t eax_28 = (*(*(ebp_5 + 0x20) + 8))()
                                        sub_42c9c0(arg1[4], eax_28)
                                        int32_t edi_4 = 0
                                        eax = (*(*(ebp_5 + 0x20) + 8))()
                                        
                                        if (eax s> 0)
                                            while (true)
                                                eax = sub_6007d0(ebp_5, edi_4, 
                                                    *arg1[4] + (edi_4 << 2))
                                                
                                                if (eax.b == 0)
                                                    break
                                                
                                                edi_4 += 1
                                                int32_t eax_34 = (*(*(ebp_5 + 0x20) + 8))()
                                                
                                                if (edi_4 s>= eax_34)
                                                    *var_20
                                                    return eax_34
                                    case 2
                                        int32_t eax_36 = (*(*(ebp_5 + 0x20) + 8))()
                                        sub_416ab0(arg1[4], eax_36)
                                        int32_t edi_5 = 0
                                        eax = (*(*(ebp_5 + 0x20) + 8))()
                                        
                                        if (eax s> 0)
                                            var_14 = 0
                                            
                                            do
                                                var_c = 0xffffffff
                                                eax = sub_6007d0(ebp_5, edi_5, &var_c)
                                                
                                                if (eax.b == 0)
                                                    break
                                                
                                                void* eax_38 = sub_6227b0(data_7fcbb0, var_c)
                                                
                                                if (eax_38 != 0)
                                                    char* eax_39
                                                    
                                                    if (*(eax_38 + 0x14) != 0)
                                                        eax_39 = *(eax_38 + 0x10)
                                                    else
                                                        eax_39 = nullptr
                                                    
                                                    *arg1[4]
                                                    sub_403450(eax_39)
                                                
                                                int32_t eax_41 = *(ebp_5 + 0x20)
                                                var_14 += 0x18
                                                edi_5 += 1
                                                eax = (*(eax_41 + 8))()
                                            while (edi_5 s< eax)
                                    case 3
                                        int32_t eax_8 = (*(*(ebp_5 + 0x20) + 8))(ecx_8)
                                        sub_6024e0(arg1[4], eax_8)
                                        int32_t edi_2 = 0
                                        eax = (*(*(ebp_5 + 0x20) + 8))()
                                        
                                        if (eax s> 0)
                                            while (true)
                                                eax = sub_6007d0(ebp_5, edi_2, &var_c)
                                                
                                                if (eax.b == 0)
                                                    break
                                                
                                                var_14 = *arg1[4] + (edi_2 u>> 5 << 2)
                                                int32_t var_10_1 = edi_2 & 0x1f
                                                int32_t eax_15
                                                eax_15.b = var_c != 0
                                                sub_6024b0(&var_14, eax_15.b)
                                                edi_2 += 1
                                                int32_t eax_18 = (*(*(ebp_5 + 0x20) + 8))()
                                                
                                                if (edi_2 s>= eax_18)
                                                    *var_20
                                                    return eax_18
            else
                eax = sub_6227b0(ecx_1, var_2c_1)
                
                if (eax != 0)
                    if (*(eax + 0x14) != 0)
                        int32_t* eax_3 = sub_403450(*(eax + 0x10))
                        *var_20
                        return eax_3
                    
                    int32_t* eax_1 = sub_403450(nullptr)
                    *var_20
                    return eax_1

*var_20
return eax
