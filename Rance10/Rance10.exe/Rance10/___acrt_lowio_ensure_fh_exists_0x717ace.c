// 函数: ___acrt_lowio_ensure_fh_exists
// 地址: 0x717ace
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0x14
int32_t var_8 = 0x7de760
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = __except_handler4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x7de760 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_38 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_38
void* const var_3c_2 = &data_717ada
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (neg.d(sbb.d(&ExceptionList, &ExceptionList, arg1 u< 0x2000)) != 0)
    result = 0
    int32_t var_20_1 = 0
    ___acrt_lock(7)
    int32_t var_8_1 = 0
    int32_t edi_1 = 0
    int32_t eax_4 = data_7fc918
    
    while (true)
        int32_t var_24_1 = edi_1
        
        if (arg1 s< eax_4)
            break
        
        if ((&data_7fc718)[edi_1] == 0)
            void* eax_5 = ___acrt_lowio_create_handle_array()
            (&data_7fc718)[edi_1] = eax_5
            
            if (eax_5 == 0)
                int32_t var_3c_1 = 0xc
                result = 0xc
                int32_t var_20_2 = 0xc
                break
            
            eax_4 = data_7fc918 + 0x40
            data_7fc918 = eax_4
        
        edi_1 += 1
    
    int32_t var_8_2 = 0xfffffffe
    $LN13()
else
    int32_t var_3c = 9
    result = 9
    *__errno() = 9
    __invalid_parameter_noinfo()

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_717afd
return result
