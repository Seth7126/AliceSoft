// 函数: sub_634650
// 地址: 0x634650
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_34
int32_t eax_1 = __security_cookie ^ &var_34
int32_t ebx = arg3
int16_t* esi = arg2
void* const i = arg4
var_34 = arg1

if (i == 0)
    i = *(arg1 + 0x58)

if (esi != ebx)
    while (i != 0)
        int32_t eax_3 = *(i + 4) - 1
        
        if (eax_3 u> 0x14)
            break
        
        switch (eax_3)
            case 0, 7, 8, 0xc, 0xd, 0x13
                i = *(i + 0xc)
                continue
            case 1
                if ((*(arg1 + 0x60) & 1) != 0)
                    @__security_check_cookie@4(eax_1 ^ &var_34)
                    return ebx
                
                while (esi[-1] != 0xa)
                    esi = &esi[1]
                    
                    if (esi == ebx)
                        break
                
                break
            case 2
                if ((*(arg1 + 0x60) & 2) != 0)
                    @__security_check_cookie@4(eax_1 ^ &var_34)
                    return ebx
                
                while (*esi != 0xa)
                    esi = &esi[1]
                    
                    if (esi == ebx)
                        break
                
                break
            case 3, 4, 9, 0xa, 0xe, 0x10, 0x11, 0x12
                break
            case 5
                do
                    void* eax_6 = var_34
                    int16_t* ecx_2 = *(i + 0x1c)
                    
                    if (sub_6360d0(&ecx_2[1], &esi[1], esi, ecx_2, &ecx_2[1], *(eax_6 + 0x70), 
                            *(eax_6 + 0x5c)) != esi)
                        break
                    
                    esi = &esi[1]
                while (esi != ebx)
                
                break
            case 6
                do
                    uint32_t ebx_3 = zx.d(*esi)
                    int32_t* eax_9 = *(i + 0x14)
                    
                    if (eax_9 == 0)
                        goto label_634753
                    
                    int32_t ecx_5
                    
                    if (sub_636160(eax_9, &esi[1], esi, eax_9) == esi)
                        arg1 = var_34
                    label_634753:
                        
                        if (*(i + 0x20) != 0)
                            uint32_t eax_11 = zx.d(ebx_3.w)
                            
                            if ((*(arg1 + 0x5c) & 0x800) != 0)
                                int32_t* ecx_6 = *(arg1 + 0x70)
                                uint32_t var_2c = eax_11
                                int32_t* var_24
                                sub_633ee0(*ecx_6, &var_24, &var_2c, &var_2c:2)
                                int32_t* edx_3 = var_24
                                int32_t var_14
                                int32_t var_10
                                int16_t ebx_1
                                
                                if (var_14 != 1)
                                    ebx_1 = var_2c.w
                                else
                                    int32_t* eax_12 = &var_24
                                    
                                    if (var_10 u>= 8)
                                        eax_12 = edx_3
                                    
                                    ebx_1 = *eax_12
                                
                                if (var_10 u>= 8)
                                    sub_403160(edx_3, var_10 + 1, 2)
                                
                                eax_11 = zx.d(ebx_1)
                            
                            void* edx_4 = *(i + 0x20)
                            int32_t j = 0
                            uint32_t ebx_2 = zx.d(eax_11.w)
                            
                            if (*(edx_4 + 4) u> 0)
                                int32_t edx_5 = *(edx_4 + 8)
                                
                                do
                                    if (zx.d(*(edx_5 + (j << 1))) u<= ebx_2
                                            && ebx_2 u<= zx.d(*(edx_5 + (j << 1) + 2)))
                                        goto label_63488c
                                    
                                    j += 2
                                while (j u< *(*(i + 0x20) + 4))
                        
                        bool cond:3_1
                        
                        if (ebx_3.w u>= 0x100)
                            void* eax_19 = *(i + 0x1c)
                            
                            if (eax_19 == 0)
                            label_63484e:
                                uint32_t eax_22 = zx.d(*(i + 0x24))
                                char eax_23
                                
                                if (eax_22.w != 0)
                                    eax_23 = sub_633cb0(*(var_34 + 0x70), ebx_3, eax_22)
                                
                                if (eax_22.w == 0 || eax_23 == 0)
                                    int32_t* edx_8 = *(i + 0x28)
                                    
                                    if (edx_8 != 0)
                                        void* eax_24 = var_34
                                        cond:3_1 =
                                            sub_634dd0(eax_24, edx_8, ebx_3.w, *(eax_24 + 0x70))
                                            == 0
                                        goto label_63488a
                                    
                                    ecx_5 = 0
                                else
                                    ecx_5 = 1
                            else
                                int16_t* ecx_12 = *(eax_19 + 8)
                                void* eax_21 = &ecx_12[*(eax_19 + 4)]
                                
                                if (ecx_12 == eax_21)
                                    goto label_63484e
                                
                                while (*ecx_12 != ebx_3.w)
                                    ecx_12 = &ecx_12[1]
                                    
                                    if (ecx_12 == eax_21)
                                        break
                                
                                if (ecx_12 == eax_21)
                                    goto label_63484e
                                
                                ecx_5 = 1
                        else if (*(i + 0x18) == 0)
                            ecx_5 = 0
                        else
                            uint32_t edx_6 = zx.d(ebx_3.w)
                            cond:3_1 =
                                (*((edx_6 u>> 3) + *(i + 0x18)) & (1 << (edx_6.b & 7)).b) == 0
                        label_63488a:
                            
                            if (cond:3_1)
                                ecx_5 = 0
                            else
                            label_63488c:
                                ecx_5 = 1
                    else
                        ecx_5 = 1
                    
                    if (ecx_5 != (*(i + 8) & 1))
                        break
                    
                    arg1 = var_34
                    esi = &esi[1]
                while (esi != ebx)
                
                break
            case 0xb, 0x14
                i = nullptr
                continue
            case 0xf
                while (i != 0)
                    int32_t eax_28 = sub_634650(esi, ebx, *(i + 0xc))
                    i = *(i + 0x18)
                    ebx = eax_28
                    
                    if (esi == ebx)
                        break
                
                @__security_check_cookie@4(eax_1 ^ &var_34)
                return ebx

@__security_check_cookie@4(eax_1 ^ &var_34)
return esi
