// 函数: sub_4a9b40
// 地址: 0x4a9b40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72d800
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = *(arg1 + 0x7c)

if (result == 0xffffffff)
    goto label_4a9c00

if (sub_5661d0(data_7fd4cc, result) != 0)
    if (sub_5660a0(data_7fd4cc, *(arg1 + 0x7c)).b != 0)
        *(arg1 + 0x7c) = 0xffffffff
    label_4a9c00:
        int32_t* ecx_7 = *(arg1 + 0xc)
        
        if (ecx_7 != 0)
            int32_t esi_1 = ecx_7[1]
            ecx_7[1] -= 1
            (**ecx_7)(esi_1 - 1)
            *(arg1 + 0xc) = 0
            *(arg1 + 0x20) = 1
        
        result.b = 1
    else
        void var_44
        sub_403360(&var_44, 0x761690)
        int32_t var_8_2 = 1
        sub_45aae0(&var_44)
        sub_403320(&var_44)
        result.b = 0
else
    void* var_2c
    sub_403360(&var_2c, 0x7616c4)
    int32_t var_8_1 = 0
    sub_45aae0(&var_2c)
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
