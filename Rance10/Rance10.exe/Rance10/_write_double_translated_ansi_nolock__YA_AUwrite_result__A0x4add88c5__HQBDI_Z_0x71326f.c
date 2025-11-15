// 函数: ?write_double_translated_ansi_nolock@@YA?AUwrite_result@?A0x4add88c5@@HQBDI@Z
// 地址: 0x71326f
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t ecx_1 = arg2 s>> 6
int32_t ebx = (arg2 & 0x3f) * 0x30
int32_t edi
int32_t var_48 = edi
char* edi_1 = arg3
char* var_34 = edi_1
HANDLE hFile = *((&data_7fc718)[ecx_1] + ebx + 0x18)
void* eax_6 = arg4 + edi_1
uint32_t CodePage = GetConsoleCP()
*arg1 = 0
arg1[1] = 0
arg1[2] = 0

if (edi_1 u< eax_6)
    while (true)
        void* ecx_2
        ecx_2:1.b = *edi_1
        wchar16 wideCharStr = 0
        char var_1f_1 = ecx_2:1.b
        int32_t edx_1 = (&data_7fc718)[ecx_1]
        ecx_2.b = *(edx_1 + ebx + 0x2d)
        char* var_50_1
        int32_t var_4c_1
        
        if ((ecx_2.b & 4) == 0)
            if ((*(___pctype_func(ecx_2) + (zx.d(*edi_1) << 1)) & 0x8000) == 0)
                var_4c_1 = 1
                var_50_1 = edi_1
                goto label_713347
            
            if (edi_1 u>= eax_6)
                int32_t eax_8
                eax_8.b = *edi_1
                *((&data_7fc718)[ecx_1] + ebx + 0x2e) = eax_8.b
                int32_t eax_17 = (&data_7fc718)[ecx_1]
                *(eax_17 + ebx + 0x2d) |= 4
                arg1[1] += 1
                break
            
            if (_mbtowc(&wideCharStr, edi_1, 2) == 0xffffffff)
                break
            
            edi_1 = &edi_1[1]
        else
            int32_t eax_7
            eax_7.b = *(edx_1 + ebx + 0x2e)
            ecx_2.b &= 0xfb
            char var_10 = eax_7.b
            var_4c_1 = 2
            char var_f_1 = ecx_2:1.b
            *(edx_1 + ebx + 0x2d) = ecx_2.b
            var_50_1 = &var_10
        label_713347:
            
            if (_mbtowc(&wideCharStr, var_50_1, var_4c_1) == 0xffffffff)
                break
        edi_1 = &edi_1[1]
        uint8_t var_18
        int32_t nNumberOfBytesToWrite =
            WideCharToMultiByte(CodePage, 0, &wideCharStr, 1, &var_18, 5, nullptr, nullptr)
        
        if (nNumberOfBytesToWrite == 0)
            break
        
        uint32_t numberOfBytesWritten
        BOOL eax_11
        eax_11, ecx_2 =
            WriteFile(hFile, &var_18, nNumberOfBytesToWrite, &numberOfBytesWritten, nullptr)
        
        if (eax_11 != 0)
            arg1[1] = arg1[2] - var_34 + edi_1
            
            if (numberOfBytesWritten u< nNumberOfBytesToWrite)
                break
            
            if (var_1f_1 != 0xa)
            label_7133db:
                
                if (edi_1 u>= eax_6)
                    break
                
                continue
            else
                int16_t buffer = 0xd
                BOOL eax_16
                eax_16, ecx_2 = WriteFile(hFile, &buffer, 1, &numberOfBytesWritten, nullptr)
                
                if (eax_16 != 0)
                    if (numberOfBytesWritten u< 1)
                        break
                    
                    arg1[2] += 1
                    arg1[1] += 1
                    goto label_7133db
        
        *arg1 = GetLastError()
        break

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return arg1
