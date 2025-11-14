// 函数: _strncpy_s
// 地址: 0x6a60e4
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t i_2 = arg4

if (i_2 != 0)
    if (arg1 == 0 || arg2 == 0)
        goto label_6a611c
    
label_6a610a:
    
    if (i_2 != 0)
        char* esi_1 = arg3
        int32_t __saved_ebx_1
        void* eax_2
        
        if (esi_1 == 0)
            *arg1 = 0
        label_6a611c:
            eax_2 = __errno()
            __saved_ebx_1 = 0x16
        label_6a6124:
            *eax_2 = __saved_ebx_1
            __invalid_parameter_noinfo()
            return __saved_ebx_1
        
        char* ebx_1 = arg1
        int32_t i_3 = arg2
        int32_t eax_1
        
        if (i_2 != 0xffffffff)
            int32_t i
            
            do
                eax_1.b = *(esi_1 - arg1 + ebx_1)
                *ebx_1 = eax_1.b
                ebx_1 = &ebx_1[1]
                
                if (eax_1.b == 0)
                    break
                
                int32_t i_4 = i_3
                i_3 -= 1
                
                if (i_4 == 1)
                    break
                
                i = i_2
                i_2 -= 1
            while (i != 1)
            
            if (i_2 == 0)
                *ebx_1 = i_2.b
        else
            void* ebx_2 = ebx_1 - esi_1
            int32_t i_1
            
            do
                eax_1.b = *esi_1
                *(ebx_2 + esi_1) = eax_1.b
                esi_1 = &esi_1[1]
                
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
            goto label_6a6124
    else
        *arg1 = i_2.b
else
    if (arg1 != 0)
        if (arg2 == 0)
            goto label_6a611c
        
        goto label_6a610a
    
    if (arg2 != arg1)
        goto label_6a611c

return 0
