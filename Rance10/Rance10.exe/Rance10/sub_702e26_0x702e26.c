// 函数: sub_702e26
// 地址: 0x702e26
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0x18
int32_t var_8 = 0x7de2d8
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = __except_handler4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x7de2d8 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_3c = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_3c
void* const var_40_3 = &data_702e32
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
void* result

if (arg1 != 0)
    void* result_1 = nullptr
    int32_t var_8_1 = 0
    void* eax = FindCompleteObject(arg1)
    void* eax_1 = *(*arg1 - 4)
    int32_t edi_2 = arg1 - arg2 - eax
    char ecx_3 = (*(*(eax_1 + 0x10) + 4)).b
    int32_t* eax_2
    
    if ((ecx_3 & 1) == 0)
        eax_2 = FindSITargetTypeInstance(eax_1, arg3, arg4)
    else if ((ecx_3 & 2) != 0)
        eax_2 = sub_702c13(eax, eax_1, arg3, edi_2, arg4)
    else
        eax_2 = sub_702a03(eax, eax_1, arg3, edi_2, arg4)
    
    if (eax_2 == 0)
        int32_t var_20_1 = 0
        
        if (arg5 != 0)
            void var_2c
            std::bad_typeid::__construct_from_string_literal(&var_2c, "Bad dynamic_cast!")
            sub_70021b(&var_2c, 0x7de924)
            noreturn
    else
        result_1 = eax + PMDtoOffset(eax, &eax_2[2])
        void* result_2 = result_1
    
    int32_t var_8_2 = 0xfffffffe
    result = result_1
else
    result = nullptr

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_702e40
return result
