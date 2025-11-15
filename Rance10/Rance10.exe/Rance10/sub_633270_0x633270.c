// 函数: sub_633270
// 地址: 0x633270
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_3c
int32_t eax_1 = __security_cookie ^ &var_3c
void* const i = arg5

if (i == 0)
    i = *(arg1 + 0x58)

int16_t* esi = arg3
int32_t edi = arg4

if (esi != edi)
    while (i != 0)
        int32_t eax_3 = *(i + 4) - 1
        
        if (eax_3 u> 0x14)
            break
        
        uint32_t var_2c
        int16_t* var_28
        
        switch (eax_3)
            case 0, 7, 8, 0xc, 0xd, 0x13
                i = *(i + 0xc)
                continue
            case 1
                if ((*(arg1 + 0x60) & 1) != 0)
                    *arg2 = edi
                    goto label_6332f4
                
                while (esi[-1] != 0xa)
                    esi = &esi[1]
                    arg3 = esi
                    
                    if (esi == edi)
                        break
                
                break
            case 2
                if ((*(arg1 + 0x60) & 2) != 0)
                    *arg2 = edi
                    goto label_6332f4
                
                while (*esi != 0xa)
                    esi = &esi[1]
                    arg3 = esi
                    
                    if (esi == edi)
                        break
                
                break
            case 3, 4, 9, 0xa, 0xe, 0x10, 0x11, 0x12
                break
            case 5
                do
                    void* edi_1 = &esi[1]
                    int16_t* edx_1 = *(i + 0x1c)
                    int32_t* eax_8 = sub_634c80(&edx_1[1], edx_1, &var_2c, esi, edi_1, &edx_1[1], 
                        *(arg1 + 0x70), *(arg1 + 0x5c))
                    esi = arg3
                    
                    if (*eax_8 != esi)
                        break
                    
                    esi = edi_1
                    arg3 = esi
                while (esi != arg4)
                
            label_633357:
                *arg2 = esi
                @__security_check_cookie@4(eax_1 ^ &var_3c)
                return arg2
            case 6
                while (true)
                    uint32_t ecx_8 = zx.d(*esi)
                    int32_t* edx_2 = *(i + 0x14)
                    var_2c = ecx_8
                    
                    if (edx_2 == 0)
                        goto label_6333a5
                    
                    int32_t ecx_7
                    
                    if (*sub_634d30(esi + 2, edx_2, &var_28, esi, esi + 2) == esi)
                        ecx_8 = var_2c
                    label_6333a5:
                        uint32_t j
                        int32_t ecx_12
                        void* edx_5
                        
                        if (*(i + 0x20) != 0)
                            uint32_t j_1 = zx.d(ecx_8.w)
                            
                            if ((*(arg1 + 0x5c) & 0x800) != 0)
                                int32_t* ecx_9 = *(arg1 + 0x70)
                                j = j_1
                                int32_t* var_24
                                sub_633ee0(*ecx_9, &var_24, &j, &j:2)
                                int32_t* edx_4 = var_24
                                int32_t var_14
                                int32_t var_10
                                int16_t j_2
                                
                                if (var_14 != 1)
                                    j_2 = j.w
                                else
                                    int32_t* eax_12 = &var_24
                                    
                                    if (var_10 u>= 8)
                                        eax_12 = edx_4
                                    
                                    j_2 = *eax_12
                                
                                if (var_10 u>= 8)
                                    sub_403160(edx_4, var_10 + 1, 2)
                                
                                edi = arg4
                                j_1 = zx.d(j_2)
                                esi = arg3
                            
                            edx_5 = *(i + 0x20)
                            ecx_12 = 0
                            j = zx.d(j_1.w)
                        
                        if (*(i + 0x20) == 0 || *(edx_5 + 4) u<= 0)
                        label_633454:
                            uint32_t edx_7 = var_2c
                            
                            if (edx_7.w u>= 0x100)
                                void* eax_20 = *(i + 0x1c)
                                
                                if (eax_20 == 0)
                                label_6334c7:
                                    uint32_t eax_23 = zx.d(*(i + 0x24))
                                    char eax_25
                                    
                                    if (eax_23.w != 0)
                                        eax_25 = sub_633cb0(*(arg1 + 0x70), edx_7, eax_23)
                                        edi = arg4
                                        esi = arg3
                                    
                                    if (eax_23.w == 0 || eax_25 == 0)
                                        int32_t* edx_10 = *(i + 0x28)
                                        
                                        if (edx_10 == 0)
                                            ecx_7 = 0
                                        else
                                            edi = arg4
                                            esi = arg3
                                            
                                            if (sub_634dd0(arg1, edx_10, var_2c.w, *(arg1 + 0x70))
                                                    == 0)
                                                ecx_7 = 0
                                            else
                                                ecx_7 = 1
                                    else
                                        ecx_7 = 1
                                else
                                    int16_t* ecx_16 = *(eax_20 + 8)
                                    void* eax_22 = &ecx_16[*(eax_20 + 4)]
                                    
                                    if (ecx_16 == eax_22)
                                        goto label_6334c7
                                    
                                    while (*ecx_16 != edx_7.w)
                                        ecx_16 = &ecx_16[1]
                                        
                                        if (ecx_16 == eax_22)
                                            break
                                    
                                    if (ecx_16 == eax_22)
                                        goto label_6334c7
                                    
                                    ecx_7 = 1
                            else if (*(i + 0x18) == 0)
                                ecx_7 = 0
                            else
                                uint32_t edx_8 = zx.d(edx_7.w)
                                
                                if ((*((edx_8 u>> 3) + *(i + 0x18)) & (1 << (edx_8.b & 7)).b) == 0)
                                    ecx_7 = 0
                                else
                                    ecx_7 = 1
                        else
                            int32_t edx_6 = *(edx_5 + 8)
                            
                            while (zx.d(*(edx_6 + (ecx_12 << 1))) u> j
                                    || j u> zx.d(*(edx_6 + (ecx_12 << 1) + 2)))
                                ecx_12 += 2
                                
                                if (ecx_12 u>= *(*(i + 0x20) + 4))
                                    goto label_633454
                            
                            ecx_7 = 1
                    else
                        ecx_7 = 1
                    
                    if (ecx_7 != (*(i + 8) & 1))
                        break
                    
                    esi = &esi[1]
                    arg3 = esi
                    
                    if (esi == edi)
                        *arg2 = esi
                        @__security_check_cookie@4(eax_1 ^ &var_3c)
                        return arg2
                
                goto label_633357
            case 0xb, 0x14
                i = nullptr
                continue
            case 0xf
                while (i != 0)
                    int32_t* eax_31 = sub_633270(&var_28, esi, edi, *(i + 0xc))
                    esi = arg3
                    edi = *eax_31
                    arg4 = edi
                    i = *(i + 0x18)
                    
                    if (esi == edi)
                        break
                
                *arg2 = edi
                @__security_check_cookie@4(eax_1 ^ &var_3c)
                return arg2

*arg2 = esi
label_6332f4:
@__security_check_cookie@4(eax_1 ^ &var_3c)
return arg2
