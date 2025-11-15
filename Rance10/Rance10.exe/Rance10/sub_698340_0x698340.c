// 函数: sub_698340
// 地址: 0x698340
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_748158
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_40 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_40
void* var_18 = arg1

if (sub_48c840() == 0)
    void* var_44_2 = arg1
    void* ecx = arg1 + 0x50
    
    if (*(arg1 + 8) != 0)
        sub_697880(ecx)
    else
        int32_t var_8_1 = 0
        int32_t ecx_1 = sub_697880(ecx)
        int32_t var_8_2 = 0xffffffff
        
        if (*(arg1 + 9) != 0)
            int32_t var_44_3 = ecx_1
            sub_697880(arg1 + 0x50)
else if (*(arg1 + 4) != 3 && *(arg1 + 4) != 4)
    struct std::exception::VTable* const var_30 = &std::exception::`vftable'
    char const* const var_1c = "Illegal to wait on a task in a Windows Runtime STA"
    var_18.b = 1
    int64_t var_2c = 0
    ___std_exception_copy(&var_1c, &var_2c)
    var_30 = &Concurrency::invalid_operation::`vftable'{for `std::exception'}
    sub_70021b(&var_30, &data_7dea00)
    noreturn

int32_t* ecx_2 = *(arg1 + 0xc)

if (ecx_2 != 0)
    sub_697fa0(ecx_2)
    noreturn

int32_t eax_4
eax_4.b = *(arg1 + 4) == 4
fsbase->NtTib.ExceptionList = ExceptionList
return eax_4 + 1
