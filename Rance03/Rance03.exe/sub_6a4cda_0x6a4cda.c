// 函数: sub_6a4cda
// 地址: 0x6a4cda
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t nNumberOfBytesToRead = arg3
int32_t edi = 0
int32_t var_1c = 0xfffffffe
enum CONSOLE_MODE mode = 0
uint32_t nNumberOfBytesToRead_1 = nNumberOfBytesToRead

if (arg1 != 0xfffffffe)
    int32_t var_10_1
    int32_t eax
    int32_t ecx_2
    int32_t edx_1
    int32_t ebx_3
    
    if (arg1 s>= 0 && arg1 u< data_75de9c)
        ecx_2 = arg1 s>> 5
        ebx_3 = (arg1 & 0x1f) << 6
        var_10_1 = ecx_2
        edx_1 = (&data_75ca40)[ecx_2]
        eax.b = *(edx_1 + ebx_3 + 4)
    
    if (arg1 s< 0 || arg1 u>= data_75de9c || (eax.b & 1) == 0)
        *___doserrno() = 0
        *__errno() = 9
        __invalid_parameter_noinfo()
    else if (nNumberOfBytesToRead u<= 0x7fffffff)
        if (nNumberOfBytesToRead == 0 || (eax.b & 2) != 0)
            return 0
        
        if (arg2 != 0)
            eax.b = *(edx_1 + ebx_3 + 0x24)
            eax.b *= 2
            eax.b s>>= 1
            arg3:3.b = eax.b
            int32_t eax_6 = sx.d(eax.b)
            char* lpMultiByteStr
            char* eax_16
            
            if (eax_6 != 1)
                if (eax_6 != 2)
                    goto label_6a4da8
                
                if (((not.d(nNumberOfBytesToRead)).b & 1) == 0)
                    goto label_6a4d85
                
                nNumberOfBytesToRead &= 0xfffffffe
            label_6a4da8:
                eax_16 = arg2
                lpMultiByteStr = eax_16
            label_6a4e14:
                int32_t edx_4 = (&data_75ca40)[ecx_2]
                void* lpBuffer = eax_16
                
                if ((*(edx_4 + ebx_3 + 4) & 0x48) != 0)
                    edx_4.b = *(edx_4 + ebx_3 + 5)
                    
                    if (edx_4.b != 0xa && nNumberOfBytesToRead != 0)
                        *eax_16 = edx_4.b
                        edi = 1
                        nNumberOfBytesToRead -= 1
                        lpBuffer = &eax_16[1]
                        *((&data_75ca40)[var_10_1] + ebx_3 + 5) = 0xa
                        
                        if (arg3:3.b != 0)
                            int32_t eax_18
                            eax_18.b = *((&data_75ca40)[var_10_1] + ebx_3 + 0x25)
                            
                            if (eax_18.b != 0xa && nNumberOfBytesToRead != 0)
                                eax_16[1] = eax_18.b
                                nNumberOfBytesToRead -= 1
                                lpBuffer = &eax_16[2]
                                edi = 2
                                *((&data_75ca40)[var_10_1] + ebx_3 + 0x25) = 0xa
                                
                                if (arg3:3.b == 1)
                                    int32_t eax_20
                                    eax_20.b = *((&data_75ca40)[var_10_1] + ebx_3 + 0x26)
                                    
                                    if (eax_20.b != 0xa && nNumberOfBytesToRead != 0)
                                        eax_16[2] = eax_20.b
                                        nNumberOfBytesToRead -= 1
                                        edi = 3
                                        lpBuffer = &eax_16[3]
                                        *((&data_75ca40)[var_10_1] + ebx_3 + 0x26) = 0xa
                
                int32_t eax_23 = var_10_1
                
                if (sub_6aa1a8(arg1) == 0)
                    goto label_6a4f46
                
                HANDLE* ecx_8 = (&data_75ca40)[eax_23]
                
                if ((ecx_8[(arg1 & 0x1f) * 0x10 + 1].b & 0x80) == 0)
                    goto label_6a4f46
                
                BOOL mode_1 = GetConsoleMode(ecx_8[(arg1 & 0x1f) * 0x10], &mode)
                mode = mode_1
                char* lpMultiByteStr_3
                int32_t ebx_4
                uint32_t var_18
                enum WIN32_ERROR eax_27
                BOOL eax_28
                uint32_t ecx_10
                
                if (mode_1 == 0 || arg3:3.b != 2)
                    eax_23 = var_10_1
                label_6a4f46:
                    eax_28 = ReadFile((&data_75ca40)[eax_23][(arg1 & 0x1f) * 0x10], lpBuffer, 
                        nNumberOfBytesToRead, &var_18, nullptr)
                    
                    if (eax_28 != 0)
                        ecx_10 = var_18
                    
                    if (eax_28 != 0 && ecx_10 s>= 0 && ecx_10 u<= nNumberOfBytesToRead)
                        goto label_6a4f67
                    
                    eax_27 = GetLastError()
                    
                    if (eax_27 != ERROR_ACCESS_DENIED)
                        if (eax_27 != ERROR_BROKEN_PIPE)
                            goto label_6a4f13
                        
                        ebx_4 = 0
                        lpMultiByteStr_3 = lpMultiByteStr
                    else
                        *__errno() = 9
                        *___doserrno() = 5
                        ebx_4 = 0xffffffff
                        lpMultiByteStr_3 = lpMultiByteStr
                else if (ReadConsoleW((&data_75ca40)[var_10_1][(arg1 & 0x1f) * 0x10], lpBuffer, 
                        nNumberOfBytesToRead u>> 1, &var_18, nullptr) != 0)
                    ecx_10 = var_18 * 2
                    var_18 = ecx_10
                label_6a4f67:
                    int32_t edx_8 = var_10_1
                    edi += ecx_10
                    int32_t esi_1 = (&data_75ca40)[edx_8]
                    eax_28.b = *(esi_1 + ebx_3 + 4)
                    
                    if (eax_28.b s>= 0)
                        lpMultiByteStr_3 = lpMultiByteStr
                        ebx_4 = var_1c
                    else if (arg3:3.b == 2)
                        if (mode == 0)
                            if (ecx_10 != 0)
                                edx_8 = var_10_1
                            
                            if (ecx_10 == 0 || *lpMultiByteStr != 0xa)
                                eax_28.b &= 0xfb
                            else
                                eax_28.b |= 4
                            
                            *(esi_1 + ebx_3 + 4) = eax_28.b
                            char* lpMultiByteStr_6 = lpMultiByteStr
                            char* lpMultiByteStr_1 = lpMultiByteStr
                            void* mode_2 = &lpMultiByteStr[edi]
                            mode = mode_2
                            
                            if (lpMultiByteStr u< mode_2)
                                arg3 = 0x1a
                                char* lpMultiByteStr_8 = lpMultiByteStr
                                
                                do
                                    int16_t eax_68 = *lpMultiByteStr_8
                                    
                                    if (eax_68 == 0x1a)
                                        int32_t ecx_25 = (&data_75ca40)[edx_8]
                                        eax_68.b = *(ecx_25 + ebx_3 + 4)
                                        
                                        if ((eax_68.b & 0x40) != 0)
                                            *lpMultiByteStr_6 = *lpMultiByteStr_8
                                            lpMultiByteStr_6 = &lpMultiByteStr_6[2]
                                        else
                                            eax_68.b |= 2
                                            *(ecx_25 + ebx_3 + 4) = eax_68.b
                                        
                                        break
                                    
                                    if (eax_68 != 0xd)
                                        *lpMultiByteStr_6 = eax_68
                                        lpMultiByteStr_6 = &lpMultiByteStr_6[2]
                                        lpMultiByteStr_8 = &lpMultiByteStr_8[2]
                                    else if (lpMultiByteStr_8 u>= mode - 2)
                                        lpMultiByteStr_8 = &lpMultiByteStr_8[2]
                                        int16_t buffer
                                        BOOL eax_63
                                        int32_t ecx_22
                                        eax_63, ecx_22 = ReadFile(
                                            (&data_75ca40)[edx_8][(arg1 & 0x1f) * 0x10], &buffer, 
                                            2, &var_18, nullptr)
                                        
                                        if (eax_63 != 0)
                                            if (var_18 == 0)
                                                goto label_6a53d8
                                            
                                            goto label_6a5337
                                        
                                        enum WIN32_ERROR eax_64
                                        eax_64, ecx_22 = GetLastError()
                                        
                                        if (eax_64 != NO_ERROR || var_18 == 0)
                                        label_6a53d8:
                                            edx_8 = var_10_1
                                            *lpMultiByteStr_6 = 0xd
                                            lpMultiByteStr_6 = &lpMultiByteStr_6[2]
                                        else
                                        label_6a5337:
                                            edx_8 = var_10_1
                                            int32_t eax_65 = (&data_75ca40)[edx_8]
                                            int32_t var_3c_9
                                            
                                            if ((*(eax_65 + ebx_3 + 4) & 0x48) == 0)
                                                if (lpMultiByteStr_6 == lpMultiByteStr)
                                                    eax_65 = 0xa
                                                
                                                if (lpMultiByteStr_6 != lpMultiByteStr
                                                        || buffer != 0xa)
                                                    __lseeki64_nolock(eax_65, edx_8, ecx_22, arg1, 
                                                        0xfffffffe, 0xffffffff, FILE_CURRENT)
                                                    edx_8 = var_10_1
                                                    
                                                    if (buffer == 0xa)
                                                        var_3c_9 = 0xd
                                                    else
                                                        *lpMultiByteStr_6 = 0xd
                                                        lpMultiByteStr_6 = &lpMultiByteStr_6[2]
                                                else
                                                    *lpMultiByteStr_6 = 0xa
                                                    lpMultiByteStr_6 = &lpMultiByteStr_6[2]
                                                    var_3c_9 = 0xd
                                            else if (buffer != 0xa)
                                                *lpMultiByteStr_6 = 0xd
                                                lpMultiByteStr_6 = &lpMultiByteStr_6[2]
                                                *((&data_75ca40)[edx_8] + ebx_3 + 5) = buffer.b
                                                *((&data_75ca40)[edx_8] + ebx_3 + 0x25) = buffer:1.b
                                                *((&data_75ca40)[edx_8] + ebx_3 + 0x26) = 0xa
                                                var_3c_9 = 0xd
                                            else
                                                *lpMultiByteStr_6 = 0xa
                                                lpMultiByteStr_6 = &lpMultiByteStr_6[2]
                                    else
                                        edx_8 = var_10_1
                                        
                                        if (*(lpMultiByteStr_8 + 2) != 0xa)
                                            *lpMultiByteStr_6 = 0xd
                                            lpMultiByteStr_6 = &lpMultiByteStr_6[2]
                                            lpMultiByteStr_8 = &lpMultiByteStr_8[2]
                                        else
                                            lpMultiByteStr_8 = &lpMultiByteStr_8[4]
                                            *lpMultiByteStr_6 = 0xa
                                            lpMultiByteStr_6 = &lpMultiByteStr_6[2]
                                while (lpMultiByteStr_8 u< mode)
                            
                            lpMultiByteStr_3 = lpMultiByteStr
                            edi = lpMultiByteStr_6 - lpMultiByteStr_3
                        else
                            char* lpMultiByteStr_5 = lpMultiByteStr
                            int32_t eax_51
                            int32_t edx_11
                            edx_11:eax_51 = sx.q(edi)
                            char* lpMultiByteStr_9 = lpMultiByteStr_5
                            void* edx_12 = &lpMultiByteStr_5[(eax_51 - edx_11) s>> 1 << 1]
                            
                            if (lpMultiByteStr_5 u< edx_12)
                                arg3 = 0x1a
                                
                                do
                                    int16_t eax_54 = *lpMultiByteStr_9
                                    
                                    if (eax_54 == 0x1a)
                                        int32_t eax_58 = (&data_75ca40)[var_10_1]
                                        *(eax_58 + ebx_3 + 4) |= 2
                                        break
                                    
                                    if (eax_54 != 0xd)
                                        *lpMultiByteStr_5 = eax_54
                                        lpMultiByteStr_5 = &lpMultiByteStr_5[2]
                                        lpMultiByteStr_9 = &lpMultiByteStr_9[2]
                                    else if (lpMultiByteStr_9 u< edx_12 - 2)
                                        lpMultiByteStr_9 = &lpMultiByteStr_9[2]
                                        int16_t eax_56 = 0xa
                                        
                                        if (*lpMultiByteStr_9 != 0xa)
                                            eax_56 = 0xd
                                        
                                        *lpMultiByteStr_5 = eax_56
                                        lpMultiByteStr_5 = &lpMultiByteStr_5[2]
                                while (lpMultiByteStr_9 u< edx_12)
                            
                            lpMultiByteStr_3 = lpMultiByteStr
                            edi = (lpMultiByteStr_5 - lpMultiByteStr_3) & 0xfffffffe
                        
                        ebx_4 = var_1c
                    else
                        if (ecx_10 == 0 || *lpMultiByteStr != 0xa)
                            eax_28.b &= 0xfb
                        else
                            eax_28.b |= 4
                        
                        *(esi_1 + ebx_3 + 4) = eax_28.b
                        char* lpMultiByteStr_4 = lpMultiByteStr
                        mode = lpMultiByteStr
                        void* ecx_12 = &lpMultiByteStr[edi]
                        
                        if (lpMultiByteStr u< ecx_12)
                            char* lpMultiByteStr_7 = lpMultiByteStr
                            
                            do
                                char* eax_30
                                eax_30.b = *lpMultiByteStr_7
                                
                                if (eax_30.b == 0x1a)
                                    int32_t ecx_15 = (&data_75ca40)[edx_8]
                                    eax_30.b = *(ecx_15 + ebx_3 + 4)
                                    
                                    if ((eax_30.b & 0x40) != 0)
                                        eax_30.b = *lpMultiByteStr_7
                                        *lpMultiByteStr_4 = eax_30.b
                                        lpMultiByteStr_4 = &lpMultiByteStr_4[1]
                                    else
                                        eax_30.b |= 2
                                        *(ecx_15 + ebx_3 + 4) = eax_30.b
                                    
                                    break
                                
                                if (eax_30.b != 0xd)
                                    *lpMultiByteStr_4 = eax_30.b
                                    lpMultiByteStr_4 = &lpMultiByteStr_4[1]
                                    lpMultiByteStr_7 = &lpMultiByteStr_7[1]
                                else if (lpMultiByteStr_7 u>= ecx_12 - 1)
                                    lpMultiByteStr_7 = &lpMultiByteStr_7[1]
                                    uint8_t buffer_1
                                    int32_t ecx_13
                                    eax_30, ecx_13 = ReadFile(
                                        (&data_75ca40)[edx_8][(arg1 & 0x1f) * 0x10], &buffer_1, 1, 
                                        &var_18, nullptr)
                                    
                                    if (eax_30 != 0)
                                        if (var_18 == 0)
                                            goto label_6a509c
                                        
                                        goto label_6a5026
                                    
                                    eax_30, ecx_13 = GetLastError()
                                    
                                    if (eax_30 != 0 || var_18 == 0)
                                    label_6a509c:
                                        edx_8 = var_10_1
                                        *lpMultiByteStr_4 = 0xd
                                        lpMultiByteStr_4 = &lpMultiByteStr_4[1]
                                    else
                                    label_6a5026:
                                        edx_8 = var_10_1
                                        eax_30 = (&data_75ca40)[edx_8]
                                        
                                        if ((eax_30[ebx_3 + 4] & 0x48) == 0)
                                            if (lpMultiByteStr_4 == lpMultiByteStr)
                                                eax_30 = 0xa
                                            
                                            int32_t var_3c_6
                                            
                                            if (lpMultiByteStr_4 != lpMultiByteStr
                                                    || buffer_1 != 0xa)
                                                __lseeki64_nolock(eax_30, edx_8, ecx_13, arg1, 
                                                    0xffffffff, 0xffffffff, FILE_CURRENT)
                                                edx_8 = var_10_1
                                                
                                                if (buffer_1 == 0xa)
                                                    var_3c_6 = 0xd
                                                else
                                                    *lpMultiByteStr_4 = 0xd
                                                    lpMultiByteStr_4 = &lpMultiByteStr_4[1]
                                            else
                                                *lpMultiByteStr_4 = 0xa
                                                lpMultiByteStr_4 = &lpMultiByteStr_4[1]
                                                var_3c_6 = 0xd
                                        else
                                            int32_t var_3c_5 = 0xd
                                            
                                            if (buffer_1 != 0xa)
                                                *lpMultiByteStr_4 = 0xd
                                                lpMultiByteStr_4 = &lpMultiByteStr_4[1]
                                                eax_30.b = buffer_1
                                                *((&data_75ca40)[edx_8] + ebx_3 + 5) = eax_30.b
                                            else
                                                *lpMultiByteStr_4 = 0xa
                                                lpMultiByteStr_4 = &lpMultiByteStr_4[1]
                                else if (lpMultiByteStr_7[1] != 0xa)
                                    *lpMultiByteStr_4 = 0xd
                                    lpMultiByteStr_7 = &lpMultiByteStr_7[1]
                                    lpMultiByteStr_4 = &lpMultiByteStr_4[1]
                                else
                                    lpMultiByteStr_7 = &lpMultiByteStr_7[2]
                                    *lpMultiByteStr_4 = 0xa
                                    lpMultiByteStr_4 = &lpMultiByteStr_4[1]
                            while (lpMultiByteStr_7 u< ecx_12)
                        
                        lpMultiByteStr_3 = lpMultiByteStr
                        edi = lpMultiByteStr_4 - lpMultiByteStr_3
                        
                        if (arg3:3.b != 1 || edi == 0)
                            ebx_4 = var_1c
                        else
                            void* esi_2 = lpMultiByteStr_4 - 1
                            lpMultiByteStr_3.b = *esi_2
                            
                            if (lpMultiByteStr_3.b s< 0)
                                int32_t i = 1
                                
                                if (*(zx.d(lpMultiByteStr_3.b) + 0x74a670) == 0)
                                    while (i s<= 4)
                                        if (esi_2 u< lpMultiByteStr)
                                            break
                                        
                                        esi_2 -= 1
                                        i += 1
                                        
                                        if (*(zx.d(*esi_2) + 0x74a670) != 0)
                                            break
                                
                                int32_t eax_37 = sx.d(*(zx.d(*esi_2) + 0x74a670))
                                
                                if (eax_37 != 0)
                                    if (eax_37 + 1 != i)
                                        int32_t ecx_16 = (&data_75ca40)[var_10_1]
                                        
                                        if ((*(ecx_16 + ebx_3 + 4) & 0x48) == 0)
                                            int32_t eax_43
                                            int32_t edx_10
                                            edx_10:eax_43 = sx.q(neg.d(i))
                                            __lseeki64_nolock(eax_43, edx_10, ecx_16, arg1, eax_43, 
                                                edx_10, FILE_CURRENT)
                                        else
                                            int32_t eax_40
                                            eax_40.b = *esi_2
                                            void* esi_3 = esi_2 + 1
                                            *(ecx_16 + ebx_3 + 5) = eax_40.b
                                            int32_t eax_41 = var_10_1
                                            
                                            if (i s>= 2)
                                                int32_t ecx_17 = (&data_75ca40)[eax_41]
                                                eax_41.b = *esi_3
                                                esi_3 += 1
                                                *(ecx_17 + ebx_3 + 0x25) = eax_41.b
                                                eax_41 = var_10_1
                                            
                                            if (i == 3)
                                                int32_t ecx_18 = (&data_75ca40)[eax_41]
                                                eax_41.b = *esi_3
                                                esi_3 += 1
                                                *(ecx_18 + ebx_3 + 0x26) = eax_41.b
                                            
                                            esi_2 = esi_3 - i
                                    else
                                        esi_2 += i
                                    
                                    goto label_6a519e
                                
                                *__errno() = 0x2a
                                ebx_4 = 0xffffffff
                                lpMultiByteStr_3 = lpMultiByteStr
                            else
                                esi_2 += 1
                            label_6a519e:
                                int32_t cbMultiByte = esi_2 - lpMultiByteStr
                                edi = MultiByteToWideChar(0xfde9, 0, lpMultiByteStr, cbMultiByte, 
                                    arg2, nNumberOfBytesToRead_1 u>> 1)
                                
                                if (edi == 0)
                                    goto label_6a4f0c
                                
                                int32_t ecx_19
                                ecx_19.b = edi != cbMultiByte
                                edi *= 2
                                *((&data_75ca40)[var_10_1] + ebx_3 + 0x30) = ecx_19
                                lpMultiByteStr_3 = lpMultiByteStr
                                ebx_4 = var_1c
                else
                label_6a4f0c:
                    eax_27 = GetLastError()
                label_6a4f13:
                    __dosmaperr(eax_27)
                    ebx_4 = 0xffffffff
                    lpMultiByteStr_3 = lpMultiByteStr
                
                if (lpMultiByteStr_3 != arg2)
                    _free(lpMultiByteStr_3)
                
                if (ebx_4 == 0xfffffffe)
                    return edi
                
                return ebx_4
            
            if (((not.d(nNumberOfBytesToRead)).b & 1) == 0)
                goto label_6a4d85
            
            nNumberOfBytesToRead u>>= 1
            
            if (nNumberOfBytesToRead u< 4)
                nNumberOfBytesToRead = 4
            
            char* lpMultiByteStr_2
            int32_t edx_2
            lpMultiByteStr_2, edx_2 = sub_69e76b(nNumberOfBytesToRead)
            lpMultiByteStr = lpMultiByteStr_2
            
            if (lpMultiByteStr_2 != 0)
                int32_t eax_15
                int32_t edx_3
                eax_15, edx_3 = __lseeki64_nolock(lpMultiByteStr_2, edx_2, nNumberOfBytesToRead, 
                    arg1, 0, 0, FILE_CURRENT)
                int32_t ecx_5 = (&data_75ca40)[var_10_1]
                *(ecx_5 + ebx_3 + 0x28) = eax_15
                eax_16 = lpMultiByteStr
                *(ecx_5 + ebx_3 + 0x2c) = edx_3
                ecx_2 = var_10_1
                goto label_6a4e14
            
            *__errno() = 0xc
            *___doserrno() = 8
        else
        label_6a4d85:
            *___doserrno() = 0
            *__errno() = 0x16
            __invalid_parameter_noinfo()
    else
        *___doserrno() = 0
        *__errno() = 0x16
        __invalid_parameter_noinfo()
else
    *___doserrno() = 0
    *__errno() = 9

return 0xffffffff
