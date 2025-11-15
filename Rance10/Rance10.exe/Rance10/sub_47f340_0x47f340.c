// 函数: sub_47f340
// 地址: 0x47f340
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729e78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_1 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, 0x75ce8b, nullptr)
int32_t var_8_1 = 0
void* esi = data_7fcb68

if (*(esi + 4) != 0)
    (*(**(esi + 4) + 0x18))(eax_2)
else
    int32_t* ecx_1 = data_7fcb88
    
    if (ecx_1 != 0)
        int32_t eax_4 = (**ecx_1)(0x75ff30)
        *(esi + 4) = eax_4
        
        if (eax_4 != 0)
            (*(**(esi + 4) + 0x18))(eax_2)

int32_t result = result_1

if (result u>= 0x10)
    result = sub_403160(var_2c.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
