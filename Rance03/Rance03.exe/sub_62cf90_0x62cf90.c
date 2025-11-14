// 函数: sub_62cf90
// 地址: 0x62cf90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_18
int32_t eax_1 = __security_cookie ^ &var_18
void* eax_2 = arg3
var_18 = eax_2
uint32_t ebx = zx.d(*(eax_2 + 8))

if (ebx != 3)
    uint32_t esi_1 = zx.d(*(eax_2 + 9))
    uint32_t var_14
    int32_t ebp_1
    
    if ((ebx.b & 2) == 0)
        ebp_1 = 1
        var_14 = esi_1 - zx.d(arg4[3])
    else
        ebp_1 = 3
        uint32_t eax_4 = zx.d(arg4[1])
        var_14 = esi_1 - zx.d(*arg4)
        uint32_t var_10_1 = esi_1 - eax_4
        uint32_t var_c_1 = esi_1 - zx.d(arg4[2])
    
    if ((ebx.b & 4) != 0)
        (&var_14)[ebp_1] = esi_1 - zx.d(arg4[4])
        ebp_1 += 1
    
    int32_t edi_2 = 0
    eax_2 = nullptr
    
    if (ebp_1 s> 0)
        do
            int32_t ecx_9 = (&var_14)[eax_2]
            
            if (ecx_9 s<= 0 || ecx_9 s>= esi_1)
                (&var_14)[eax_2] = 0
            else
                edi_2 = 1
            
            eax_2 += 1
        while (eax_2 s< ebp_1)
        
        if (edi_2 != 0 && esi_1 - 2 u<= 0xe)
            eax_2 = zx.d(*(esi_1 + &jump_table_62d1a4[4]:2))
            
            switch (eax_2)
                case nullptr
                    int32_t ecx_10 = 0
                    eax_2 = *(var_18 + 4) + arg2
                    int32_t esi_4 = eax_2 - arg2
                    
                    if (arg2 u> eax_2)
                        esi_4 = 0
                    
                    if (esi_4 != 0)
                        do
                            eax_2.b = *arg2
                            arg2 = &arg2[1]
                            eax_2.b u>>= 1
                            ecx_10 += 1
                            eax_2.b &= 0x55
                            arg2[0xffffffff] = eax_2.b
                        while (ecx_10 u< esi_4)
                        
                        sub_69a5bc(eax_1 ^ &var_18)
                        return eax_2
                case 1
                    uint8_t ecx_13 = var_14.b
                    int32_t edi_3 = 0
                    int32_t ebx_1 = 0xf s>> ecx_13
                    void* esi_6 = *(var_18 + 4) + arg2
                    int32_t ebp_3 = esi_6 - arg2
                    eax_2 = nullptr
                    
                    if (arg2 u> esi_6)
                        ebp_3 = 0
                    
                    if (ebp_3 != 0)
                        do
                            eax_2.b = *arg2
                            arg2 = &arg2[1]
                            eax_2.b u>>= ecx_13
                            edi_3 += 1
                            ecx_13 = var_14.b
                            eax_2.b &= ebx_1.b | (ebx_1 << 4).b
                            arg2[0xffffffff] = eax_2.b
                        while (edi_3 u< ebp_3)
                        
                        sub_69a5bc(eax_1 ^ &var_18)
                        return eax_2
                case 2
                    int32_t esi_7 = 0
                    int32_t edi_4 = 0
                    eax_2 = *(var_18 + 4) + arg2
                    int32_t ebx_4 = eax_2 - arg2
                    
                    if (arg2 u> eax_2)
                        ebx_4 = 0
                    
                    if (ebx_4 != 0)
                        uint8_t eax_16
                        
                        do
                            char ecx_16 = (&var_14)[esi_7].b
                            arg2 = &arg2[1]
                            esi_7 += 1
                            eax_16 = (zx.d(arg2[0xffffffff]) u>> ecx_16).b
                            arg2[0xffffffff] = eax_16
                            
                            if (esi_7 s>= ebp_1)
                                esi_7 = 0
                            
                            edi_4 += 1
                        while (edi_4 u< ebx_4)
                        
                        sub_69a5bc(eax_1 ^ &var_18)
                        return eax_16
                case 3
                    int32_t edi_5 = 0
                    eax_2 = *(var_18 + 4) + arg2
                    var_18 = eax_2
                    
                    if (arg2 u< eax_2)
                        do
                            char ecx_19 = ((&var_14)[edi_5]).b
                            edi_5 += 1
                            int32_t ebx_8 = ((zx.d(*arg2) << 8) + zx.d(arg2[1])) s>> ecx_19
                            
                            if (edi_5 s>= ebp_1)
                                edi_5 = 0
                            
                            eax_2 = ebx_8 s>> 8
                            *arg2 = eax_2.b
                            arg2[1] = ebx_8.b
                            arg2 = &arg2[2]
                        while (arg2 u< var_18)

sub_69a5bc(eax_1 ^ &var_18)
return eax_2
