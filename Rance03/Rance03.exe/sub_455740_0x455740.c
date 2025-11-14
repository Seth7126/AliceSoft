// 函数: sub_455740
// 地址: 0x455740
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b7a98
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_3c
int32_t eax_2 = __security_cookie ^ &var_3c
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (data_75d534 != 0)
    char* var_50_1 = arg1
    result = sub_6203f0()
    
    if (result != 0)
        result = (*result)->Next("|.Pd")
        
        if (result != 0)
            result = (*result)->Next(eax_4)
            struct _EXCEPTION_REGISTRATION_RECORD** hWnd = result
            
            if (hWnd != 0)
                char* ecx_2 = arg1
                void* edx_3 = &ecx_2[1]
                
                do
                    result.b = *ecx_2
                    ecx_2 = &ecx_2[1]
                while (result.b != 0)
                
                struct win32only::CFileMapping::VTable* var_38 = &win32only::CFileMapping::`vftable'
                int32_t var_34_1 = 0
                int32_t* var_30_1 = nullptr
                int32_t var_2c_1 = 0
                int32_t var_4 = 0
                int32_t var_28
                sub_401f60(&var_28, "Sys4xVMOutput")
                bool eax_5 = sub_697e00(&var_38, &var_28, ecx_2 - edx_3 + 1) == 0
                int32_t var_14
                
                if (var_14 u>= 0x10)
                    j__free(var_28)
                
                if (eax_5 == 0)
                    sub_69d850(var_30_1, arg1, ecx_2 - edx_3 + 1)
                    SendMessageA(hWnd, 0x400, 0, 0)
                
                result = sub_697dc0(&var_38)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_3c)
return result
