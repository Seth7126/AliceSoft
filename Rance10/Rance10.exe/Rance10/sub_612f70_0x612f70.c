// 函数: sub_612f70
// 地址: 0x612f70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7437b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_94 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = arg1[0x7f]
int32_t esi = *(arg1[0x7e] + (ecx << 2) - 4)
arg1[0x7f] = ecx - 1
int32_t edx = *(arg1[0x7e] + ((ecx - 1) << 2) - 4)
int32_t var_78 = edx
arg1[0x7f] = ecx - 2
void* eax_7 = sub_621720(&arg1[0x52], edx)
int32_t result

if (eax_7 == 0 || esi u>= *(eax_7 + 0x14) u>> 2)
    int32_t result_2 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_403490(&var_2c, 0x76b798, 0x22)
    int32_t var_8_2 = 0
    var_8_2.b = 1
    char var_5c
    sub_612230(arg1, "REFREF", sub_417810(&var_78, &var_2c, &var_5c, &var_78, esi))
    int32_t var_48
    
    if (var_48 u>= 0x10)
        sub_403160(var_5c.d, var_48 + 1, 1)
    
    result = result_2
    int32_t var_48_1 = 0xf
    int32_t var_4c_1 = 0
    var_5c = 0
    
    if (result u>= 0x10)
        int32_t var_98_9 = 1
        result = sub_403160(var_2c.d, result + 1, 1)
else
    int32_t eax_9 = *(*(eax_7 + 0x10) + (esi << 2))
    void* eax_10 = sub_621720(&arg1[0x52], edx)
    
    if (eax_10 == 0 || esi + 1 u>= *(eax_10 + 0x14) u>> 2)
        void* var_74
        sub_403360(&var_74, 0x76b76c)
        int32_t var_8_1 = 2
        var_8_1.b = 3
        char var_44
        sub_612230(arg1, "REFREF", sub_417810(&var_78, &var_74, &var_44, &var_78, esi + 1))
        int32_t var_30
        
        if (var_30 u>= 0x10)
            sub_403160(var_44.d, var_30 + 1, 1)
        
        int32_t result_1
        result = result_1
        int32_t var_30_1 = 0xf
        int32_t var_34_1 = 0
        var_44 = 0
        
        if (result u>= 0x10)
            int32_t var_98_6 = 1
            result = sub_403160(var_74, result + 1, 1)
    else
        int32_t esi_2 = *(*(eax_10 + 0x10) + ((esi + 1) << 2))
        sub_405d30(&arg1[0x7d], eax_9)
        result = sub_405d30(&arg1[0x7d], esi_2)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
