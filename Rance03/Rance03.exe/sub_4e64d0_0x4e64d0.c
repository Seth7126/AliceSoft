// 函数: sub_4e64d0
// 地址: 0x4e64d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c071b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_94
int32_t eax_2 = __security_cookie ^ &var_94
int32_t __saved_edi
int32_t var_a4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** var_90 = arg2
int32_t var_8c = arg3
int32_t var_74 = 0xf
int32_t var_78 = 0
char var_88 = 0
int32_t var_4 = 0
void** esi = *(arg1 + 4)
int32_t edi = *(arg1 + 8)
int32_t var_70
int32_t var_5c

if (esi != edi)
    do
        int32_t var_44_1 = 0xf
        int32_t var_48_1 = 0
        char var_58 = 0
        sub_401ff0(&var_58, esi, 0, 0xffffffff)
        var_4.b = 1
        char* eax_7 = sub_4e6810(&var_70, &var_58)
        var_4.b = 2
        char var_40
        char* eax_8 = sub_421670(eax_7.b, 0x6e1fa8, &var_40, eax_7)
        var_4.b = 3
        var_4.b = 4
        char var_28
        sub_403110(&var_88, sub_410a80(eax_8.b, eax_8, &var_28, "", "), nullptr, 0xffffffff)
        int32_t var_14
        
        if (var_14 u>= 0x10)
            j__free(var_28.d)
        
        var_14 = 0xf
        int32_t var_18_1 = 0
        var_28 = 0
        int32_t var_2c
        
        if (var_2c u>= 0x10)
            j__free(var_40.d)
        
        var_2c = 0xf
        int32_t var_30_1 = 0
        var_40 = 0
        
        if (var_5c u>= 0x10)
            j__free(var_70)
        
        var_4.b = 0
        
        if (var_44_1 u>= 0x10)
            j__free(var_58.d)
        
        esi = &esi[6]
    while (esi != edi)
    
    if (var_78 != 0)
        char* eax_10 = &var_88
        
        if (var_74 u>= 0x10)
            eax_10 = var_88.d
        
        char* var_a8_7 = eax_10
        var_4.b = 5
        sub_4e6740(&var_90, sub_4691f0(&var_70, 0x6e1f98))
        var_4.b = 0
        
        if (var_5c u>= 0x10)
            j__free(var_70)

int32_t var_a8_10 = *(arg1 + 0x10)
var_4.b = 6
sub_4e6740(&var_90, sub_4691f0(&var_70, 0x6e1f88))

if (var_5c u>= 0x10)
    j__free(var_70)

if (var_74 u>= 0x10)
    j__free(var_88.d)

int32_t* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_94)
return result
