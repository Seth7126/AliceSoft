// 函数: ___set_fpsr_sse2
// 地址: 0x69f4ad
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_ebp_1 = 8
int32_t var_8 = 0x747e70
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_69e8b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x747e70 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_2c = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_2c
void* const var_30 = &data_69f4b9
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (data_75c958 s>= 1)
    result = arg1
    
    if ((result.b & 0x40) == 0 || data_74a550 == 0)
        result &= 0xffffffbf
        arg1 = result
    else
        int32_t var_8_1 = 0
        int32_t var_8_2 = 0xfffffffe

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_69f522
return result
