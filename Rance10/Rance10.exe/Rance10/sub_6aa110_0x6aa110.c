// 函数: sub_6aa110
// 地址: 0x6aa110
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t var_18
int32_t eax_1 = __security_cookie ^ &var_18
uint32_t eax_2 = zx.d(*(arg3 + 8))
var_18 = eax_2

if (eax_2 != 3)
    uint32_t esi_1 = zx.d(*(arg3 + 9))
    uint32_t var_14
    int32_t edi_1
    
    if ((eax_2.b & 2) == 0)
        edi_1 = 1
        var_14 = esi_1 - zx.d(arg4[3])
    else
        edi_1 = 3
        uint32_t eax_4 = zx.d(arg4[1])
        var_14 = esi_1 - zx.d(*arg4)
        uint32_t var_10_1 = esi_1 - eax_4
        uint32_t var_c_1 = esi_1 - zx.d(arg4[2])
    
    if ((var_18.b & 4) != 0)
        (&var_14)[edi_1] = esi_1 - zx.d(arg4[4])
        edi_1 += 1
    
    int32_t ebx_2 = 0
    eax_2 = 0
    
    if (edi_1 != 0)
        do
            int32_t ecx_9 = (&var_14)[eax_2]
            
            if (ecx_9 s<= 0 || ecx_9 s>= esi_1)
                (&var_14)[eax_2] = 0
            else
                ebx_2 = 1
            
            eax_2 += 1
        while (eax_2 s< edi_1)
        
        if (ebx_2 != 0 && esi_1 - 2 u<= 0xe)
            eax_2 = zx.d(*(esi_1 + &jump_table_6aa314[4]:2))
            
            switch (eax_2)
                case 0
                    int32_t esi_3 = *(arg3 + 4)
                    int32_t ecx_10 = 0
                    eax_2 = esi_3 + arg2
                    
                    if (arg2 u> eax_2)
                        esi_3 = 0
                    
                    if (esi_3 != 0)
                        do
                            eax_2.b = *arg2
                            arg2 += 1
                            eax_2.b u>>= 1
                            ecx_10 += 1
                            eax_2.b &= 0x55
                            *(arg2 - 1) = eax_2.b
                        while (ecx_10 u< esi_3)
                        
                        @__security_check_cookie@4(eax_1 ^ &var_18)
                        return eax_2
                case 1
                    uint8_t ecx_13 = var_14.b
                    int32_t edi_2 = *(arg3 + 4)
                    int32_t esi_4 = 0
                    int32_t ebx_3 = 0xf s>> ecx_13
                    eax_2 = edi_2 + arg2
                    
                    if (arg2 u> eax_2)
                        edi_2 = 0
                    
                    if (edi_2 != 0)
                        do
                            eax_2.b = *arg2
                            arg2 += 1
                            eax_2.b u>>= ecx_13
                            esi_4 += 1
                            ecx_13 = var_14.b
                            eax_2.b &= ebx_3.b | (ebx_3 << 4).b
                            *(arg2 - 1) = eax_2.b
                        while (esi_4 u< edi_2)
                        
                        @__security_check_cookie@4(eax_1 ^ &var_18)
                        return eax_2
                case 2
                    int32_t ebx_5 = *(arg3 + 4)
                    int32_t ecx_16 = 0
                    int32_t esi_5 = 0
                    eax_2 = ebx_5 + arg2
                    
                    if (arg2 u> eax_2)
                        ebx_5 = 0
                    
                    if (ebx_5 != 0)
                        int32_t eax_10
                        
                        do
                            eax_10 = ecx_16 + 1
                            esi_5 += 1
                            ecx_16.b = (&var_14)[ecx_16].b
                            arg2 += 1
                            *(arg2 - 1) u>>= ecx_16.b
                            ecx_16 = 0
                            
                            if (eax_10 s< edi_1)
                                ecx_16 = eax_10
                        while (esi_5 u< ebx_5)
                        
                        @__security_check_cookie@4(eax_1 ^ &var_18)
                        return eax_10
                case 3
                    int32_t ebp_1 = 0
                    eax_2 = *(arg3 + 4) + arg2
                    var_18 = eax_2
                    
                    if (arg2 u< eax_2)
                        do
                            int32_t ebx_9 =
                                ((zx.d(*arg2) << 8) + zx.d(*(arg2 + 1))) s>> ((&var_14)[ebp_1]).b
                            int32_t ecx_20 = ebp_1 + 1
                            ebp_1 = 0
                            eax_2 = ebx_9 s>> 8
                            *arg2 = eax_2.b
                            *(arg2 + 1) = ebx_9.b
                            arg2 += 2
                            
                            if (ecx_20 s< edi_1)
                                ebp_1 = ecx_20
                        while (arg2 u< var_18)

@__security_check_cookie@4(eax_1 ^ &var_18)
return eax_2
