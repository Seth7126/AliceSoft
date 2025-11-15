// 函数: sub_697a70
// 地址: 0x697a70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_748036
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
int32_t __saved_ebp
int32_t (* var_28)(void* arg1) = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct Concurrency::scheduler_interface::Concurrency::details::_DefaultPPLTaskScheduler::VTable* 
    const arg_4

if (arg_4 == 0xffffffff)
    arg_4 = arg2
    int32_t var_8_1 = 0
    sub_69a7f0(arg2)
    int32_t eax_3 = sub_697ce0(&arg_4)
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

sub_6971d0()
int32_t* var_1c
std::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >(
    &var_1c, &data_7fd534)
int32_t var_8_2 = 1
int32_t* ecx_5 = var_1c
int32_t (* var_30)(void* arg1) = sub_697c60
int32_t (** esp_1)(void* arg1) = &var_30
int32_t eax_6

if (ecx_5 == 0)
    arg_4 = &Concurrency::details::_DefaultPPLTaskScheduler::`vftable'{for `Concurrency::scheduler_interface'}
    eax_6 = sub_697190(var_30, arg2)
    esp_1 = &var_28
else
    eax_6 = (**ecx_5)()

int32_t var_8_3 = 2
int32_t* var_18

if (var_18 != 0)
    bool cond:1_1 = var_18[1] != 1
    eax_6 = var_18[1]
    var_18[1] -= 1
    
    if (not(cond:1_1))
        eax_6 = (**var_18)()
        int32_t edi = var_18[2]
        var_18[2] -= 1
        
        if (edi == 1)
            eax_6 = (*(*var_18 + 4))()

fsbase->NtTib.ExceptionList = ExceptionList
*esp_1
esp_1[1]
esp_1[2]
return eax_6
