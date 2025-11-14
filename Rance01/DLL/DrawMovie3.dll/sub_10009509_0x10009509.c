// 函数: sub_10009509
// 地址: 0x10009509
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t ecx
int32_t edx
ecx, edx = __chkstk(0x1ae4)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
void* numberOfBytesWritten_6 = nullptr
uint32_t var_1ad4 = 0
void* result

if (arg4 == 0)
    result = nullptr
else
    int32_t var_10
    
    if (arg3 != 0)
        int32_t edi
        var_10 = edi
        void* esi = &(&data_10023540)[arg2 s>> 5]
        int32_t edi_3 = (arg2 & 0x1f) << 6
        void* eax_8 = *esi + edi_3
        int32_t ebx
        ebx.b = *(eax_8 + 0x24)
        ebx.b *= 2
        ebx.b s>>= 1
        void* var_1adc_1 = esi
        char var_1add_1 = ebx.b
        
        if (ebx.b == 2 || ebx.b == 1)
            ecx = not.d(arg4)
        
        if ((ebx.b != 2 && ebx.b != 1) || (ecx.b & 1) != 0)
            if ((*(eax_8 + 4) & 0x20) != 0)
                sub_1000936b(eax_8, edx, ecx, arg2, 0, 0, FILE_END)
            
            int32_t eax_11 = sub_10009d61(arg2)
            enum CONSOLE_MODE var_1ae8
            uint32_t var_1ae4_1
            BOOL eax_16
            
            if (eax_11 != 0 && (*(edi_3 + *esi + 4) & 0x80) != 0)
                uint32_t ecx_3
                ecx_3.b = *(*(__getptd() + 0x6c) + 0x14) == 0
                var_1ae4_1 = ecx_3
                eax_16 = GetConsoleMode(*(edi_3 + *esi), &var_1ae8)
            
            uint32_t numberOfBytesWritten_1
            uint32_t wideCharStr
            
            if (eax_11 == 0 || (*(edi_3 + *esi + 4) & 0x80) == 0 || eax_16 == 0
                    || (var_1ae4_1 != 0 && ebx.b == 0))
                int32_t* eax_37 = *esi + edi_3
                uint32_t numberOfBytesWritten
                
                if ((eax_37[1].b & 0x80) != 0)
                    wideCharStr = 0
                    uint8_t buffer[0x6a8]
                    
                    if (ebx.b == 0)
                        numberOfBytesWritten_1 = arg3
                        
                        if (arg4 u<= 0)
                            goto label_10009bf3
                        
                        while (true)
                            int32_t var_1ac0_2 = 0
                            void* ecx_12 = numberOfBytesWritten_1 - arg3
                            uint8_t (* eax_39)[0x6a8] = &buffer
                            
                            while (ecx_12 u< arg4)
                                uint32_t numberOfBytesWritten_5 = numberOfBytesWritten_1
                                numberOfBytesWritten_1 += 1
                                numberOfBytesWritten_5.b = *numberOfBytesWritten_5
                                ecx_12 += 1
                                
                                if (numberOfBytesWritten_5.b == 0xa)
                                    var_1ad4 += 1
                                    *eax_39 = 0xd
                                    eax_39 = &(*eax_39)[1]
                                    var_1ac0_2 += 1
                                
                                *eax_39 = numberOfBytesWritten_5.b
                                eax_39 = &(*eax_39)[1]
                                var_1ac0_2 += 1
                                
                                if (var_1ac0_2 u>= 0x13ff)
                                    break
                            
                            uint32_t nNumberOfBytesToWrite_1 = eax_39 - &buffer
                            
                            if (WriteFile(*(edi_3 + *esi), &buffer, nNumberOfBytesToWrite_1, 
                                    &numberOfBytesWritten, nullptr) == 0)
                                goto label_10009ba6
                            
                            uint32_t numberOfBytesWritten_2 = numberOfBytesWritten
                            numberOfBytesWritten_6 += numberOfBytesWritten_2
                            
                            if (numberOfBytesWritten_2 s< nNumberOfBytesToWrite_1)
                                break
                            
                            if (numberOfBytesWritten_1 - arg3 u>= arg4)
                                break
                            
                            esi = var_1adc_1
                        
                        goto label_10009bac
                    
                    char* var_1ac0_3 = arg3
                    
                    if (ebx.b == 2)
                        if (arg4 u<= 0)
                            goto label_10009bf3
                        
                        while (true)
                            numberOfBytesWritten_1 = 0
                            void* ecx_14 = var_1ac0_3 - arg3
                            uint8_t (* eax_44)[0x6a8] = &buffer
                            
                            while (ecx_14 u< arg4)
                                char* edx_3 = var_1ac0_3
                                var_1ac0_3 = &var_1ac0_3[2]
                                int16_t edx_4 = *edx_3
                                ecx_14 += 2
                                
                                if (edx_4 == 0xa)
                                    var_1ad4 += 2
                                    *eax_44 = 0xd
                                    eax_44 = &(*eax_44)[2]
                                    numberOfBytesWritten_1 += 2
                                
                                numberOfBytesWritten_1 += 2
                                *eax_44 = edx_4
                                eax_44 = &(*eax_44)[2]
                                
                                if (numberOfBytesWritten_1 u>= 0x13fe)
                                    break
                            
                            uint32_t nNumberOfBytesToWrite_2 = eax_44 - &buffer
                            
                            if (WriteFile(*(edi_3 + *esi), &buffer, nNumberOfBytesToWrite_2, 
                                    &numberOfBytesWritten, nullptr) == 0)
                                goto label_10009ba6
                            
                            uint32_t numberOfBytesWritten_3 = numberOfBytesWritten
                            numberOfBytesWritten_6 += numberOfBytesWritten_3
                            
                            if (numberOfBytesWritten_3 s< nNumberOfBytesToWrite_2)
                                break
                            
                            if (var_1ac0_3 - arg3 u>= arg4)
                                break
                            
                            esi = var_1adc_1
                        
                        goto label_10009bac
                    
                    if (arg4 u<= 0)
                        goto label_10009bf3
                    
                    void* numberOfBytesWritten_7
                    
                    do
                        numberOfBytesWritten_1 = 0
                        void* ecx_17 = var_1ac0_3 - arg3
                        wchar16 wideCharStr_1[0x346]
                        wchar16 (* eax_51)[0x346] = &wideCharStr_1
                        
                        while (ecx_17 u< arg4)
                            int16_t edx_6 = *var_1ac0_3
                            var_1ac0_3 = &var_1ac0_3[2]
                            ecx_17 += 2
                            
                            if (edx_6 == 0xa)
                                *eax_51 = 0xd
                                eax_51 = &(*eax_51)[1]
                                numberOfBytesWritten_1 += 2
                            
                            numberOfBytesWritten_1 += 2
                            *eax_51 = edx_6
                            eax_51 = &(*eax_51)[1]
                            
                            if (numberOfBytesWritten_1 u>= 0x6a8)
                                break
                        
                        int32_t esi_3 = 0
                        int32_t eax_53
                        int32_t edx_7
                        edx_7:eax_53 = sx.q(eax_51 - &wideCharStr_1)
                        void multiByteStr
                        int32_t eax_56 = WideCharToMultiByte(0xfde9, 0, &wideCharStr_1, 
                            (eax_53 - edx_7) s>> 1, &multiByteStr, 0xd55, nullptr, nullptr)
                        
                        if (eax_56 == 0)
                            goto label_10009ba6
                        
                        do
                            if (WriteFile(*(edi_3 + *var_1adc_1), &__saved_ebp + esi_3 - 0x1410, 
                                    eax_56 - esi_3, &numberOfBytesWritten, nullptr) == 0)
                                wideCharStr = GetLastError()
                                break
                            
                            esi_3 += numberOfBytesWritten
                        while (eax_56 s> esi_3)
                        
                        if (eax_56 s> esi_3)
                            break
                        
                        numberOfBytesWritten_7 = var_1ac0_3 - arg3
                        numberOfBytesWritten_6 = numberOfBytesWritten_7
                    while (numberOfBytesWritten_7 u< arg4)
                    goto label_10009bac
                
                if (WriteFile(*eax_37, arg3, arg4, &numberOfBytesWritten, nullptr) == 0)
                label_10009ba6:
                    wideCharStr = GetLastError()
                    goto label_10009bac
                
                void* numberOfBytesWritten_4 = numberOfBytesWritten
                wideCharStr = 0
                numberOfBytesWritten_6 = numberOfBytesWritten_4
            label_10009bac:
                
                if (numberOfBytesWritten_6 == 0)
                    goto label_10009bb5
                
                result = numberOfBytesWritten_6 - var_1ad4
            else
                uint32_t eax_17
                uint32_t ecx_4
                eax_17, ecx_4 = GetConsoleCP()
                char* ebx_1 = arg3
                var_1ae8 = eax_17
                numberOfBytesWritten_1 = 0
                
                if (arg4 u> 0)
                    int32_t var_1ac0_1 = 0
                    
                    do
                        uint32_t eax_18
                        eax_18.b = var_1add_1
                        
                        if (eax_18.b != 0)
                            if (eax_18.b == 1 || eax_18.b == 2)
                                uint32_t wideCharStr_3 = zx.d(*ebx_1)
                                ecx_4.b = wideCharStr_3.w == 0xa
                                ebx_1 = &ebx_1[2]
                                var_1ac0_1 += 2
                                wideCharStr = wideCharStr_3
                                var_1ae4_1 = ecx_4
                            
                            if (eax_18.b == 1 || eax_18.b == 2)
                                uint32_t wideCharStr_2 = wideCharStr
                                
                                if (sub_1000b237() != wideCharStr.w)
                                    goto label_10009ba6
                                
                                numberOfBytesWritten_6 += 2
                                
                                if (var_1ae4_1 != 0)
                                    uint32_t var_14_11 = 0xd
                                    wideCharStr = 0xd
                                    
                                    if (sub_1000b237() != wideCharStr.w)
                                        goto label_10009ba6
                                    
                                    numberOfBytesWritten_6 += 1
                                    var_1ad4 += 1
                        else
                            ecx_4.b = *ebx_1
                            uint32_t eax_19
                            eax_19.b = ecx_4.b == 0xa
                            var_1ae4_1 = eax_19
                            void* eax_21 = *var_1adc_1 + edi_3
                            int32_t* var_18_4
                            int32_t var_14_5
                            
                            if (*(eax_21 + 0x38) == 0)
                                if (__ismbcupper(ecx_4.b) == 0)
                                    var_14_5 = 1
                                    var_18_4 = ebx_1
                                    goto label_1000970e
                                
                                if (arg3 - ebx_1 + arg4 u<= 1)
                                    numberOfBytesWritten_6 += 1
                                    *(edi_3 + *var_1adc_1 + 0x34) = *ebx_1
                                    *(edi_3 + *var_1adc_1 + 0x38) = 1
                                    break
                                
                                if (__mbscat_s(&wideCharStr, ebx_1, 2) == 0xffffffff)
                                    break
                                
                                ebx_1 = &ebx_1[1]
                                var_1ac0_1 += 1
                            else
                                var_10.b = *(eax_21 + 0x34)
                                var_10:1.b = ecx_4.b
                                *(eax_21 + 0x38) = 0
                                var_14_5 = 2
                                var_18_4 = &var_10
                            label_1000970e:
                                
                                if (__mbscat_s(&wideCharStr, var_18_4, var_14_5) == 0xffffffff)
                                    break
                            ebx_1 = &ebx_1[1]
                            var_1ac0_1 += 1
                            int32_t nNumberOfBytesToWrite = WideCharToMultiByte(var_1ae8, 0, 
                                &wideCharStr, 1, &var_10, 5, nullptr, nullptr)
                            
                            if (nNumberOfBytesToWrite == 0)
                                break
                            
                            if (WriteFile(*(edi_3 + *var_1adc_1), &var_10, nNumberOfBytesToWrite, 
                                    &numberOfBytesWritten_1, nullptr) == 0)
                                goto label_10009ba6
                            
                            numberOfBytesWritten_6 = var_1ac0_1 + var_1ad4
                            
                            if (numberOfBytesWritten_1 s< nNumberOfBytesToWrite)
                                break
                            
                            if (var_1ae4_1 != 0)
                                var_10.b = 0xd
                                BOOL eax_33
                                eax_33, ecx_4 = WriteFile(*(edi_3 + *var_1adc_1), &var_10, 1, 
                                    &numberOfBytesWritten_1, nullptr)
                                
                                if (eax_33 == 0)
                                    goto label_10009ba6
                                
                                if (numberOfBytesWritten_1 s< 1)
                                    break
                                
                                var_1ad4 += 1
                                numberOfBytesWritten_6 += 1
                    while (var_1ac0_1 u< arg4)
                    
                    goto label_10009bac
                
            label_10009bb5:
                
                if (wideCharStr == 0)
                    esi = var_1adc_1
                label_10009bf3:
                    
                    if ((*(edi_3 + *esi + 4) & 0x40) == 0 || *arg3 != 0x1a)
                        *__errno() = 0x1c
                        *___doserrno() = 0
                        result = 0xffffffff
                    else
                        result = nullptr
                else
                    if (wideCharStr != 5)
                        ___acrt_errno_map_os_error(wideCharStr)
                    else
                        *__errno() = 9
                        *___doserrno() = 5
                    
                    result = 0xffffffff
        else
            *___doserrno() = 0
            void* eax_10 = __errno()
            int32_t var_24
            __builtin_memset(&var_24, 0, 0x14)
            *eax_10 = 0x16
            int32_t var_20
            int32_t var_1c_1
            int32_t var_18_1
            int32_t var_14_1
            sub_100020e4(var_24, var_20, var_1c_1, var_18_1, var_14_1)
            result = 0xffffffff
    else
        *___doserrno() = 0
        void* eax_4 = __errno()
        int32_t var_1c
        __builtin_memset(&var_1c, 0, 0x14)
        *eax_4 = 0x16
        int32_t var_18
        int32_t var_14
        int32_t __saved_ebx
        sub_100020e4(var_1c, var_18, var_14, var_10, __saved_ebx, arg1)
        result = 0xffffffff

sub_10001d19(arg1 ^ &__saved_ebp)
return result
