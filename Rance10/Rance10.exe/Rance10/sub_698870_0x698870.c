// 函数: sub_698870
// 地址: 0x698870
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7482b5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_50 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_54 = 1
int32_t result

if (arg2[2] == 0)
    result = Mod1::AddSymbols2(arg1, arg2, arg2[5])
else
    if (arg2[5] != 0xffffffff)
        arg2[5] = 0x10
    
    struct std::_Func_base<void>::std::_Func_impl<class <lambda_7c33b2c4310ad8c6be497d7a2a561bb8>, class std::allocator<int>, void>::VTable
        * const var_3c = &std::_Func_impl<class <lambda_7c33b2c4310ad8c6be497d7a2a561bb8>, class std::allocator<int>, void>::`vftable'{for `std::_Func_base<void>'}
    int32_t* var_38_1 = arg2
    struct std::_Func_base<void>::std::_Func_impl<class <lambda_7c33b2c4310ad8c6be497d7a2a561bb8>, class std::allocator<int>, void>::VTable
        * const* var_18_1 = &var_3c
    int32_t var_8_1 = 0
    int32_t edi_1 = arg2[5]
    struct Concurrency::scheduler_interface::Concurrency::details::_DefaultPPLTaskScheduler::VTable*
         eax_3 = sub_6e810c(0x28)
    struct Concurrency::scheduler_interface::Concurrency::details::_DefaultPPLTaskScheduler::VTable*
         var_40_1 = eax_3
    struct Concurrency::scheduler_interface::Concurrency::details::_DefaultPPLTaskScheduler::VTable*
         var_44_1 = eax_3
    struct Concurrency::scheduler_interface::Concurrency::details::_DefaultPPLTaskScheduler::VTable*
         esi_1 = 0
    var_8_1.b = 2
    struct std::_Func_base<void>::std::_Func_impl<class <lambda_7c33b2c4310ad8c6be497d7a2a561bb8>, class std::allocator<int>, void>::VTable
        * const* ecx_1 = var_18_1
    
    if (ecx_1 != 0)
        int32_t eax_5
        eax_5, ecx_1 = (*ecx_1)->__offset(0x0).d(esi_1)
        esi_1 = eax_5
    
    int32_t var_54_2 = edi_1
    var_8_1.b = 0
    result = sub_697a70(ecx_1, esi_1)
    int32_t var_8_2 = 3
    
    if (var_18_1 != 0)
        result = (*var_18_1)->__offset(0x10).d(var_18_1 != &var_3c)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
