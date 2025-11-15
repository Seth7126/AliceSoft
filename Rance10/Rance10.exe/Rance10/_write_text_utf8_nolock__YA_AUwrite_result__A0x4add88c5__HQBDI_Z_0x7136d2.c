// 函数: ?write_text_utf8_nolock@@YA?AUwrite_result@?A0x4add88c5@@HQBDI@Z
// 地址: 0x7136d2
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

__alloca_probe(0x1418)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
int32_t ebx = 0
int32_t* result = arg1
int32_t edi
int32_t var_10 = edi
HANDLE hFile = *((&data_7fc718)[arg2 s>> 6] + (arg2 & 0x3f) * 0x30 + 0x18)
int16_t* edi_1 = arg3
void* eax_6 = arg4 + arg3
*result = 0
result[1] = 0
result[2] = 0

if (arg3 u< eax_6)
    while (true)
        wchar16 wideCharStr[0x342]
        wchar16 (* eax_7)[0x342] = &wideCharStr
        
        while (edi_1 u< eax_6)
            uint32_t ecx_4 = zx.d(*edi_1)
            edi_1 = &edi_1[1]
            
            if (ecx_4 == 0xa)
                *eax_7 = 0xd
                eax_7 = &(*eax_7)[1]
            
            *eax_7 = ecx_4.w
            eax_7 = &(*eax_7)[1]
            int32_t __saved_esi
            
            if (eax_7 u>= &__saved_esi)
                break
        
        void multiByteStr
        int32_t eax_10 = WideCharToMultiByte(0xfde9, 0, &wideCharStr, (eax_7 - &wideCharStr) s>> 1, 
            &multiByteStr, 0xd55, nullptr, nullptr)
        result = arg1
        int32_t var_141c_1 = eax_10
        
        if (eax_10 == 0)
        label_7137ea:
            *result = GetLastError()
            break
        
        do
            uint32_t numberOfBytesWritten
            
            if (WriteFile(hFile, &multiByteStr + ebx, eax_10 - ebx, &numberOfBytesWritten, nullptr)
                    == 0)
                goto label_7137ea
            
            ebx += numberOfBytesWritten
            eax_10 = var_141c_1
        while (ebx u< eax_10)
        
        result[1] = edi_1 - arg3
        
        if (edi_1 u>= eax_6)
            break
        
        ebx = 0

int32_t entry_ebx
@__security_check_cookie@4(entry_ebx ^ &__saved_ebp)
return result
