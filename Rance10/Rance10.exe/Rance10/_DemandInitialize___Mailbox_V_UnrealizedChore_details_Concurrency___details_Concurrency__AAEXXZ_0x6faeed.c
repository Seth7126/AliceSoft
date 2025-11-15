// 函数: ?DemandInitialize@?$Mailbox@V_UnrealizedChore@details@Concurrency@@@details@Concurrency@@AAEXXZ
// 地址: 0x6faeed
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0x14
int32_t (* var_c)(void* arg1) = sub_74afb6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
void* const var_38 = &data_6faef9
int32_t var_8_2 = 0xffffffff
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1[4] == 0)
    result = nullptr
    
    if (0 == arg1[4])
        arg1[4] = 1
    else
        result = arg1[4]
    
    if (result == 0)
        int32_t* eax = sub_6e810c(0x2c)
        int32_t* var_14_1 = eax
        int32_t var_8 = 0
        
        if (eax == 0)
            result = nullptr
        else
            result = Concurrency::details::Mailbox<class Concurrency::details::_UnrealizedChore>::Segment::Segment(
                eax, *arg1, &arg1[1], arg1[3], 0)
        
        int32_t var_8_1 = 0xffffffff
        arg1[4] = result
        arg1[5] = result

if (arg1[5] == 0)
    int32_t var_1c_1 = 0
    int32_t (* var_18_1)() = sub_6eb70e
    
    do
        void var_24
        result = Concurrency::details::_SpinWait<1>::_SpinOnce(&var_24)
    while (arg1[5] == 0)

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6faf62
return result
