// 函数: sub_6133c0
// 地址: 0x6133c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_743860
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_8c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = arg1[0x7f]
int32_t edi = *(arg1[0x7e] + (ecx << 2) - 4)
arg1[0x7f] = ecx - 1
int32_t ebx = *(arg1[0x7e] + ((ecx - 1) << 2) - 4)
arg1[0x7f] = ecx - 2
int32_t eax_7 = arg1[0x7e]
int32_t* esi = eax_7 + ((ecx - 3) << 2)
void* eax_9 = sub_621720(&arg1[0x52], *(eax_7 + ((ecx - 3) << 2)))
int32_t result

if (eax_9 == 0 || ebx u>= *(eax_9 + 0x14) u>> 2)
    if (sub_621650(&arg1[0x52], *esi) == 0)
        void* var_74
        sub_403360(&var_74, 0x76bc88)
        int32_t var_8_2 = 2
        int32_t eax_16 = sub_621fa0(&arg1[0x52], *esi)
        var_8_2.b = 3
        char var_44
        sub_612230(arg1, "ASSIGN", sub_4b0f20(eax_16, &var_74, &var_44, esi, ebx, edi, eax_16))
        int32_t var_30
        
        if (var_30 u>= 0x10)
            sub_403160(var_44.d, var_30 + 1, 1)
        
        int32_t result_1
        result = result_1
        int32_t var_30_1 = 0xf
        int32_t var_34_1 = 0
        var_44 = 0
        
        if (result u>= 0x10)
            int32_t var_90_9 = 1
            result = sub_403160(var_74, result + 1, 1)
    else
        void* var_5c
        sub_403360(&var_5c, 0x76bd10)
        int32_t var_8_1 = 0
        int32_t eax_11 = sub_621fa0(&arg1[0x52], *esi)
        var_8_1.b = 1
        char var_2c
        sub_612230(arg1, "ASSIGN", sub_4b0f20(eax_11, &var_5c, &var_2c, esi, ebx, edi, eax_11))
        int32_t var_18
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c.d, var_18 + 1, 1)
        
        int32_t result_2
        result = result_2
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
        
        if (result u>= 0x10)
            int32_t var_90_5 = 1
            result = sub_403160(var_5c, result + 1, 1)
else
    result = *(eax_9 + 0x10)
    *(result + (ebx << 2)) = edi

*esi = edi
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
