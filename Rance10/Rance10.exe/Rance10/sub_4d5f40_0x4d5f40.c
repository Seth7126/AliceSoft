// 函数: sub_4d5f40
// 地址: 0x4d5f40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
arg3[1] = *arg3
int32_t* ecx = *(arg1 + 0x38)
int32_t* edi_1

if (ecx != 0)
    int32_t* eax_4 = (*(*ecx + 0x10))(3)
    char var_2c
    int32_t* ecx_2 = sub_4175e0(eax_4, arg2, &var_2c, 0x7639a4)
    int32_t var_8_1 = 0
    
    if (ecx_2[5] u>= 0x10)
        ecx_2 = *ecx_2
    
    int32_t var_8_2 = 0xffffffff
    edi_1 = (*(*eax_4 + 0xc))(ecx_2)
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c.d, var_18 + 1, 1)
    
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0

int32_t* result

if (ecx == 0 || edi_1 == 0)
    result.b = 0
else
    int32_t eax_8 = (*(*edi_1 + 0x18))(eax_2)
    int32_t eax_9 = (*(*edi_1 + 0x14))()
    char* eax_10 = (*(*edi_1 + 0x18))()
    int32_t var_50_2 = 0.d
    void* var_38 = nullptr
    int32_t var_34_1 = 0
    int32_t var_30_1 = 0
    sub_405b10(&var_38, eax_10, eax_8 + eax_9)
    sub_45e830(arg3, &var_38)
    void* ecx_11 = var_38
    
    if (ecx_11 != 0)
        sub_403160(ecx_11, var_30_1 - ecx_11, 1)
    
    (*(*edi_1 + 4))()
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
