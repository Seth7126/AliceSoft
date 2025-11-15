// 函数: sub_565bb0
// 地址: 0x565bb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73be7c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* result

if (*(arg1 + 0x18) == 0)
    int32_t* ecx_1 = (*(**(arg1 + 0xc) + 8))(eax_2)
    
    if (ecx_1 != 0)
        int32_t* eax_5 = (**ecx_1)(0x767d2c)
        int32_t* ecx_2 = data_7fcbd4
        int32_t edx_1
        
        if (ecx_2 != 0)
            (**ecx_2)()
            edx_1 = data_7fcbd4
        else
            edx_1 = 0
        
        int32_t* var_60
        int32_t* eax_7 = sub_432270(&var_60, edx_1)
        int32_t* var_54 = nullptr
        SRWLOCK var_50
        __builtin_memset(&var_50, 0, 4)
        sub_4323a0(&var_54, eax_7)
        int32_t var_8_1 = 0
        int32_t var_5c
        __seterrormode(&var_5c)
        var_8_1.b = 1
        int32_t* ecx_5 = var_60
        
        if (ecx_5 != 0)
            var_60 = nullptr
            (*(*ecx_5 + 4))()
        
        var_8_1.b = 0
        ___crtSetUnhandledExceptionFilter(&var_5c)
        __Smtx_lock_shared(&var_50)
        int32_t ebx
        ebx.b = var_54 != 0
        __Smtx_unlock_shared(&var_50)
        
        if (ebx.b == 0)
            ebx.b = 0
        else
            int32_t eax_10 = (*(**(arg1 + 0xc) + 0xc))(0x767cec)
            int32_t var_64 = eax_10
            
            if (eax_10 == 0)
                ebx.b = 0
            else
                int32_t eax_11 = data_7fcb5c
                int32_t var_68 = eax_11
                
                if (eax_11 == 0)
                    ebx.b = 0
                else if ((*(**(arg1 + 0xc) + 0xc))(0x767cfc) == 0)
                    ebx.b = 0
                else
                    struct filesystem::CFilePath::VTable* var_48 = &filesystem::CFilePath::`vftable'
                    int32_t var_30_1 = 0xf
                    int32_t var_34_1 = 0
                    char var_44 = 0
                    var_8_1.b = 2
                    sub_67e790(&var_48)
                    void var_2c
                    sub_403360(&var_2c, "3D")
                    var_8_1.b = 3
                    sub_67eaf0(&var_48)
                    sub_4055a0(&var_44, &var_2c, 0, 0xffffffff)
                    var_8_1.b = 2
                    sub_403320(&var_2c)
                    sub_403360(&var_2c, "3D.afa")
                    var_8_1.b = 4
                    int32_t eax_14 = sub_42e170(8, &var_2c)
                    var_8_1.b = 2
                    var_5c = eax_14
                    sub_403320(&var_2c)
                    
                    if (eax_14 == 0)
                        sub_403360(&var_2c, "3DAFA")
                        var_8_1.b = 5
                        sub_6c52e0(&var_2c)
                        var_8_1.b = 2
                        sub_403320(&var_2c)
                    
                    char var_49
                    
                    if (eax_5 == 0)
                        var_49 = 0
                    else
                        var_49 = (**eax_5)()
                    
                    int32_t var_6c = sub_431af0(&var_54)
                    char* var_58
                    sub_568780(&var_6c, &var_5c, &var_58, &var_6c, &var_68, &var_64, &var_49)
                    var_8_1.b = 6
                    
                    if (sub_5caff0(var_58, &var_44) != 0)
                        sub_568540(arg1 + 0x18, &var_58)
                        ebx.b = 1
                    else
                        ebx.b = 0
                    
                    sub_568520(&var_58)
                    sub_67e530(&var_48)
        
        __seterrormode(&var_50)
        int32_t var_8_2 = 7
        int32_t* ecx_25 = var_54
        
        if (ecx_25 != 0)
            var_54 = nullptr
            (*(*ecx_25 + 4))()
        
        ___crtSetUnhandledExceptionFilter(&var_50)
        result.b = ebx.b
    else
        result.b = 0
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
