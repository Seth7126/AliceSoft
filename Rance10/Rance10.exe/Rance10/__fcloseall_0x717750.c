// 函数: __fcloseall
// 地址: 0x717750
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0x10
int32_t var_8 = 0x7de740
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = __except_handler4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x7de740 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_34 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_34
void* const var_38_4 = &data_71775c
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = 0
___acrt_lock(8)
int32_t var_8_1 = 0
int32_t var_38 = 3
int32_t esi = 3

while (true)
    int32_t var_24_1 = esi
    
    if (esi == data_7fc474)
        break
    
    void* eax_1 = *(data_7fc478 + (esi << 2))
    
    if (eax_1 != 0)
        if (((*(eax_1 + 0xc) u>> 0xd).b & 1) != 0
                && _fclose(*(data_7fc478 + (esi << 2))) != 0xffffffff)
            result += 1
        
        DeleteCriticalSection(*(data_7fc478 + (esi << 2)) + 0x20)
        __free_base(*(data_7fc478 + (esi << 2)))
        *(data_7fc478 + (esi << 2)) = 0
    
    esi += 1

int32_t var_8_2 = 0xfffffffe
$LN10()
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_7177e6
return result
