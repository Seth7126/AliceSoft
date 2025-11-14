// 函数: sub_634aa0
// 地址: 0x634aa0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_e4
int32_t* result = __security_cookie ^ &var_e4
int32_t* result_1 = result
var_e4 = 1

if (arg3 != 0 && arg2 != 0 && arg4 != 0)
    int32_t var_f8_1 = 0x10
    result = sub_62abd0(result, *(arg2 + 0xf4), arg3, *(arg2 + 0xf8), 1)
    char* var_f8_2
    void* ecx
    char* edx_1
    
    if (result != 0)
        sub_62ace0(arg3, *(arg2 + 0xf4))
        int32_t eax_1 = *(arg2 + 0xf8)
        *(arg2 + 0xe8) |= 0x20
        *(arg2 + 0xf4) = result
        int32_t** ebx_2 = result + (eax_1 << 4)
        int32_t* edi_1 = arg4 + 0xc
        int32_t* i
        
        do
            if (edi_1[-3] == 0 || edi_1[-1] == 0)
                edx_1 = "png_set_sPLT: invalid sPLT"
                ecx = arg3
                
                if ((*(arg3 + 0x78) & &__dos_header) == 0)
                    goto label_634c95
                
                sub_62a550(ecx, "png_set_sPLT: invalid sPLT")
            else
                result.b = edi_1[-2].b
                ebx_2[1].b = result.b
                char* ecx_2 = edi_1[-3]
                void* edx_3 = &ecx_2[1]
                
                do
                    result.b = *ecx_2
                    ecx_2 = &ecx_2[1]
                while (result.b != 0)
                
                int32_t* eax_2
                
                if (ecx_2 - edx_3 == 0xffffffff)
                    eax_2 = nullptr
                else
                    eax_2 = sub_62ab50(arg3, ecx_2 - edx_3 + 1)
                
                *ebx_2 = eax_2
                
                if (eax_2 == 0)
                    result = var_e4
                    break
                
                int32_t* eax_3 = sub_69d850(eax_2, edi_1[-3], ecx_2 - edx_3 + 1)
                int32_t edx_5 = *edi_1
                ecx = arg3
                
                if (edx_5 s<= 0)
                    edx_1 = "internal error: array alloc"
                    goto label_634c95
                
                int32_t* eax_4 = sub_62ab80(eax_3, edx_5, ecx, 0xa)
                ebx_2[2] = eax_4
                
                if (eax_4 == 0)
                    sub_62ace0(arg3, *ebx_2)
                    result = var_e4
                    break
                
                ebx_2[3] = *edi_1
                sub_69d850(eax_4, edi_1[-1], *edi_1 * 0xa)
                *(arg2 + 8) |= 0x2000
                *(arg2 + 0xf8) += 1
                ebx_2 = &ebx_2[4]
            
            i = var_e4
            edi_1 = &edi_1[4]
            result = i - 1
            var_e4 = result
        while (i != 1)
        
        if (result s> 0)
            if ((*(arg3 + 0x74) & 0x8000) != 0)
                var_f8_2 = "sPLT out of memory"
                goto label_634c52
            
            edx_1 = "sPLT out of memory"
            ecx = arg3
            
            if ((*(arg3 + 0x78) & &__dos_header) == 0)
                goto label_634c95
            
            result = sub_62a550(ecx, edx_1)
    else if ((*(arg3 + 0x74) & 0x8000) == 0)
        edx_1 = "too many sPLT chunks"
        ecx = arg3
        
        if ((*(arg3 + 0x78) & &__dos_header) == 0)
        label_634c95:
            sub_62a520(ecx, edx_1)
            noreturn
        
        result = sub_62a550(ecx, edx_1)
    else
        var_f8_2 = "too many sPLT chunks"
    label_634c52:
        void var_dc
        sub_62a640(result, &var_dc, arg3, var_f8_2)
        result = sub_62a550(arg3, &var_dc)

sub_69a5bc(result_1 ^ &var_e4)
return result
