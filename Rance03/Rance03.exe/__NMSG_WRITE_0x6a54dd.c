// 函数: __NMSG_WRITE
// 地址: 0x6a54dd
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int16_t* result = __GET_RTERRMSG(arg1)
int16_t* result_1 = result

if (result_1 != 0)
    int32_t eax_2 = __set_error_mode(3)
    
    if (eax_2 != 1)
        result = __set_error_mode(3)
    
    if (eax_2 == 1 || (result == 0 && data_75cb48 == 1))
        result = GetStdHandle(STD_ERROR_HANDLE)
        int16_t* hFile = result
        
        if (hFile != 0 && hFile != 0xffffffff)
            char buffer[0x1f3]
            
            for (int32_t i = 0; i u< 0x1f4; i += 1)
                result.b = result_1[i].b
                buffer[i] = result.b
                
                if (result_1[i] == 0)
                    break
            
            char var_9_1 = 0
            uint32_t numberOfBytesWritten
            result = WriteFile(hFile, &buffer, _strlen(&buffer), &numberOfBytesWritten, nullptr)
    else if (arg1 != 0xfc)
        int32_t eax_3 = _wcscpy_s(0x75cb50, 0x314, u"Runtime Error!\n\nProgram: ")
        
        if (eax_3 != 0)
        label_6a5693:
            int32_t var_220_3
            __builtin_memset(&var_220_3, 0, 0x14)
            __invoke_watson()
            noreturn
        
        data_75cd8a = eax_3.w
        uint32_t eax_4 = GetModuleFileNameW(nullptr, &data_75cb82, 0x104)
        int32_t eax_5
        
        if (eax_4 == 0)
            eax_5 = _wcscpy_s(&data_75cb82, 0x2fb, u"<program name unknown>")
        
        if (eax_4 == 0 && eax_5 != 0)
            goto label_6a5693
        
        int32_t eax_7 = _wcslen(&data_75cb82) + 1
        int32_t eax_12
        
        if (eax_7 u> 0x3c)
            void* ecx_4 = (_wcslen(&data_75cb82) << 1) + &data_75cb0c
            eax_12 = _wcsncpy_s(ecx_4, 0x2fb - ((ecx_4 - &data_75cb82) s>> 1), 0x6d64f4, 3)
        
        if (eax_7 u> 0x3c && eax_12 != 0)
            goto label_6a5693
        
        if (_wcscat_s(0x75cb50, 0x314, 0x6d64fc) != 0)
            goto label_6a5693
        
        if (_wcscat_s(0x75cb50, 0x314, result_1) != 0)
            goto label_6a5693
        
        result = sub_6aa7b1(0x75cb50, u"Microsoft Visual C++ Runtime Library", 0x12010)

sub_69a5bc(eax_1 ^ &__saved_ebp)
return result
