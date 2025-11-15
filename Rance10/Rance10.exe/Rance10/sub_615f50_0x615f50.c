// 函数: sub_615f50
// 地址: 0x615f50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_743d10
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_6c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_1 = 0xf
int32_t var_4c = 0
char var_5c = 0
int32_t var_8_1 = 0
int32_t* eax_3 = arg1[0x74]
int32_t ecx_1 = *eax_3 - 2
arg1[0x74] = &eax_3[1]
char const* const var_70_1
char var_44
char var_2c
char* ecx_3

switch (ecx_1)
    case 0
        int32_t ecx_2 = arg1[0x7f]
        *(arg1[0x7e] + (ecx_2 << 2) - 4)
        arg1[0x7f] = ecx_2 - 1
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
        var_8_1.b = 1
        var_70_1 = "S_MOD"
    label_616046:
        
        if (sub_619a10(arg1, &var_2c, var_70_1) != 0)
            sub_61f360(arg1, &var_5c)
            ecx_3 = &var_2c
            goto label_61614f
        
        sub_403320(&var_2c)
    case 1
        int32_t ecx_7 = arg1[0x7f]
        void* xmm0_1 = *(arg1[0x7e] + (ecx_7 << 2) - 4)
        arg1[0x7f] = ecx_7 - 1
        int32_t var_18_3 = 0xf
        int32_t var_1c_3 = 0
        var_2c = 0
        var_8_1.b = 3
        
        if (sub_619a10(arg1, &var_2c, "S_MOD") != 0)
            sub_61fa50(xmm0_1)
            ecx_3 = &var_2c
        label_61614f:
            var_8_1.b = 0
            sub_403320(ecx_3)
            char* var_70_4 = &var_5c
            int32_t eax_16 = sub_621930(&arg1[0x52])
            
            if (eax_16 s>= 0)
                sub_405d30(&arg1[0x7d], eax_16)
            else
                sub_403360(&var_44, 0x76c268)
                var_8_1.b = 7
                sub_612230(arg1, "S_MOD", &var_44)
                sub_403320(&var_44)
        else
            sub_403320(&var_2c)
    case 2
        int32_t var_30_1 = 0xf
        int32_t var_34_1 = 0
        var_44 = 0
        var_8_1.b = 4
        
        if (sub_619a10(arg1, &var_44, "S_MOD") == 0)
            sub_403320(&var_44)
        else
            int32_t var_18_4 = 0xf
            int32_t var_1c_4 = 0
            var_2c = 0
            var_8_1.b = 5
            
            if (sub_619a10(arg1, &var_2c, "S_MOD") != 0)
                sub_620070(&var_5c)
                sub_403320(&var_2c)
                ecx_3 = &var_44
                goto label_61614f
            
            sub_403320(&var_2c)
            sub_403320(&var_44)
    case 0x2e
        int32_t ecx_4 = arg1[0x7f]
        *(arg1[0x7e] + (ecx_4 << 2) - 4)
        arg1[0x7f] = ecx_4 - 1
        int32_t var_18_2 = 0xf
        int32_t var_1c_2 = 0
        var_2c = 0
        var_8_1.b = 2
        var_70_1 = "S_MOD"
        goto label_616046
    default
        int32_t var_30_2 = 0xf
        int32_t var_34_2 = 0
        var_44 = 0
        sub_403490(&var_44, 0x76c28c, 0x16)
        var_8_1.b = 6
        sub_612230(arg1, "S_MOD", &var_44)
        
        if (var_30_2 u>= 0x10)
            sub_403160(var_44.d, var_30_2 + 1, 1)

int32_t result = result_1

if (result u>= 0x10)
    result = sub_403160(var_5c.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
