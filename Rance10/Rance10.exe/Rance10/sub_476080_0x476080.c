// 函数: sub_476080
// 地址: 0x476080
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72cd30
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t ebx
int32_t var_48 = ebx
int32_t esi
int32_t var_4c = esi
int32_t edi
int32_t var_50 = edi
int32_t var_54 = eax_2
int32_t* esp = &var_54
fsbase->NtTib.ExceptionList = &ExceptionList
char* result = arg2

if (arg1 != 0)
    char* result_1 = result
    void* ecx
    int32_t eax_3 = sub_475cf0(ecx, result_1)
    result_1 = arg3
    
    if (eax_3 != 0)
        void* var_44
        sub_403360(&var_44, result_1)
        int32_t var_8_1 = 0
        result_1 = &var_44
        char var_2c
        char* result_3 = sub_46dfd0(eax_3, &var_2c, result_1)
        var_8_1.b = 1
        
        if (*(result_3 + 0x14) u>= 0x10)
            result_3 = *result_3
        
        int32_t eax_6 = *arg1
        result_1 = result_3
        esp = &result_1
        (*(eax_6 + 4))(result_1)
        int32_t var_18
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c.d, var_18 + 1, 1)
            esp = &result_1
        
        char* result_2
        result = result_2
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
        
        if (result u>= 0x10)
            result = sub_403160(var_44, &result[1], 1)
            esp = &result_1
    else
        result = (*(*arg1 + 4))()
        esp = &var_54

fsbase->NtTib.ExceptionList = ExceptionList
esp[1]
esp[2]
esp[3]
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
