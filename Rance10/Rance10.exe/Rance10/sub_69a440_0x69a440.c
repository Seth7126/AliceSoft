// 函数: sub_69a440
// 地址: 0x69a440
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_74851c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edi = 0
int32_t eax_4 = __Mtx_lock(arg1 + 0x14)

if (eax_4 != 0)
    std::_Throw_C_error(eax_4)

int32_t var_8_1 = 0
int32_t result

if (arg3 == 0)
    if (*(arg1 + 4) != 3 && *(arg1 + 4) != 4)
        if (*(arg1 + 4) != 2)
            goto label_69a4ae
        
        if (arg2 != 0)
            goto label_69a4b0
        
        goto label_69a4d6
    
label_69a4d6:
    int32_t var_8_2 = 1
    __Mtx_unlock(arg1 + 0x14)
    result.b = 0
else
    if (*(arg1 + 4) == 4)
        goto label_69a4d6
    
    sub_57f5d0(arg1 + 0xc, arg4)
label_69a4ae:
    
    if (arg2 == 0)
        bool cond:1_1 = *(arg1 + 4) == 1
        *(arg1 + 4) = 2
        
        if (cond:1_1)
            edi = 2
    else
    label_69a4b0:
        *(arg1 + 4) = 4
        edi = 1
    
    int32_t var_8_3 = 2
    int32_t ecx_5
    result, ecx_5 = __Mtx_unlock(arg1 + 0x14)
    int32_t var_8_4 = 0xffffffff
    
    if (edi == 1)
        int32_t var_58_5 = ecx_5
        sub_6977e0(arg1 + 0x50)
        
        if (*(arg1 + 0x44) != 0)
            struct std::_Func_base<void>::std::_Func_impl<class <lambda_0456396a71e3abd88ede77bdd2823d8e>, class std::allocator<int>, void>::VTable
                * const var_3c = &std::_Func_impl<class <lambda_0456396a71e3abd88ede77bdd2823d8e>, class std::allocator<int>, void>::`vftable'{for `std::_Func_base<void>'}
            void* var_38_1 = arg1
            struct std::_Func_base<void>::std::_Func_impl<class <lambda_0456396a71e3abd88ede77bdd2823d8e>, class std::allocator<int>, void>::VTable
                * const* var_18_1 = &var_3c
            int32_t var_8_5 = 3
            sub_697d50(&var_3c)
            _Init_atexit::~_Init_atexit(&var_3c)
        
        result.b = 1
    else if (edi != 2 || *(arg1 + 0xfc) == edi - 2)
        result.b = 1
    else
        int32_t* ecx_6 = *(arg1 + 0xfc)
        
        if (ecx_6 == 0)
            sub_6d090a()
            noreturn
        
        (*(*ecx_6 + 8))(eax_2)
        result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
