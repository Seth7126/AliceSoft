// 函数: sub_6b26a0
// 地址: 0x6b26a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* var_e8
int32_t eax_1 = __security_cookie ^ &var_e8
void* result = arg4
int32_t ebp = 1

if (arg3 != 0 && arg2 != 0 && result != 0)
    int32_t edi_1 = *(arg2 + 0xf0)
    char* eax_2 = sub_6a7ba0(result, *(arg2 + 0xec), arg3, edi_1, 1, 0x14)
    var_e8 = eax_2
    char var_dc[0xd8]
    char (* edx_2)[0xd8]
    
    if (eax_2 != 0)
        sub_6a7cf0(arg3, *(arg2 + 0xec))
        char* ecx_3 = var_e8
        *(arg2 + 0xe8) |= 0x200
        *(arg2 + 0xec) = ecx_3
        void* edi_2 = &ecx_3[edi_1 * 0x14]
        void* ebx_2 = result + 0xc
        void* ecx
        
        while (true)
            *edi_2 = *(ebx_2 - 0xc)
            *(edi_2 + 4) = 0
            int32_t ecx_5 = zx.d(*(ebx_2 + 4)) & 0xb
            
            if (ecx_5 == 0)
                if ((*(arg3 + 0x74) & 0x8000) != 0)
                label_6b286c:
                    edx_2 = "invalid location in png_set_unknown_chunks"
                    ecx = arg3
                    break
                
                edx_2 = "png_set_unknown_chunks now expects a valid location"
                ecx = arg3
                
                if ((*(arg3 + 0x78) & 0x200000) == 0)
                    break
                
                sub_6a7530(ecx, "png_set_unknown_chunks now expects a valid location")
                ecx_5 = zx.d(*(arg3 + 0x74)) & 0xb
                
                if (ecx_5 == 0)
                    goto label_6b286c
            
            for (int32_t i = neg.d(ecx_5) & ecx_5; ecx_5 != i; i = neg.d(ecx_5) & ecx_5)
                ecx_5 &= not.d(i)
            
            *(edi_2 + 0x10) = ecx_5.b
            int32_t edx_4 = *ebx_2
            
            if (edx_4 != 0)
                char* eax_10 = sub_6a7b70(arg3, edx_4)
                *(edi_2 + 8) = eax_10
                
                if (eax_10 != 0)
                    sub_700660(eax_10, *(ebx_2 - 4), *ebx_2)
                    *(edi_2 + 0xc) = *ebx_2
                    goto label_6b284e
                
                ecx = arg3
                
                if ((*(arg3 + 0x74) & 0x8000) == 0)
                    edx_2 = "unknown chunk: out of memory"
                    
                    if ((*(arg3 + 0x78) & &__dos_header) == 0)
                        break
                    
                    result = sub_6a7530(ecx, "unknown chunk: out of memory")
                else
                    sub_6a7650(eax_10, &var_dc, ecx, "unknown chunk: out of memory")
                    result = sub_6a7530(arg3, &var_dc)
            else
                *(edi_2 + 8) = edx_4
                *(edi_2 + 0xc) = edx_4
            label_6b284e:
                result = arg2
                edi_2 += 0x14
                *(result + 0xf0) += 1
            
            ebp -= 1
            ebx_2 += 0x14
            
            if (ebp s<= 0)
                goto label_6b2730
        
        sub_6a7500(ecx, edx_2)
        noreturn
    
    if ((*(arg3 + 0x74) & 0x8000) == 0)
        edx_2 = "too many unknown chunks"
        
        if ((*(arg3 + 0x78) & &__dos_header) == 0)
            sub_6a7500(arg3, edx_2)
            noreturn
        
        result = sub_6a7530(arg3, edx_2)
    else
        sub_6a7650(eax_2, &var_dc, arg3, "too many unknown chunks")
        result = sub_6a7530(arg3, &var_dc)

label_6b2730:
@__security_check_cookie@4(eax_1 ^ &var_e8)
return result
