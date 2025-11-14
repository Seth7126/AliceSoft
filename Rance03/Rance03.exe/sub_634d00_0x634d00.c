// 函数: sub_634d00
// 地址: 0x634d00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* result_1
int32_t eax_1 = __security_cookie ^ &result_1
int32_t* result = arg4
result_1 = result
int32_t ebp = 1

if (arg3 != 0 && arg2 != 0 && result != 0)
    int32_t edi_1 = arg2[0x3c]
    int32_t var_fc_1 = 0x14
    int32_t* eax_2 = sub_62abd0(result, arg2[0x3b], arg3, edi_1, 1)
    char var_dc[0xd8]
    
    if (eax_2 != 0)
        sub_62ace0(arg3, arg2[0x3b])
        arg2[0x3a] |= 0x200
        arg2[0x3b] = eax_2
        void* edi_2 = &eax_2[edi_1 * 5]
        void* ebx_2 = &result_1[3]
        
        while (true)
            *edi_2 = *(ebx_2 - 0xc)
            *(edi_2 + 4) = 0
            *(edi_2 + 0x10) = sub_634ca0(arg3, zx.d(*(ebx_2 + 4)))
            uint32_t edx_5 = *ebx_2
            
            if (edx_5 != 0)
                int32_t* eax_6 = sub_62ab50(arg3, edx_5)
                *(edi_2 + 8) = eax_6
                
                if (eax_6 != 0)
                    sub_69d850(eax_6, *(ebx_2 - 4), *ebx_2)
                    *(edi_2 + 0xc) = *ebx_2
                    goto label_634e57
                
                if ((*(arg3 + 0x74) & 0x8000) == 0)
                    if ((*(arg3 + 0x78) & &__dos_header) == 0)
                        break
                    
                    result = sub_62a550(arg3, "unknown chunk: out of memory")
                else
                    sub_62a640(eax_6, &var_dc, arg3, "unknown chunk: out of memory")
                    result = sub_62a550(arg3, &var_dc)
            else
                *(edi_2 + 8) = edx_5
                *(edi_2 + 0xc) = edx_5
            label_634e57:
                result = arg2
                edi_2 += 0x14
                result[0x3c] += 1
            
            ebp -= 1
            ebx_2 += 0x14
            
            if (ebp s<= 0)
                goto label_634e7d
        
        sub_62a520(arg3, "unknown chunk: out of memory")
        noreturn
    
    if ((*(arg3 + 0x74) & 0x8000) == 0)
        char (* edx_2)[0xd8] = "too many unknown chunks"
        
        if ((*(arg3 + 0x78) & &__dos_header) == 0)
            sub_62a520(arg3, edx_2)
            noreturn
        
        result = sub_62a550(arg3, edx_2)
    else
        sub_62a640(eax_2, &var_dc, arg3, "too many unknown chunks")
        result = sub_62a550(arg3, &var_dc)

label_634e7d:
sub_69a5bc(eax_1 ^ &result_1)
return result
