// 函数: ?OnAsanReport@__vcasan@@YAXPBD0_N@Z
// 地址: 0x4089b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727318
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_74 = eax_2
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_1 = 0xf
BOOL var_4c = 0
uint8_t var_5c = 0
int32_t var_8_1 = 0
int32_t* esi = arg1[6]
int32_t edi = arg1[7]
uint8_t* edx_6

if (esi == edi)
    edx_6 = &var_5c
else
    do
        void* eax_4
        
        if (esi[5] u< 0x10)
            eax_4 = esi
        else
            eax_4 = *esi
        
        void* var_60 = eax_4
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        char var_2c = 0
        sub_403490(&var_2c, "%s\r\n", 4)
        var_8_1.b = 1
        var_8_1.b = 2
        char var_44
        sub_4055a0(&var_5c, sub_409240(&var_60, &var_2c, &var_44, &var_60), 0, 0xffffffff)
        int32_t var_30
        
        if (var_30 u>= 0x10)
            sub_403160(var_44.d, var_30 + 1, 1)
        
        var_8_1.b = 0
        int32_t var_30_1 = 0xf
        int32_t var_34_1 = 0
        var_44 = 0
        
        if (var_18_1 u>= 0x10)
            sub_403160(var_2c.d, var_18_1 + 1, 1)
        
        int32_t var_18_2 = 0xf
        var_60 = esi[6] + 1
        int32_t var_1c_2 = 0
        var_2c = 0
        sub_403490(&var_2c, "%d\r\n", 4)
        var_8_1.b = 3
        var_8_1.b = 4
        sub_4055a0(&var_5c, sub_409350(&var_60, &var_2c, &var_44, &var_60), 0, 0xffffffff)
        
        if (var_30_1 u>= 0x10)
            sub_403160(var_44.d, var_30_1 + 1, 1)
        
        var_8_1.b = 0
        int32_t var_30_2 = 0xf
        int32_t var_34_2 = 0
        var_44 = 0
        
        if (var_18_2 u>= 0x10)
            sub_403160(var_2c.d, var_18_2 + 1, 1)
        
        int32_t var_18_3 = 0xf
        void* eax_19
        eax_19.b = esi[7].b != 0
        int32_t var_1c_3 = 0
        var_60 = eax_19
        var_2c = 0
        sub_403490(&var_2c, "%d\r\n", 4)
        var_8_1.b = 5
        var_8_1.b = 6
        sub_4055a0(&var_5c, sub_409350(&var_60, &var_2c, &var_44, &var_60), 0, 0xffffffff)
        
        if (var_30_2 u>= 0x10)
            sub_403160(var_44.d, var_30_2 + 1, 1)
        
        var_8_1.b = 0
        int32_t var_30_3 = 0xf
        int32_t var_34_3 = 0
        var_44 = 0
        
        if (var_18_3 u>= 0x10)
            sub_403160(var_2c.d, var_18_3 + 1, 1)
        
        void* eax_26
        
        if (esi[0xd] u< 0x10)
            eax_26 = &esi[8]
        else
            eax_26 = esi[8]
        
        var_60 = eax_26
        int32_t var_18_4 = 0xf
        int32_t var_1c_4 = 0
        var_2c = 0
        sub_403490(&var_2c, "%s\r\n", 4)
        var_8_1.b = 7
        var_8_1.b = 8
        sub_4055a0(&var_5c, sub_409240(&var_60, &var_2c, &var_44, &var_60), 0, 0xffffffff)
        
        if (var_30_3 u>= 0x10)
            sub_403160(var_44.d, var_30_3 + 1, 1)
        
        var_8_1.b = 0
        int32_t var_30_4 = 0xf
        int32_t var_34_4 = 0
        var_44 = 0
        
        if (var_18_4 u>= 0x10)
            sub_403160(var_2c.d, var_18_4 + 1, 1)
        
        var_60 = esi[0xe]
        struct _EXCEPTION_REGISTRATION_RECORD** var_18_5 = 0xf
        int32_t var_1c_5 = 0
        var_2c = 0
        sub_403490(&var_2c, "%d\r\n", 4)
        var_8_1.b = 9
        var_8_1.b = 0xa
        sub_4055a0(&var_5c, sub_409350(&var_60, &var_2c, &var_44, &var_60), 0, 0xffffffff)
        
        if (var_30_4 u>= 0x10)
            sub_403160(var_44.d, var_30_4 + 1, 1)
        
        var_8_1.b = 0
        eax_3 = var_18_5
        var_30 = 0xf
        int32_t var_34_5 = 0
        var_44 = 0
        
        if (eax_3 u>= 0x10)
            eax_3 = sub_403160(var_2c.d, eax_3 + 1, 1)
        
        esi = &esi[0xf]
    while (esi != edi)
    
    edx_6 = var_5c.d
    
    if (result_1 u< 0x10)
        edx_6 = &var_5c

sub_67efe0(eax_3, edx_6, arg1, var_4c)
int32_t result = result_1

if (result u>= 0x10)
    result = sub_403160(var_5c.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
