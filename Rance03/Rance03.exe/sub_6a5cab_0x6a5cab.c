// 函数: sub_6a5cab
// 地址: 0x6a5cab
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_ebp_1 = 0xc
int32_t var_8 = 0x748020
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_69e8b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x748020 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_1 = &data_6a5cb7
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0
uint32_t* eax = __getptd()
int32_t* result

if ((eax[0x1c] & data_74aec0) == 0 || eax[0x1b] == 0)
    __lock(0xd)
    int32_t var_8_1 = 0
    result = eax[0x1a]
    int32_t* result_1 = result
    
    if (result != data_74ab9c)
        if (result != 0)
            bool cond:0_1 = *result != 1
            *result
            *result -= 1
            
            if (not(cond:0_1) && result != 0x74a978)
                _free(result)
        
        eax[0x1a] = data_74ab9c
        result = data_74ab9c
        int32_t* result_2 = result
        *result
        *result += 1
    
    int32_t var_8_2 = 0xfffffffe
    sub_6a5d48()
else
    result = eax[0x1a]

if (result == 0)
    __amsg_exit(0x20)
    noreturn

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6a5ce9
return result
