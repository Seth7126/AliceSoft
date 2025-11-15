// 函数: ?_Task_scheduler_callback@?A0xfa789d47@details@Concurrency@@YGXPAU_TP_CALLBACK_INSTANCE@@PAXPAU_TP_WORK@@@Z
// 地址: 0x6979d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_747fc8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg3 == 0xffffffff)
    int32_t* esi = arg2
    arg2 = esi
    int32_t var_8_1 = 0
    (*(*esi + 4))(eax_2)
    int32_t eax_5 = (**esi)(1)
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_5

int32_t* ecx_4 = *(arg1 + 0x60)

if (ecx_4 != 0)
    int32_t eax_7 = (**ecx_4)(
        boost::exception_detail::error_info_injector<class std::domain_error>::~error_info_injector<class std::domain_error>, 
        arg2, eax_2)
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_7

arg3 = &Concurrency::details::_DefaultPPLTaskScheduler::`vftable'{for `Concurrency::scheduler_interface'}
int32_t eax_8 = sub_697190(
    boost::exception_detail::error_info_injector<class std::domain_error>::~error_info_injector<class std::domain_error>, 
    arg2)
fsbase->NtTib.ExceptionList = ExceptionList
return eax_8
