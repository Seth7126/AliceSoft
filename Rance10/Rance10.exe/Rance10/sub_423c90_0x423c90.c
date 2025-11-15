// 函数: sub_423c90
// 地址: 0x423c90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$?_wcstombs_l_helper@@YAIPADPB_WIPAU__crt_locale_pointers@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = data_7fcb88
int32_t* result

if (esi != 0)
    result = (**esi)(0x75d548)
    
    if (result == 0)
        result.b = 0
    else
        result = (**result)(eax_2)
    
    bool cond:0_1 = *(arg1 + 0x10) != 0
    *(arg1 + 0xc) = result.b
    
    if (not(cond:0_1) && result.b != 0)
        result = (**esi)(0x75d538)
        *(arg1 + 0x10) = result
else
    int32_t* result_1 = 0xf
    int32_t* var_1c_1 = esi
    char var_2c = 0
    int32_t* var_8_1 = esi
    var_8_1.b = 1
    void* var_44
    sub_45aae0(sub_4175e0(sub_403490(&var_2c, 0x75d56c, 0x2c), &var_2c, &var_44, U"\n"))
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44, var_30 + 1, 1)
    
    result = result_1
    
    if (result u>= 0x10)
        result = sub_403160(var_2c.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
