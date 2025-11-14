// 函数: _wcsncpy_s
// 地址: 0x6aa6f3
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t i_2 = arg4

if (i_2 != 0)
    if (arg1 == 0 || arg2 == 0)
        goto label_6aa730
    
label_6aa719:
    
    if (i_2 != 0)
        int16_t* esi_1 = arg3
        int32_t __saved_ebx_1
        void* eax_2
        
        if (esi_1 == 0)
            *arg1 = 0
        label_6aa730:
            eax_2 = __errno()
            __saved_ebx_1 = 0x16
        label_6aa738:
            *eax_2 = __saved_ebx_1
            __invalid_parameter_noinfo()
            return __saved_ebx_1
        
        int16_t* ebx_1 = arg1
        int32_t i_3 = arg2
        
        if (i_2 != 0xffffffff)
            int32_t i
            
            do
                int16_t eax_5 = *(esi_1 - arg1 + ebx_1)
                *ebx_1 = eax_5
                ebx_1 = &ebx_1[1]
                
                if (eax_5 == 0)
                    break
                
                int32_t i_4 = i_3
                i_3 -= 1
                
                if (i_4 == 1)
                    break
                
                i = i_2
                i_2 -= 1
            while (i != 1)
            
            if (i_2 == 0)
                *ebx_1 = 0
        else
            void* ebx_2 = ebx_1 - esi_1
            int32_t i_1
            
            do
                int16_t eax_4 = *esi_1
                *(ebx_2 + esi_1) = eax_4
                esi_1 = &esi_1[1]
                
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
            goto label_6aa738
    else
        *arg1 = 0
else
    if (arg1 != 0)
        if (arg2 == 0)
            goto label_6aa730
        
        goto label_6aa719
    
    if (arg2 != arg1)
        goto label_6aa730

return 0
