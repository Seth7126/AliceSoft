// 函数: sub_49f6a0
// 地址: 0x49f6a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_730d08
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg2 - 0x8a00

if (result u<= 3)
    result = (***(arg1 + 0x2b8))(0x760ebc)
    
    if (result != 0)
        result = (**result)(eax_2)
        
        if (result.b != 0)
            int32_t var_18_1 = 0xf
            int32_t var_1c_1 = 0
            char var_2c = 0
            int32_t var_8_1 = 0
            
            if (arg2 != 0x8a01 && arg2 != 0x8a03)
                goto label_49f79f
            
            struct win32only::CFileMapping::VTable* var_6c
            sub_6cdd20(&var_6c)
            var_8_1.b = 1
            void var_44
            sub_403360(&var_44, "AliceRunUserMessage")
            var_8_1.b = 2
            var_8_1.b = 1
            int32_t ebx
            ebx.b = sub_6cde90(&var_6c, &var_44) == 0
            sub_403320(&var_44)
            
            if (ebx.b == 0)
                char* var_64
                sub_409670(&var_2c, sub_403360(&var_44, var_64))
                sub_403320(&var_44)
                var_8_1.b = 0
                sub_6cddb0(&var_6c)
            label_49f79f:
                int32_t eax_8 = data_7fcbbc
                
                if (eax_8 != 0)
                    sub_63c7e0(8)
                    eax_8 = data_7fcbbc
                    
                    if (eax_8 != 0)
                        sub_63c7e0(arg2)
                        eax_8 = data_7fcbbc
                        
                        if (eax_8 != 0)
                            sub_63c7e0(arg3)
                            eax_8 = data_7fcbbc
                            
                            if (eax_8 != 0)
                                sub_63c7e0(arg4)
                                eax_8 = data_7fcbbc
                
                if ((arg2 == 0x8a01 || arg2 == 0x8a03) && eax_8 != 0)
                    sub_63c8b0(&var_2c)
            else
                sub_6cddb0(&var_6c)
            
            result = sub_403320(&var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
