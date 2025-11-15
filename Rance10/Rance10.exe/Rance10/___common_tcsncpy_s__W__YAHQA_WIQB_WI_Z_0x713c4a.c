// 函数: ??$common_tcsncpy_s@_W@@YAHQA_WIQB_WI@Z
// 地址: 0x713c4a
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx
int32_t i_2 = arg4

if (i_2 != 0)
    if (arg1 == 0 || arg2 == 0)
        goto label_713c8a
    
label_713c73:
    
    if (i_2 != 0)
        int32_t __saved_ebx_1
        int32_t* eax_2
        
        if (arg3 == 0)
            *arg1 = 0
        label_713c8a:
            eax_2 = __errno()
            __saved_ebx_1 = 0x16
        label_713c92:
            *eax_2 = __saved_ebx_1
            __invalid_parameter_noinfo()
            return __saved_ebx_1
        
        int16_t* esi_3 = arg3 - arg1
        int32_t i_3 = arg2
        int32_t edi
        int32_t var_14_1 = edi
        int16_t* edi_1 = arg1
        
        if (i_2 != 0xffffffff)
            int32_t i
            
            do
                int16_t eax_5 = *(esi_3 + edi_1)
                *edi_1 = eax_5
                edi_1 = &edi_1[1]
                
                if (eax_5 == 0)
                    break
                
                int32_t i_4 = i_3
                i_3 -= 1
                
                if (i_4 == 1)
                    break
                
                i = i_2
                i_2 -= 1
            while (i != 1)
            bool cond:0_1 = i_2 != 0
            i_2 = arg4
            
            if (not(cond:0_1))
                *edi_1 = 0
        else
            int32_t i_1
            
            do
                int16_t eax_4 = *(esi_3 + edi_1)
                *edi_1 = eax_4
                edi_1 = &edi_1[1]
                
                if (eax_4 == 0)
                    break
                
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
        
        if (i_3 == 0)
            if (i_2 == 0xffffffff)
                arg1[arg2 - 1] = 0
                return 0x50
            
            *arg1 = 0
            eax_2 = __errno()
            __saved_ebx_1 = 0x22
            goto label_713c92
    else
        *arg1 = 0
else
    if (arg1 != 0)
        if (arg2 == 0)
            goto label_713c8a
        
        goto label_713c73
    
    if (arg2 != arg1)
        goto label_713c8a

return 0
