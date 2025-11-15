// 函数: sub_41ad80
// 地址: 0x41ad80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728874
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = data_7fcb88
void* const result

if (ecx != 0)
    int32_t* eax_4 = (**ecx)(0x75d138)
    
    if (eax_4 != 0)
        void* result_1 = &data_7fd550
        
        if (data_7fd54c s> *(*fsbase->ThreadLocalStoragePointer + 4))
            __Init_thread_header(&data_7fd54c)
            
            if (data_7fd54c == 0xffffffff)
                int32_t var_8_1 = 0
                void var_2c
                char* eax_9 = sub_403360(&var_2c, (*(*eax_4 + 8))(eax_2))
                var_8_1.b = 1
                sub_4176f0(eax_9.b, eax_9, &data_7fd550, "LOG")
                sub_403320(&var_2c)
                _atexit(sub_74b1c0)
                sub_6e85d6(&data_7fd54c)
        
        if (data_7fd564 u>= 0x10)
            result_1 = data_7fd550
        
        result = result_1
    else
        result = &data_75ccf7
else
    result = &data_75ccf3

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
