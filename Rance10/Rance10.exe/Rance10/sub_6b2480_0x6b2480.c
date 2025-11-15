// 函数: sub_6b2480
// 地址: 0x6b2480
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_ec
int32_t eax_1 = __security_cookie ^ &var_ec
char* result = arg4
char* result_2 = result
char* result_1 = 1

if (arg3 != 0 && arg2 != 0 && result != 0)
    int32_t edi_1 = *(arg2 + 0xf8)
    result = sub_6a7ba0(result, *(arg2 + 0xf4), arg3, edi_1, 1, 0x10)
    char* var_100_1
    void* ecx
    char* edx_1
    
    if (result != 0)
        sub_6a7cf0(arg3, *(arg2 + 0xf4))
        *(arg2 + 0xe8) |= 0x20
        *(arg2 + 0xf4) = result
        void* ebx_2 = &result[edi_1 << 4]
        int32_t* edi_4 = &result_2[0xc]
        bool cond:3_1
        
        do
            if (edi_4[-3] == 0 || edi_4[-1] == 0)
                edx_1 = "png_set_sPLT: invalid sPLT"
                ecx = arg3
                
                if ((*(arg3 + 0x78) & &__dos_header) == 0)
                    goto label_6b2697
                
                sub_6a7530(ecx, "png_set_sPLT: invalid sPLT")
            else
                result.b = edi_4[-2].b
                *(ebx_2 + 4) = result.b
                char* eax_2 = edi_4[-3]
                void* edx_3 = &eax_2[1]
                char i
                
                do
                    i = *eax_2
                    eax_2 = &eax_2[1]
                while (i != 0)
                char* eax_5 = sub_6a7b70(arg3, eax_2 - edx_3 + 1)
                *ebx_2 = eax_5
                
                if (eax_5 == 0)
                    result = result_1
                    break
                
                sub_700660(eax_5, edi_4[-3], eax_2 - edx_3 + 1)
                int32_t eax_6 = *edi_4
                
                if (eax_6 s<= 0)
                    edx_1 = "internal error: array alloc"
                    ecx = arg3
                    goto label_6b2697
                
                int32_t eax_7
                
                if (eax_6 u<= 0x19999999)
                    eax_7 = eax_6 * 5
                
                char* ecx_4
                
                if (eax_6 u> 0x19999999 || eax_7 == neg.d(eax_7))
                    ecx_4 = nullptr
                else
                    int32_t ecx_3 = *(arg3 + 0x274)
                    
                    if (ecx_3 == 0)
                        ecx_4 = sub_705e22()
                    else
                        ecx_4 = ecx_3(arg3, eax_7 * 2)
                
                *(ebx_2 + 8) = ecx_4
                
                if (ecx_4 == 0)
                    sub_6a7cf0(arg3, *ebx_2)
                    result = result_1
                    break
                
                *(ebx_2 + 0xc) = *edi_4
                sub_700660(ecx_4, edi_4[-1], *edi_4 * 0xa)
                *(arg2 + 8) |= 0x2000
                *(arg2 + 0xf8) += 1
                ebx_2 += 0x10
            
            edi_4 = &edi_4[4]
            result = result_1 - 1
            cond:3_1 = result_1 != 1
            result_1 = result
        while (cond:3_1)
        
        if (result s> 0)
            if ((*(arg3 + 0x74) & 0x8000) != 0)
                var_100_1 = "sPLT out of memory"
                goto label_6b2652
            
            edx_1 = "sPLT out of memory"
            ecx = arg3
            
            if ((*(arg3 + 0x78) & &__dos_header) == 0)
                goto label_6b2697
            
            result = sub_6a7530(ecx, edx_1)
    else if ((*(arg3 + 0x74) & 0x8000) == 0)
        edx_1 = "too many sPLT chunks"
        ecx = arg3
        
        if ((*(arg3 + 0x78) & &__dos_header) == 0)
        label_6b2697:
            sub_6a7500(ecx, edx_1)
            noreturn
        
        result = sub_6a7530(ecx, edx_1)
    else
        var_100_1 = "too many sPLT chunks"
    label_6b2652:
        void var_e0
        sub_6a7650(result, &var_e0, arg3, var_100_1)
        result = sub_6a7530(arg3, &var_e0)

@__security_check_cookie@4(eax_1 ^ &var_ec)
return result
