// 函数: sub_4183e0
// 地址: 0x4183e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728468
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x1c) != 0)
    int32_t* ecx = *(arg1 + 0x14)
    
    if (ecx != 0)
        result = (**ecx)(eax_2)
        struct _EXCEPTION_REGISTRATION_RECORD** hWnd = result
        
        if (result != 0 && arg2 s>= 0)
            result = (*(**(*(arg1 + 0x18) + 4) + 0x1c))()
            
            if (arg2 s< result)
                int32_t* var_2c
                sub_40cf70(*(arg1 + 0x18), &var_2c, arg2)
                int32_t var_8_1 = 0
                int32_t var_1c
                
                if (var_1c != 0)
                    struct win32only::CFileMapping::VTable* var_6c
                    sub_6cdd20(&var_6c)
                    var_8_1.b = 1
                    void var_44
                    sub_403360(&var_44, "Sys4xOpenSourceFile")
                    var_8_1.b = 2
                    int32_t ebx
                    ebx.b = sub_6cde00(&var_6c, &var_44, var_1c + 1) == 0
                    sub_403320(&var_44)
                    
                    if (ebx.b == 0)
                        int32_t* eax_7 = &var_2c
                        int32_t var_18
                        
                        if (var_18 u>= 0x10)
                            eax_7 = var_2c
                        
                        char* var_64
                        sub_700660(var_64, eax_7, var_1c + 1)
                        sub_6cdf60(&var_6c)
                        SendMessageA(hWnd, 0x401, arg3, 0)
                    
                    sub_6cddb0(&var_6c)
                
                result = sub_403320(&var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
