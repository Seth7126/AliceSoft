// 函数: __mbtowc_l
// 地址: 0x716441
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 != 0 && arg3 != 0)
    if (*arg2 != 0)
        int32_t edi
        int32_t var_20_1 = edi
        void* var_14
        _LocaleUpdate::_LocaleUpdate(&var_14, arg4)
        void* var_10
        int32_t result
        
        if (*(var_10 + 0xa8) != 0)
            if (__isleadbyte_l(*arg2, &var_10) == 0)
                int32_t cchWideChar_1
                cchWideChar_1.b = arg1 != 0
                result = 1
                
                if (MultiByteToWideChar(*(var_10 + 8), MB_ERR_INVALID_CHARS | MB_PRECOMPOSED, arg2, 
                        1, arg1, cchWideChar_1) == 0)
                    result = 0xffffffff
                    *__errno() = 0x2a
            else
                void* edi_1 = var_10
                bool cond:0_1
                
                if (*(edi_1 + 4) s<= 1)
                label_7164e2:
                    cond:0_1 = arg3 u< *(edi_1 + 4)
                label_7164e5:
                    
                    if (cond:0_1 || arg2[1] == 0)
                        result = 0xffffffff
                        *__errno() = 0x2a
                    else
                        result = *(edi_1 + 4)
                else
                    int32_t temp0_1 = *(edi_1 + 4)
                    cond:0_1 = arg3 u< temp0_1
                    
                    if (arg3 s< temp0_1)
                        goto label_7164e5
                    
                    int32_t cchWideChar
                    cchWideChar.b = arg1 != 0
                    int32_t eax_7 = MultiByteToWideChar(*(edi_1 + 8), 
                        MB_ERR_INVALID_CHARS | MB_PRECOMPOSED, arg2, *(edi_1 + 4), arg1, 
                        cchWideChar)
                    edi_1 = var_10
                    
                    if (eax_7 == 0)
                        goto label_7164e2
                    
                    result = *(edi_1 + 4)
        else
            if (arg1 != 0)
                *arg1 = zx.w(*arg2)
            
            result = 1
        
        char var_8
        
        if (var_8 != 0)
            void* ecx_4 = var_14
            *(ecx_4 + 0x350) &= 0xfffffffd
        
        return result
    
    if (arg1 != 0)
        *arg1 = 0

return 0
