// 函数: sub_63c8b0
// 地址: 0x63c8b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_745f78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = data_7fcbbc
int32_t* result = sub_63c080(esi)

if (result.b != 0)
    int32_t var_30 = 0
    int32_t* var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_403590(&var_2c, arg1, 0, 0xffffffff)
    int32_t var_8_1 = 0
    int32_t* edi_1 = *(esi + 0x38)
    int32_t* eax_3 = sub_63cb90(edi_1, edi_1[1], &var_30)
    int32_t eax_4 = *(esi + 0x3c)
    
    if (0x71c71c6 - eax_4 u< 1)
        sub_6d0927("list<T> too long")
        noreturn
    
    *(esi + 0x3c) = eax_4 + 1
    edi_1[1] = eax_3
    *eax_3[1] = eax_3
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
