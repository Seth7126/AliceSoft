// 函数: sub_4d4200
// 地址: 0x4d4200
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6bf4ce
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void** var_9c
int32_t eax_2 = __security_cookie ^ &var_9c
int32_t __saved_edi
int32_t var_ac = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 4) != *(arg1 + 8))
    var_9c = arg2
    int32_t var_98_1 = arg3
    int32_t var_68_1 = 0xf
    int32_t var_6c_1 = 0
    char var_7c = 0
    int32_t var_c_1 = 0
    int32_t* i = *(arg1 + 4)
    char var_94
    int32_t var_80
    int32_t var_34
    int32_t var_20
    
    for (int32_t edi_1 = *(arg1 + 8); i != edi_1; i = &i[1])
        int32_t var_b0_1 = *i
        var_c_1.b = 1
        char* eax_8 = sub_4d4530(&var_94, sub_4bd060(arg4, &var_34))
        var_c_1.b = 2
        char var_4c
        char* eax_9 = sub_421670(eax_8.b, 0x6e1870, &var_4c, eax_8)
        var_c_1.b = 3
        var_c_1.b = 4
        char var_64
        sub_403110(&var_7c, sub_410a80(eax_9.b, eax_9, &var_64, "", "), nullptr, 0xffffffff)
        int32_t var_50
        
        if (var_50 u>= 0x10)
            j__free(var_64.d)
        
        var_50 = 0xf
        int32_t var_54_1 = 0
        var_64 = 0
        int32_t var_38
        
        if (var_38 u>= 0x10)
            j__free(var_4c.d)
        
        var_38 = 0xf
        int32_t var_3c_1 = 0
        var_4c = 0
        
        if (var_80 u>= 0x10)
            j__free(var_94.d)
        
        var_c_1.b = 0
        var_80 = 0xf
        int32_t var_84_1 = 0
        var_94 = 0
        
        if (var_20 u>= 0x10)
            j__free(var_34)
    
    int32_t* eax_12 = sub_4216c0(&var_7c, 0x6e1880, &var_34, &var_7c)
    var_c_1.b = 5
    var_c_1.b = 6
    sub_4d4460(&var_9c, sub_410a80(eax_12.b, eax_12, &var_94, U"]"))
    
    if (var_80 u>= 0x10)
        j__free(var_94.d)
    
    int32_t var_80_1 = 0xf
    int32_t var_84_2 = 0
    var_94 = 0
    
    if (var_20 u>= 0x10)
        j__free(var_34)
    
    if (var_68_1 u>= 0x10)
        j__free(var_7c.d)

int32_t* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_9c)
return result
