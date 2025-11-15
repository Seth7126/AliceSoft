// 函数: ?common_exit@@YAXHW4_crt_exit_cleanup_mode@@W4_crt_exit_return_mode@@@Z
// 地址: 0x706797
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0xc
int32_t var_8 = 0x7de458
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = __except_handler4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_5 = 0x7de458 ^ __security_cookie_1
int32_t __saved_ebp
int32_t eax_3 = __security_cookie_1 ^ &__saved_ebp
int32_t var_30 = eax_3
int32_t* var_1c = &var_30
void* const var_34_4 = &data_7067a3
int32_t var_8_6 = 0xfffffffe
int32_t var_c = var_8_5
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg3 == 0)
    HMODULE eax
    HMODULE ecx_1
    int32_t edx_1
    eax, ecx_1, edx_1 = is_managed_app()
    
    if (eax.b != 0)
        try_cor_exit_process(eax, edx_1, ecx_1, arg1)

___acrt_lock(2)
int32_t var_8_1 = 0

if (data_7fc470 == 0)
    data_7fc468
    data_7fc468 = 1
    int32_t var_8_2 = 1
    int32_t var_34_2
    
    if (arg2 == 0)
        uint32_t __security_cookie_2 = __security_cookie
        int32_t var_34_1 = 0x20
        int32_t* ecx_4 = data_7fc46c
        
        if (ecx_4 != __security_cookie_2)
            ecx_4 = ror.d(__security_cookie_2 ^ ecx_4, __security_cookie_2.b & 0x1f)(0, 0, 0)
        
        var_34_2 = 0x7fc6e0
        __execute_onexit_table(ecx_4)
    else if (arg2 == 1)
        var_34_2 = 0x7fc6ec
        __execute_onexit_table(&data_7fc468)
    int32_t var_8_3 = 0
    
    if (arg2 == 0)
        __initterm(0x74e6d0, 0x74e6e4)
    
    __initterm(0x74e6e8, 0x74e6ec)
    
    if (arg3 == 0)
        data_7fc470 = 1

int32_t var_8_4 = 0xfffffffe
int32_t result = $LN18()

if (arg3 == 0)
    exit_or_terminate_process(arg1)
    noreturn

@__security_check_cookie@4(eax_3 ^ &__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_7068af
return result
