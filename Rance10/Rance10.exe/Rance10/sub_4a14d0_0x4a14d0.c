// 函数: sub_4a14d0
// 地址: 0x4a14d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729e78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg1[3]

if (*result != 0)
    BOOL eax_3 = IsIconic(*result)
    
    if (eax_3 != 0)
        result = OpenIcon(*arg1[3])
    
    if (eax_3 == 0 || result != 0)
        char eax_7 = (*(*arg1 + 0x74))(eax_2)
        
        if (eax_7 != 0)
            result = (*(*arg1 + 0x7c))()
        
        if (eax_7 == 0 || result.b != 0)
            ShowWindow(*arg1[3], SW_RESTORE)
            
            if (Concurrency::details::ThreadScheduler::CreateVirtualProcessor(1) == 2)
                void var_2c
                sub_403360(&var_2c, 0x761250)
                int32_t var_8_1 = 0
                sub_6c52e0(&var_2c)
                sub_403320(&var_2c)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
