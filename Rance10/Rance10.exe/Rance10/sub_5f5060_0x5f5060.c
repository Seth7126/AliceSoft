// 函数: sub_5f5060
// 地址: 0x5f5060
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_741e20
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_4 = (*(**arg1 + 0x14))(arg2)
int32_t result

if (eax_4 != 0)
    arg1[1]
    void* var_5c
    char* esi_1 = sub_603290(&var_5c)
    int32_t var_8_2 = 1
    char var_44
    int32_t* ecx_6 = sub_403360(&var_44, (**eax_4)(eax_2))
    
    if (*(esi_1 + 0x14) u>= 0x10)
        esi_1 = *esi_1
    
    if (ecx_6[5] u>= 0x10)
        ecx_6 = *ecx_6
    
    int32_t edi_2 = esi_1[0x10].d
    int32_t ebx_2 = ecx_6[4]
    int32_t eax_11 = edi_2
    
    if (ebx_2 u< edi_2)
        eax_11 = ebx_2
    
    int32_t result_1 = sub_406ac0(eax_11, esi_1, ecx_6, eax_11)
    
    if (result_1 == 0)
        bool c_1 = edi_2 u< ebx_2
        
        if (edi_2 == ebx_2 || c_1)
            result_1 = neg.d(sbb.d(result_1, result_1, c_1))
        else
            result_1 = 0xffffffff
    
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44.d, var_30 + 1, 1)
    
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    var_44 = 0
    int32_t var_48
    
    if (var_48 u>= 0x10)
        sub_403160(var_5c, var_48 + 1, 1)
    
    result = result_1
else
    int32_t var_18_1 = 0xf
    int32_t* var_1c_1 = eax_4
    char var_2c = eax_4.b
    sub_403490(&var_2c, 0x797e58, 0x1c)
    int32_t* var_8_1 = eax_4
    sub_6c52e0(&var_2c)
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
