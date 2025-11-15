// 函数: ??$parse_integer@KV?$c_string_character_source@_W@__crt_strtox@@@__crt_strtox@@YAKQAU__crt_locale_pointers@@V?$c_string_character_source@_W@0@H_N@Z
// 地址: 0x713f7d
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_28 = edi
int16_t* arg_8
int32_t result

if (__crt_stdio_input::stream_input_adapter<wchar_t>::validate(&arg_8) == 0)
    result = 0
else if (arg3 == 0 || (arg3 s>= 2 && arg3 s<= 0x24))
    void* var_20
    int32_t ecx_3
    int32_t edx_2
    ecx_3, edx_2 = _LocaleUpdate::_LocaleUpdate(&var_20, arg1)
    int16_t* eax_4 = arg_8
    int32_t result_2 = 0
    int16_t* var_10_1 = eax_4
    int16_t esi_1
    
    while (true)
        esi_1 = *eax_4
        arg_8 = &eax_4[1]
        uint32_t eax_6
        eax_6, edx_2 = _iswctype((&eax_4[1]).w, edx_2, ecx_3, esi_1, 8)
        ecx_3 = 8
        
        if (eax_6 == 0)
            break
        
        eax_4 = arg_8
    
    int32_t ebx
    ebx.b = arg4 != 0
    int16_t* edi_3
    
    if (esi_1 != 0x2d)
        if (esi_1 == 0x2b)
            goto label_714016
        
        edi_3 = arg_8
    else
        ebx |= 2
    label_714016:
        int16_t* edi_2 = arg_8
        esi_1 = *edi_2
        edi_3 = &edi_2[1]
        arg_8 = edi_3
    
    int16_t var_8_1 = 0x19
    
    if (arg3 == 0 || arg3 == 0x10)
        int32_t eax_8
        
        if (esi_1 u< 0x30)
        label_7142a4:
            
            if ((0x41 u> esi_1 || esi_1 u> 0x5a) && esi_1 - 0x61 u> 0x19)
                eax_8 = 0xffffffff
            else
                uint32_t eax_28 = zx.d(esi_1)
                
                if (esi_1 - 0x61 u<= 0x19)
                    eax_28 -= 0x20
                
                eax_8 = eax_28 - 0x37
        else
            if (esi_1 u< 0x3a)
                eax_8 = zx.d(esi_1) - 0x30
            else if (esi_1 u< 0xff10)
                if (esi_1 u< 0x660)
                    goto label_7142a4
                
                if (esi_1 u< 0x66a)
                    eax_8 = zx.d(esi_1) - 0x660
                    goto label_71429c
                
                if (esi_1 u< 0x6f0)
                    goto label_7142a4
                
                if (esi_1 u>= 0x6fa)
                    if (esi_1 u< 0x966)
                        goto label_7142a4
                    
                    if (esi_1 u>= 0x970)
                        if (esi_1 u< 0x9e6)
                            goto label_7142a4
                        
                        if (esi_1 u>= 0x9f0)
                            if (esi_1 u< 0xa66)
                                goto label_7142a4
                            
                            if (esi_1 u>= 0xa70)
                                if (esi_1 u< 0xae6)
                                    goto label_7142a4
                                
                                if (esi_1 u>= 0xaf0)
                                    if (esi_1 u< 0xb66)
                                        goto label_7142a4
                                    
                                    if (esi_1 u>= 0xb70)
                                        if (esi_1 u< 0xc66)
                                            goto label_7142a4
                                        
                                        if (esi_1 u>= 0xc70)
                                            if (esi_1 u< 0xce6)
                                                goto label_7142a4
                                            
                                            if (esi_1 u>= 0xcf0)
                                                if (esi_1 u< 0xd66)
                                                    goto label_7142a4
                                                
                                                if (esi_1 u>= 0xd70)
                                                    if (esi_1 u< 0xe50)
                                                        goto label_7142a4
                                                    
                                                    if (esi_1 u>= 0xe5a)
                                                        if (esi_1 u< 0xed0)
                                                            goto label_7142a4
                                                        
                                                        if (esi_1 u>= 0xeda)
                                                            if (esi_1 u< 0xf20)
                                                                goto label_7142a4
                                                            
                                                            if (esi_1 u>= 0xf2a)
                                                                if (esi_1 u< 0x1040)
                                                                    goto label_7142a4
                                                                
                                                                if (esi_1 u>= 0x104a)
                                                                    if (esi_1 u< 0x17e0)
                                                                        goto label_7142a4
                                                                    
                                                                    if (esi_1 u>= 0x17ea)
                                                                        if (esi_1 u< 0x1810 || esi_1 u>= 0x181a)
                                                                            goto label_7142a4
                                                                        
                                                                        eax_8 = zx.d(esi_1) - 0x1810
                                                                    else
                                                                        eax_8 = zx.d(esi_1) - 0x17e0
                                                                else
                                                                    eax_8 = zx.d(esi_1) - 0x1040
                                                            else
                                                                eax_8 = zx.d(esi_1) - 0xf20
                                                        else
                                                            eax_8 = zx.d(esi_1) - 0xed0
                                                    else
                                                        eax_8 = zx.d(esi_1) - 0xe50
                                                else
                                                    eax_8 = zx.d(esi_1) - 0xd66
                                            else
                                                eax_8 = zx.d(esi_1) - 0xce6
                                        else
                                            eax_8 = zx.d(esi_1) - 0xc66
                                    else
                                        eax_8 = zx.d(esi_1) - 0xb66
                                else
                                    eax_8 = zx.d(esi_1) - 0xae6
                            else
                                eax_8 = zx.d(esi_1) - 0xa66
                        else
                            eax_8 = zx.d(esi_1) - 0x9e6
                    else
                        eax_8 = zx.d(esi_1) - 0x966
                else
                    eax_8 = zx.d(esi_1) - 0x6f0
            else if (esi_1 u>= 0xff1a)
                eax_8 = 0xffffffff
            else
                eax_8 = zx.d(esi_1) - 0xff10
            
        label_71429c:
            
            if (eax_8 == 0xffffffff)
                goto label_7142a4
        
        if (eax_8 == 0)
            uint32_t eax_29 = zx.d(*edi_3)
            arg_8 = &edi_3[1]
            
            if (eax_29 == 0x78 || eax_29 == 0x58)
                if (arg3 == 0)
                    arg3 = 0x10
                
                esi_1 = edi_3[1]
                edi_3 = &edi_3[2]
                arg_8 = edi_3
            else
                if (arg3 == 0)
                    arg3 = 8
                
                __crt_strtox::c_string_character_source<wchar_t>::unget(&arg_8, eax_29.w)
                edi_3 = arg_8
        else if (arg3 == 0)
            arg3 = 0xa
    
    int32_t eax_30 = 0xffffffff
    int32_t edx_3 = 0
    uint32_t temp0_1 = divu.dp.d(edx_3:eax_30, arg3)
    
    while (true)
        int32_t eax_33
        
        if (esi_1 u< 0x30)
        label_71458c:
            
            if ((0x41 u> esi_1 || esi_1 u> 0x5a) && esi_1 - 0x61 u> var_8_1)
                eax_33 = 0xffffffff
            else
                uint32_t eax_53 = zx.d(esi_1)
                
                if (esi_1 - 0x61 u<= var_8_1)
                    eax_53 -= 0x20
                
                eax_33 = eax_53 - 0x37
        else
            if (esi_1 u< 0x3a)
                eax_33 = zx.d(esi_1) - 0x30
            else if (esi_1 u< 0xff10)
                if (esi_1 u< 0x660)
                    goto label_71458c
                
                if (esi_1 u< 0x66a)
                    eax_33 = zx.d(esi_1) - 0x660
                    goto label_714584
                
                if (esi_1 u< 0x6f0)
                    goto label_71458c
                
                if (esi_1 u>= 0x6fa)
                    if (esi_1 u< 0x966)
                        goto label_71458c
                    
                    if (esi_1 u>= 0x970)
                        if (esi_1 u< 0x9e6)
                            goto label_71458c
                        
                        if (esi_1 u>= 0x9f0)
                            if (esi_1 u< 0xa66)
                                goto label_71458c
                            
                            if (esi_1 u>= 0xa70)
                                if (esi_1 u< 0xae6)
                                    goto label_71458c
                                
                                if (esi_1 u>= 0xaf0)
                                    if (esi_1 u< 0xb66)
                                        goto label_71458c
                                    
                                    if (esi_1 u>= 0xb70)
                                        if (esi_1 u< 0xc66)
                                            goto label_71458c
                                        
                                        if (esi_1 u>= 0xc70)
                                            if (esi_1 u< 0xce6)
                                                goto label_71458c
                                            
                                            if (esi_1 u>= 0xcf0)
                                                if (esi_1 u< 0xd66)
                                                    goto label_71458c
                                                
                                                if (esi_1 u>= 0xd70)
                                                    if (esi_1 u< 0xe50)
                                                        goto label_71458c
                                                    
                                                    if (esi_1 u>= 0xe5a)
                                                        if (esi_1 u< 0xed0)
                                                            goto label_71458c
                                                        
                                                        if (esi_1 u>= 0xeda)
                                                            if (esi_1 u< 0xf20)
                                                                goto label_71458c
                                                            
                                                            if (esi_1 u>= 0xf2a)
                                                                if (esi_1 u< 0x1040)
                                                                    goto label_71458c
                                                                
                                                                if (esi_1 u>= 0x104a)
                                                                    if (esi_1 u< 0x17e0)
                                                                        goto label_71458c
                                                                    
                                                                    if (esi_1 u>= 0x17ea)
                                                                        if (esi_1 u< 0x1810 || esi_1 u>= 0x181a)
                                                                            goto label_71458c
                                                                        
                                                                        eax_33 = zx.d(esi_1) - 0x1810
                                                                    else
                                                                        eax_33 = zx.d(esi_1) - 0x17e0
                                                                else
                                                                    eax_33 = zx.d(esi_1) - 0x1040
                                                            else
                                                                eax_33 = zx.d(esi_1) - 0xf20
                                                        else
                                                            eax_33 = zx.d(esi_1) - 0xed0
                                                    else
                                                        eax_33 = zx.d(esi_1) - 0xe50
                                                else
                                                    eax_33 = zx.d(esi_1) - 0xd66
                                            else
                                                eax_33 = zx.d(esi_1) - 0xce6
                                        else
                                            eax_33 = zx.d(esi_1) - 0xc66
                                    else
                                        eax_33 = zx.d(esi_1) - 0xb66
                                else
                                    eax_33 = zx.d(esi_1) - 0xae6
                            else
                                eax_33 = zx.d(esi_1) - 0xa66
                        else
                            eax_33 = zx.d(esi_1) - 0x9e6
                    else
                        eax_33 = zx.d(esi_1) - 0x966
                else
                    eax_33 = zx.d(esi_1) - 0x6f0
            else if (esi_1 u>= 0xff1a)
                eax_33 = 0xffffffff
            else
                eax_33 = zx.d(esi_1) - 0xff10
            
        label_714584:
            
            if (eax_33 == 0xffffffff)
                goto label_71458c
        
        if (eax_33 == 0xffffffff)
            break
        
        if (eax_33 u>= arg3)
            break
        
        ebx |= 8
        
        if (result_2 u< temp0_1
                || (result_2 == temp0_1 && eax_33 u<= modu.dp.d(edx_3:eax_30, arg3)))
            result_2 = result_2 * arg3 + eax_33
        else
            ebx |= 4
        
        esi_1 = *edi_3
        edi_3 = &edi_3[1]
        arg_8 = edi_3
    
    __crt_strtox::c_string_character_source<wchar_t>::unget(&arg_8, esi_1)
    
    if ((ebx.b & 8) != 0)
        int32_t result_1 = result_2
        
        if (__crt_strtox::is_overflow_condition<unsigned long>(ebx, result_1) == 0)
            if ((ebx.b & 2) != 0)
                result_1 = neg.d(result_1)
            
            result = result_1
        else
            *__errno() = 0x22
            
            if ((ebx.b & 1) == 0)
                result = 0xffffffff
            else if ((ebx.b & 2) == 0)
                result = 0x7fffffff
            else
                result = 0x80000000
    else
        result = 0
        arg_8 = var_10_1
    
    char var_14
    
    if (var_14 != 0)
        void* eax_57 = var_20
        *(eax_57 + 0x350) &= 0xfffffffd
else
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 0

if (arg2 != 0)
    *arg2 = arg_8

return result
