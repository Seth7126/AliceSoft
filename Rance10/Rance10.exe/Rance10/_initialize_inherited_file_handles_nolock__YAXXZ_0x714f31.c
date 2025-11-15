// 函数: ?initialize_inherited_file_handles_nolock@@YAXXZ
// 地址: 0x714f31
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

STARTUPINFOW startupInfo
BYTE* lpReserved2 = GetStartupInfoW(&startupInfo)

if (startupInfo.cbReserved2 != 0)
    lpReserved2 = startupInfo.lpReserved2
    
    if (lpReserved2 != 0)
        BYTE* lpReserved2_2 = *lpReserved2
        void* ebx_1 = &lpReserved2[4]
        BYTE* lpReserved2_1 = ebx_1 + lpReserved2_2
        
        if (lpReserved2_2 s>= 0x2000)
            lpReserved2_2 = 0x2000
        
        ___acrt_lowio_ensure_fh_exists(lpReserved2_2)
        lpReserved2 = data_7fc918
        
        if (lpReserved2_2 s> lpReserved2)
            lpReserved2_2 = lpReserved2
        
        int32_t edi
        int32_t var_58_2 = edi
        int32_t edi_1 = 0
        
        if (lpReserved2_2 != 0)
            lpReserved2 = lpReserved2_1
            
            do
                HANDLE hFile = *lpReserved2
                
                if (hFile != 0xffffffff && hFile != 0xfffffffe)
                    void* edx_1
                    edx_1.b = *ebx_1
                    
                    if ((edx_1.b & 1) != 0)
                        if ((edx_1.b & 8) != 0)
                        label_714fc0:
                            edx_1 = (edi_1 & 0x3f) * 0x30 + (&data_7fc718)[edi_1 s>> 6]
                            *(edx_1 + 0x18) = *lpReserved2_1
                            int32_t eax_5
                            eax_5.b = *ebx_1
                            *(edx_1 + 0x28) = eax_5.b
                        else
                            enum FILE_TYPE eax_1
                            eax_1, edx_1 = GetFileType(hFile)
                            
                            if (eax_1 != FILE_TYPE_UNKNOWN)
                                goto label_714fc0
                        
                        lpReserved2 = lpReserved2_1
                
                edi_1 += 1
                lpReserved2 = &lpReserved2[4]
                ebx_1 += 1
                lpReserved2_1 = lpReserved2
            while (edi_1 != lpReserved2_2)

return lpReserved2
