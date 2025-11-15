// 函数: ___acrt_fp_strflt_to_string
// 地址: 0x71ecc7
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebx_1
int32_t* eax_1

if (arg1 != 0 && arg2 u> 0)
    int32_t i = arg3
    *arg1 = 0
    int32_t i_1
    
    i_1 = i s<= 0 ? 0 : i
    
    if (arg2 u> i_1 + 1)
        if (arg4 != 0)
            void* ebx_1 = &arg1[1]
            void* eax_4 = ebx_1
            int32_t edi
            int32_t var_10_1 = edi
            char* edi_1 = *(arg4 + 8)
            *arg1 = 0x30
            
            if (i s> 0)
                do
                    ebx_1.b = *edi_1
                    
                    if (ebx_1.b == 0)
                        ebx_1.b = 0x30
                    else
                        edi_1 = &edi_1[1]
                    
                    *eax_4 = ebx_1.b
                    eax_4 += 1
                    i -= 1
                while (i s> 0)
                
                ebx_1 = &arg1[1]
            
            *eax_4 = 0
            
            if (i s>= 0 && *edi_1 s>= 0x35)
                while (true)
                    eax_4 -= 1
                    
                    if (*eax_4 != 0x39)
                        break
                    
                    *eax_4 = 0x30
                
                *eax_4 += 1
            
            if (*arg1 != 0x31)
                char* ecx_1 = ebx_1
                
                do
                    eax_4.b = *ecx_1
                    ecx_1 = &ecx_1[1]
                while (eax_4.b != 0)
                
                sub_6feca0(arg1, ebx_1, ecx_1 - &ecx_1[1] + 1)
            else
                *(arg4 + 4) += 1
            
            return 0
        
        eax_1 = __errno()
        __saved_ebx_1 = 0x16
    else
        eax_1 = __errno()
        __saved_ebx_1 = 0x22
else
    eax_1 = __errno()
    __saved_ebx_1 = 0x16

*eax_1 = __saved_ebx_1
__invalid_parameter_noinfo()
return __saved_ebx_1
