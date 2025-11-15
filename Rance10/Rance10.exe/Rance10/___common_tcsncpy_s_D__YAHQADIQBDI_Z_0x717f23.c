// 函数: ??$common_tcsncpy_s@D@@YAHQADIQBDI@Z
// 地址: 0x717f23
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx
int32_t i_2 = arg4

if (i_2 != 0)
    if (arg1 == 0 || arg2 == 0)
        goto label_717f5e
    
label_717f4c:
    
    if (i_2 != 0)
        int32_t __saved_ebx_1
        int32_t* eax_2
        
        if (arg3 == 0)
            *arg1 = 0
        label_717f5e:
            eax_2 = __errno()
            __saved_ebx_1 = 0x16
        label_717f66:
            *eax_2 = __saved_ebx_1
            __invalid_parameter_noinfo()
            return __saved_ebx_1
        
        char* esi_3 = arg3 - arg1
        int32_t i_3 = arg2
        int32_t edi
        int32_t var_14_1 = edi
        char* edi_1 = arg1
        int32_t eax_1
        
        if (i_2 != 0xffffffff)
            int32_t i
            
            do
                eax_1.b = *(esi_3 + edi_1)
                *edi_1 = eax_1.b
                edi_1 = &edi_1[1]
                
                if (eax_1.b == 0)
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
                eax_1.b = *(esi_3 + edi_1)
                *edi_1 = eax_1.b
                edi_1 = &edi_1[1]
                
                if (eax_1.b == 0)
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
            goto label_717f66
    else
        *arg1 = i_2.b
else
    if (arg1 != 0)
        if (arg2 == 0)
            goto label_717f5e
        
        goto label_717f4c
    
    if (arg2 != arg1)
        goto label_717f5e

return 0
