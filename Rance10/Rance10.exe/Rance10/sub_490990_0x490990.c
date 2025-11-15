// 函数: sub_490990
// 地址: 0x490990
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72f750
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_34 = arg3
int32_t var_4c = 0

if (arg2 == 0 || arg4 == 0)
    *arg3 = 0
    arg3[1] = 0
    arg3[2] = 0
else
    int32_t var_40 = 0
    int32_t var_3c_1 = 0
    int32_t var_38_1 = 0
    int32_t var_8_1 = 0
    int32_t* eax_5 = (*(*arg2 + 0x14))(eax_2)
    var_34 = eax_5
    
    if (eax_5 != 0)
        if (eax_5 u> 0x3fffffff)
            sub_6d0927("vector<T> too long")
            noreturn
        
        sub_404670(&var_40, eax_5)
        eax_5 = var_34
    
    int32_t esi_1 = 0
    
    if (eax_5 s> 0)
        int32_t* ebx_1 = var_34
        
        do
            struct IString::common::CStringWrapper::VTable* var_30 =
                &common::CStringWrapper::`vftable'{for `IString'}
            int32_t var_18_1 = 0xf
            int32_t var_1c_1 = 0
            char var_2c = 0
            var_8_1.b = 1
            char eax_8 = (*(*arg2 + 0x1c))(&var_30, esi_1)
            
            if (eax_8 != 0)
                char* ecx_3 = &var_2c
                
                if (var_18_1 u>= 0x10)
                    ecx_3 = var_2c.d
                
                int32_t* eax_13 = sub_48f8a0((*(*arg2 + 0x24))(ecx_3), arg4)
                var_34 = eax_13
                
                if (eax_13 != 0)
                    sub_42ca30(&var_40, &var_34)
                
                var_8_1.b = 0
                sub_404c60(&var_30)
            else
                var_8_1.b = eax_8
                var_30 = &common::CStringWrapper::`vftable'{for `IString'}
                
                if (var_18_1 u>= 0x10)
                    sub_403160(var_2c.d, var_18_1 + 1, 1)
            
            esi_1 += 1
        while (esi_1 s< ebx_1)
    
    *arg3 = var_40
    arg3[1] = var_3c_1
    arg3[2] = var_38_1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg3
