// 函数: sub_69bfa0
// 地址: 0x69bfa0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_748858
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t var_18

if (*(arg1 + 0x75) != 0)
    sub_69b040()
    int32_t* var_14 = &data_7fd53c
    var_18 = 3
    std::_Throw_future_error(&var_18)
    noreturn

int32_t arg_c
__ExceptionPtrAssign(&arg1[3], &arg_c)

if (Microsoft::WRL::operator!=<struct IRestrictedErrorInfo>(&arg_c) == 0)
    int32_t var_28_2 = arg3
    __ExceptionPtrAssign(&arg1[3], 
        Concurrency::details::x97f05e80::_Task_scheduler_main_block::operator[]::_Task_scheduler_main_block::~_Task_scheduler_main_block(
            &var_18))
    __ExceptionPtrDestroy(&var_18)

(*(*arg1 + 0x14))(arg2, arg3)
int32_t var_8_2 = 0xffffffff
void* result = __ExceptionPtrDestroy(&arg_c)
fsbase->NtTib.ExceptionList = ExceptionList
return result
