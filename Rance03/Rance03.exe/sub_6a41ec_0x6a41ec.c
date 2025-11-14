// 函数: sub_6a41ec
// 地址: 0x6a41ec
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

__chkstk(0x1af0)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
int32_t var_1ac0 = 0
uint32_t numberOfBytesWritten_2 = arg2
void* numberOfBytesWritten_5 = nullptr
uint32_t numberOfBytesWritten_1 = numberOfBytesWritten_2
enum WIN32_ERROR wideCharStr_3 = NO_ERROR
void* numberOfBytesWritten_8 = nullptr
void* result

if (arg4 == 0)
    result = nullptr
else if (arg3 != 0)
    int32_t edx_2 = numberOfBytesWritten_2 s>> 5
    int32_t ecx_3 = (numberOfBytesWritten_2 & 0x1f) << 6
    int32_t ebx
    int32_t var_10 = ebx
    int32_t edx_3 = (&data_75ca40)[edx_2]
    ebx.b = *(ecx_3 + edx_3 + 0x24)
    ebx.b *= 2
    ebx.b s>>= 1
    
    if (ebx.b != 2 && ebx.b != 1)
        goto label_6a42ba
    
    if (((not.d(arg4)).b & 1) != 0)
        numberOfBytesWritten_2 = numberOfBytesWritten_1
    label_6a42ba:
        
        if ((*(ecx_3 + edx_3 + 4) & 0x20) != 0)
            __lseeki64_nolock(numberOfBytesWritten_2, edx_3, ecx_3, numberOfBytesWritten_2, 0, 0, 
                FILE_END)
        
        int32_t eax_8 = sub_6aa1a8(numberOfBytesWritten_1)
        enum CONSOLE_MODE var_1aec
        BOOL eax_15
        int32_t ecx_6
        
        if (eax_8 != 0 && (*(ecx_3 + (&data_75ca40)[edx_2] + 4) & 0x80) != 0)
            enum CONSOLE_MODE* lpMode = &var_1aec
            ecx_6.b = *(__getptd()[0x1b] + 0xa8) == 0
            eax_15 = GetConsoleMode(*(ecx_3 + (&data_75ca40)[edx_2]), lpMode)
        
        enum WIN32_ERROR wideCharStr
        int32_t ecx_11
        char* numberOfBytesWritten_4
        
        if (eax_8 != 0 && (*(ecx_3 + (&data_75ca40)[edx_2] + 4) & 0x80) != 0 && eax_15 != 0
                && (ecx_6 == 0 || ebx.b != 0))
            uint32_t CodePage = GetConsoleCP()
            numberOfBytesWritten_4 = arg3
            enum WIN32_ERROR wideCharStr_2 = NO_ERROR
            numberOfBytesWritten_1 = 0
            wideCharStr = NO_ERROR
            char* numberOfBytesWritten_7 = numberOfBytesWritten_4
            
            if (arg4 u<= 0)
                goto label_6a4a14
            
            char* numberOfBytesWritten_10 = numberOfBytesWritten_7
            void* edx_4 = nullptr
            void* var_1ac4 = nullptr
            int32_t var_1af0_1 = 0xa
            
            while (true)
                int32_t var_1ac8_4 = 0
                
                if (ebx.b != 0)
                    if (ebx.b == 1 || ebx.b == 2)
                        wideCharStr_2 = zx.d(*numberOfBytesWritten_10)
                        wideCharStr = wideCharStr_2
                        int32_t edx_6
                        edx_6.b = wideCharStr_2.w == 0xa
                        numberOfBytesWritten_10 = &numberOfBytesWritten_10[2]
                        var_1ac8_4 = edx_6
                        edx_4 = var_1ac4 + 2
                        numberOfBytesWritten_7 = numberOfBytesWritten_10
                        var_1ac4 = edx_4
                    
                    if (ebx.b == 1 || ebx.b == 2)
                        enum WIN32_ERROR wideCharStr_4 = wideCharStr_2
                        int16_t eax_36 = __putwch_nolock(wideCharStr_2)
                        wideCharStr_2 = wideCharStr
                        
                        if (eax_36 != wideCharStr_2.w)
                            goto label_6a4628
                        
                        numberOfBytesWritten_5 += 2
                        
                        if (var_1ac8_4 != 0)
                            int32_t var_14_9 = 0xd
                            wideCharStr = ERROR_INVALID_DATA
                            int16_t eax_37 = __putwch_nolock(wideCharStr_2)
                            wideCharStr_2 = wideCharStr
                            
                            if (eax_37 != wideCharStr_2.w)
                                goto label_6a4628
                            
                            numberOfBytesWritten_5 += 1
                            var_1ac0 += 1
                        
                        edx_4 = var_1ac4
                        numberOfBytesWritten_10 = numberOfBytesWritten_7
                else
                    edx_4.b = *numberOfBytesWritten_10
                    enum CONSOLE_MODE eax_16
                    eax_16.b = edx_4.b == 0xa
                    var_1aec = eax_16
                    int32_t eax_18 = (&data_75ca40)[edx_2]
                    int32_t var_1ac8_2 = eax_18
                    void* numberOfBytesWritten_11
                    int32_t* numberOfBytesWritten_9
                    int32_t var_14_3
                    
                    if (*(ecx_3 + eax_18 + 0x38) == 0)
                        if (__forcdecpt(edx_4.b) == 0)
                            var_14_3 = 1
                            numberOfBytesWritten_9 = numberOfBytesWritten_7
                            goto label_6a4452
                        
                        if (arg3 - numberOfBytesWritten_7 + arg4 u<= 1)
                            numberOfBytesWritten_5 += 1
                            void* eax_24
                            eax_24.b = *numberOfBytesWritten_7
                            *(ecx_3 + (&data_75ca40)[edx_2] + 0x34) = eax_24.b
                            *(ecx_3 + (&data_75ca40)[edx_2] + 0x38) = 1
                            goto label_6a4739
                        
                        if (__wspawnvp(&wideCharStr, numberOfBytesWritten_7, 2) == 0xffffffff)
                            goto label_6a4739
                        
                        numberOfBytesWritten_11 = &numberOfBytesWritten_7[1]
                        var_1ac4 += 1
                    else
                        eax_18.b = *(ecx_3 + eax_18 + 0x34)
                        var_10.b = eax_18.b
                        var_10:1.b = edx_4.b
                        var_14_3 = 2
                        *(ecx_3 + var_1ac8_2 + 0x38) = 0
                        numberOfBytesWritten_9 = &var_10
                    label_6a4452:
                        
                        if (__wspawnvp(&wideCharStr, numberOfBytesWritten_9, var_14_3)
                                == 0xffffffff)
                            goto label_6a4739
                        
                        numberOfBytesWritten_11 = numberOfBytesWritten_7
                    var_1ac4 += 1
                    numberOfBytesWritten_7 = numberOfBytesWritten_11 + 1
                    int32_t nNumberOfBytesToWrite = WideCharToMultiByte(CodePage, 0, &wideCharStr, 
                        1, &var_10, 5, nullptr, nullptr)
                    
                    if (nNumberOfBytesToWrite == 0)
                        goto label_6a4739
                    
                    if (WriteFile(*(ecx_3 + (&data_75ca40)[edx_2]), &var_10, nNumberOfBytesToWrite, 
                            &numberOfBytesWritten_1, nullptr) == 0)
                        goto label_6a4628
                    
                    ecx_11 = var_1ac0
                    numberOfBytesWritten_5 = var_1ac4 + ecx_11
                    
                    if (numberOfBytesWritten_1 s< nNumberOfBytesToWrite)
                        break
                    
                    if (var_1aec != 0)
                        var_10.b = 0xd
                        
                        if (WriteFile(*(ecx_3 + (&data_75ca40)[edx_2]), &var_10, 1, 
                                &numberOfBytesWritten_1, nullptr) == 0)
                            goto label_6a4628
                        
                        if (numberOfBytesWritten_1 s< 1)
                            goto label_6a4739
                        
                        var_1ac0 += 1
                        numberOfBytesWritten_5 += 1
                    
                    wideCharStr_2 = wideCharStr
                    edx_4 = var_1ac4
                    numberOfBytesWritten_10 = numberOfBytesWritten_7
                
                if (edx_4 u>= arg4)
                    goto label_6a4739
            
            goto label_6a473f
        
        int32_t ecx_14 = (&data_75ca40)[edx_2]
        uint32_t numberOfBytesWritten
        
        if ((*(ecx_3 + ecx_14 + 4) & 0x80) != 0)
            numberOfBytesWritten_4 = arg3
            wideCharStr = NO_ERROR
            uint8_t buffer[0x6a8]
            
            if (ebx.b == 0)
                numberOfBytesWritten_1 = numberOfBytesWritten_4
                
                if (arg4 == 0)
                    goto label_6a4a14
                
                while (true)
                    uint8_t (* edi)[0x6a8] = &buffer
                    int32_t var_1ac8_5 = 0
                    void* eax_43 = numberOfBytesWritten_4 - arg3
                    
                    while (eax_43 u< arg4)
                        int32_t ecx_15
                        ecx_15.b = *numberOfBytesWritten_4
                        eax_43 += 1
                        char var_1ae5_1 = ecx_15.b
                        numberOfBytesWritten_1 = &numberOfBytesWritten_4[1]
                        int32_t ecx_16 = var_1ac8_5
                        
                        if (ecx_15.b == 0xa)
                            var_1ac0 += 1
                            *edi = 0xd
                            edi = &(*edi)[1]
                            ecx_16 += 1
                        
                        void* edx_9
                        edx_9.b = var_1ae5_1
                        *edi = edx_9.b
                        edi = &(*edi)[1]
                        numberOfBytesWritten_4 = numberOfBytesWritten_1
                        var_1ac8_5 = ecx_16 + 1
                        
                        if (ecx_16 + 1 u>= 0x13ff)
                            break
                    
                    uint32_t nNumberOfBytesToWrite_2 = edi - &buffer
                    
                    if (WriteFile(*(ecx_3 + (&data_75ca40)[edx_2]), &buffer, 
                            nNumberOfBytesToWrite_2, &numberOfBytesWritten, nullptr) == 0)
                        goto label_6a4628
                    
                    numberOfBytesWritten_5 += numberOfBytesWritten
                    
                    if (numberOfBytesWritten s>= nNumberOfBytesToWrite_2)
                        numberOfBytesWritten_4 = numberOfBytesWritten_1
                        
                        if (numberOfBytesWritten_4 - arg3 u< arg4)
                            continue
                    
                    wideCharStr_3 = wideCharStr
                    break
                
                goto label_6a4739
            
            char* numberOfBytesWritten_3 = numberOfBytesWritten_4
            
            if (ebx.b == 2)
                if (arg4 u<= 0)
                    goto label_6a4a14
                
                int32_t var_1af0_2 = 0xa
                
                do
                    var_1aec = 0
                    uint8_t (* ebx_3)[0x6a8] = &buffer
                    int32_t eax_52 = numberOfBytesWritten_3 - numberOfBytesWritten_4
                    enum CONSOLE_MODE edx_10 = var_1aec
                    
                    while (eax_52 u< arg4)
                        int16_t edi_1 = *numberOfBytesWritten_3
                        eax_52 += 2
                        numberOfBytesWritten_3 = &numberOfBytesWritten_3[2]
                        
                        if (edi_1 == 0xa)
                            var_1ac0 += 2
                            *ebx_3 = 0xd
                            ebx_3 = &(*ebx_3)[2]
                            edx_10 += 2
                        
                        *ebx_3 = edi_1
                        edx_10 += 2
                        ebx_3 = &(*ebx_3)[2]
                        
                        if (edx_10 u>= 0x13fe)
                            break
                    
                    uint32_t nNumberOfBytesToWrite_1 = ebx_3 - &buffer
                    BOOL eax_55 = WriteFile(*(ecx_3 + (&data_75ca40)[edx_2]), &buffer, 
                        nNumberOfBytesToWrite_1, &numberOfBytesWritten, nullptr)
                    numberOfBytesWritten_5 = numberOfBytesWritten_8
                    wideCharStr_3 = wideCharStr
                    
                    if (eax_55 == 0)
                        goto label_6a4628
                    
                    numberOfBytesWritten_5 += numberOfBytesWritten
                    numberOfBytesWritten_8 = numberOfBytesWritten_5
                    
                    if (numberOfBytesWritten s< nNumberOfBytesToWrite_1)
                        break
                    
                    numberOfBytesWritten_4 = arg3
                while (numberOfBytesWritten_3 - numberOfBytesWritten_4 u< arg4)
                
                goto label_6a4739
            
            numberOfBytesWritten_1 = numberOfBytesWritten_3
            
            if (arg4 == 0)
                goto label_6a4a14
            
            int32_t var_1af0_3 = 0xa
            
            do
                var_1aec = 0
                wchar16 wideCharStr_1[0x356]
                wchar16 (* eax_58)[0x356] = &wideCharStr_1
                uint32_t numberOfBytesWritten_6 = numberOfBytesWritten_1
                int32_t ecx_19 = numberOfBytesWritten_3 - numberOfBytesWritten_4
                enum CONSOLE_MODE edx_11 = var_1aec
                
                while (ecx_19 u< arg4)
                    int16_t esi_1 = *numberOfBytesWritten_6
                    ecx_19 += 2
                    numberOfBytesWritten_6 += 2
                    numberOfBytesWritten_1 = numberOfBytesWritten_6
                    
                    if (esi_1 == 0xa)
                        *eax_58 = 0xd
                        eax_58 = &(*eax_58)[1]
                        numberOfBytesWritten_6 = numberOfBytesWritten_1
                        edx_11 += 2
                    
                    *eax_58 = esi_1
                    edx_11 += 2
                    eax_58 = &(*eax_58)[1]
                    
                    if (edx_11 u>= 0x6a8)
                        break
                
                int32_t eax_60
                int32_t edx_12
                edx_12:eax_60 = sx.q(eax_58 - &wideCharStr_1)
                void multiByteStr
                int32_t eax_63 = WideCharToMultiByte(0xfde9, 0, &wideCharStr_1, 
                    (eax_60 - edx_12) s>> 1, &multiByteStr, 0xd55, nullptr, nullptr)
                numberOfBytesWritten_5 = numberOfBytesWritten_8
                wideCharStr_3 = wideCharStr
                int32_t var_1ac8_7 = eax_63
                
                if (eax_63 == 0)
                    goto label_6a4628
                
                int32_t ecx_20 = 0
                int32_t var_1ac4_1 = 0
                
                do
                    if (WriteFile(*(ecx_3 + (&data_75ca40)[edx_2]), &multiByteStr + ecx_20, 
                            eax_63 - ecx_20, &numberOfBytesWritten, nullptr) == 0)
                        ecx_20 = var_1ac4_1
                        wideCharStr_3 = GetLastError()
                        eax_63 = var_1ac8_7
                        wideCharStr = wideCharStr_3
                        break
                    
                    ecx_20 = var_1ac4_1 + numberOfBytesWritten
                    eax_63 = var_1ac8_7
                    var_1ac4_1 = ecx_20
                while (eax_63 s> ecx_20)
                
                if (eax_63 s> ecx_20)
                    break
                
                numberOfBytesWritten_3 = numberOfBytesWritten_1
                numberOfBytesWritten_4 = arg3
                numberOfBytesWritten_5 = numberOfBytesWritten_3 - numberOfBytesWritten_4
                numberOfBytesWritten_8 = numberOfBytesWritten_5
            while (numberOfBytesWritten_5 u< arg4)
            
            goto label_6a4739
        
        if (WriteFile(*(ecx_3 + ecx_14), arg3, arg4, &numberOfBytesWritten, nullptr) == 0)
        label_6a4628:
            wideCharStr_3 = GetLastError()
            goto label_6a4739
        
        numberOfBytesWritten_5 = numberOfBytesWritten
        wideCharStr_3 = NO_ERROR
    label_6a4739:
        ecx_11 = var_1ac0
    label_6a473f:
        
        if (numberOfBytesWritten_5 != 0)
            result = numberOfBytesWritten_5 - ecx_11
        else if (wideCharStr_3 == NO_ERROR)
            numberOfBytesWritten_4 = arg3
        label_6a4a14:
            
            if ((*(ecx_3 + (&data_75ca40)[edx_2] + 4) & 0x40) == 0
                    || *numberOfBytesWritten_4 != 0x1a)
                *__errno() = 0x1c
                *___doserrno() = 0
                result = 0xffffffff
            else
                result = nullptr
        else
            if (wideCharStr_3 != ERROR_ACCESS_DENIED)
                __dosmaperr(wideCharStr_3)
            else
                *__errno() = 9
                *___doserrno() = 5
            
            result = 0xffffffff
    else
        *___doserrno() = 0
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        result = 0xffffffff
else
    *___doserrno() = 0
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 0xffffffff

sub_69a5bc(arg1 ^ &__saved_ebp)
return result
