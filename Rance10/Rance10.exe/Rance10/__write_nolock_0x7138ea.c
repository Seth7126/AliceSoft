// 函数: __write_nolock
// 地址: 0x7138ea
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
enum CONSOLE_MODE nNumberOfBytesToWrite_1 = arg3
enum CONSOLE_MODE nNumberOfBytesToWrite = nNumberOfBytesToWrite_1
int32_t edi
int32_t var_3c = edi
int32_t result

if (nNumberOfBytesToWrite_1 == 0)
    result = 0
else if (arg2 != 0)
    int32_t ebx_2 = arg1 s>> 6
    int32_t edx_1 = (arg1 & 0x3f) * 0x30
    int32_t var_20_1 = ebx_2
    int32_t eax_6 = (&data_7fc718)[ebx_2]
    int32_t var_30 = eax_6
    int32_t var_1c_1 = edx_1
    ebx_2.b = *(eax_6 + edx_1 + 0x29)
    
    if (ebx_2.b != 2 && ebx_2.b != 1)
        goto label_713994
    
    if (((not.d(nNumberOfBytesToWrite_1)).b & 1) != 0)
        eax_6 = var_30
    label_713994:
        
        if ((*(eax_6 + edx_1 + 0x28) & 0x20) != 0)
            eax_6, nNumberOfBytesToWrite_1, edx_1 = __lseeki64_nolock(arg1, 0, 0, FILE_END)
        
        enum WIN32_ERROR var_18
        int32_t* eax_12
        int32_t* esi_1
        
        if (write_requires_double_translation_nolock(eax_6, edx_1, nNumberOfBytesToWrite_1, arg1)
                == 0)
            int32_t ecx_1 = (&data_7fc718)[var_20_1]
            
            if ((*(ecx_1 + var_1c_1 + 0x28) & 0x80) == 0)
                HANDLE hFile = *(ecx_1 + var_1c_1 + 0x18)
                var_18 = NO_ERROR
                uint32_t numberOfBytesWritten = 0
                int32_t var_10_1 = 0
                
                if (WriteFile(hFile, arg2, nNumberOfBytesToWrite, &numberOfBytesWritten, nullptr)
                        == 0)
                    var_18 = GetLastError()
                
                esi_1 = &var_18
                goto label_713a75
            
            int32_t eax_15 = sx.d(ebx_2.b)
            
            if (eax_15 == 0)
                eax_12 = write_text_ansi_nolock(&var_18, arg1, arg2, nNumberOfBytesToWrite)
                goto label_7139cf
            
            if (eax_15 == 1)
                eax_12 = write_text_utf8_nolock(&var_18, arg1, arg2, nNumberOfBytesToWrite)
                goto label_7139cf
            
            if (eax_15 != 2)
                goto label_713aba
            
            eax_12 = write_text_utf16le_nolock(&var_18, arg1, arg2, nNumberOfBytesToWrite)
            goto label_7139cf
        
        if (ebx_2.b == 0)
            eax_12 = write_double_translated_ansi_nolock(&var_18, arg1, arg2, nNumberOfBytesToWrite)
        label_7139cf:
            esi_1 = eax_12
        label_713a75:
            int32_t var_2c_1 = *esi_1
            int32_t var_28
            int32_t* edi_2 = &var_28
            void* esi_2 = &esi_1[1]
            *edi_2 = *esi_2
            edi_2[1] = *(esi_2 + 4)
            int32_t eax_21 = var_28
            int32_t var_24
            
            if (eax_21 != 0)
                result = eax_21 - var_24
            else
                if (var_2c_1 == 0)
                    goto label_713aba
                
                if (var_2c_1 != 5)
                    ___acrt_errno_map_os_error(var_2c_1)
                else
                    *__errno() = 9
                    *___doserrno() = 5
                
                result = 0xffffffff
        else
            ebx_2.b -= 1
            
            if (ebx_2.b u<= 1)
                eax_12 =
                    write_double_translated_unicode_nolock(&var_18, arg2, nNumberOfBytesToWrite)
                goto label_7139cf
            
        label_713aba:
            
            if ((*((&data_7fc718)[var_20_1] + var_1c_1 + 0x28) & 0x40) == 0 || *arg2 != 0x1a)
                *__errno() = 0x1c
                *___doserrno() = 0
                result = 0xffffffff
            else
                result = 0
    else
        *___doserrno() = 0
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        result = 0xffffffff
else
    int32_t* eax_2 = ___doserrno()
    *eax_2 &= arg2
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 0xffffffff

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
