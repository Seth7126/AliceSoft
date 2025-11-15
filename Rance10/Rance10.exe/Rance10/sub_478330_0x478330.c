// 函数: sub_478330
// 地址: 0x478330
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72e310
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = data_7fcb88
struct _EXCEPTION_REGISTRATION_RECORD** result

if (ecx == 0)
    result.b = 0
else
    result = (**ecx)(0x75fbfc)
    
    if (result == 0)
        result.b = 0
    else
        result = (*result)->__offset(0x38).d(eax_2)
        
        if (result == 0)
            result.b = 0
        else
            struct win32only::CBrowseFolderDlg::VTable* const var_30 =
                &win32only::CBrowseFolderDlg::`vftable'
            int32_t var_18_1 = 0xf
            int32_t var_1c_1 = 0
            char var_2c = 0
            int32_t var_8_1 = 0
            void* var_48
            sub_403360(&var_48, (**arg4)())
            var_8_1.b = 1
            var_8_1.b = 0
            void** ebx
            ebx.b = sub_6ccaa0(&var_30, result, arg3, arg2, &var_48) == 0
            struct _EXCEPTION_REGISTRATION_RECORD** var_34
            
            if (var_34 u>= 0x10)
                sub_403160(var_48, var_34 + 1, 1)
            
            if (ebx.b == 0)
                char* edx_1 = &var_2c
                
                if (var_18_1 u>= 0x10)
                    edx_1 = var_2c.d
                
                (*(*arg4 + 4))(edx_1)
                ebx.b = 1
            else
                ebx.b = 0
            
            var_30 = &win32only::CBrowseFolderDlg::`vftable'
            
            if (var_18_1 u>= 0x10)
                sub_403160(var_2c.d, var_18_1 + 1, 1)
            
            result.b = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
