// 函数: sub_6f293d
// 地址: 0x6f293d
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (data_7fc348 != 0)
    return 

int32_t __saved_ebp_1 = 4
int32_t (* var_c)(void* arg1) = sub_74aa03
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
void* const var_28 = &data_6f7647
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &data_7fc318
Concurrency::details::_NonReentrantLock::_Acquire(&data_7fc318)
int32_t var_8 = 0

if (data_7fc348 == 0)
    int32_t* eax_1 = sub_6e810c(0x18)
    int32_t* eax_2
    
    if (eax_1 == 0)
        eax_2 = nullptr
    else
        eax_2 = sub_6f7344(eax_1)
    
    data_7fc348 = eax_2
    sub_6f758b(eax_2, sub_6f7410, 0x753214, 7, &data_7e13cc, &data_7fc350)

data_7fc318 = 0
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6f76a9
