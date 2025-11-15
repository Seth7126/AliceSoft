// 函数: sub_59daf0
// 地址: 0x59daf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73e5a0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_74 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, &(*U"{,,,},},==,==,,,=,=,")[0x12], 1)
int32_t var_8_1 = 0
int32_t var_8_2 = 0xffffffff
int32_t ebx
ebx.b = sub_59f280(arg1, &var_2c) == 0

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t result

if (ebx.b == 0)
    struct _EXCEPTION_REGISTRATION_RECORD** var_20 = nullptr
    int32_t var_1c_1 = 0
    int32_t var_18_1 = 0
    int32_t var_8_3 = 1
    
    while (true)
        int32_t var_48_1 = 0xf
        int32_t var_4c_1 = 0
        char var_5c[0x10]
        var_5c[0] = 0
        var_8_3.b = 2
        void var_60
        
        if (sub_5de3d0(&var_5c, &var_60) == 0)
            if (var_48_1 u>= 0x10)
                sub_403160(var_5c[0].d, var_48_1 + 1, 1)
            
            ebx.b = 0
            break
        
        sub_424db0(&var_20, &var_5c)
        int32_t var_30_1 = 0xf
        int32_t var_34_1 = 0
        char var_44 = 0
        var_8_3.b = 3
        void var_64
        
        if (sub_5de3d0(&var_44, &var_64) != 0
                && sub_407560(&var_44, &(*{,,,},},==,==,,,=,=,")[0x11]) != 0)
            if (var_30_1 u>= 0x10)
                sub_403160(var_44.d, var_30_1 + 1, 1)
            
            if (var_48_1 u< 0x10)
                continue
            else
                sub_403160(var_5c[0].d, var_48_1 + 1, 1)
                continue
        
        *arg1 = arg1[1]
        
        if (var_30_1 u>= 0x10)
            sub_403160(var_44.d, var_30_1 + 1, 1)
        
        var_8_3.b = 1
        
        if (var_48_1 u>= 0x10)
            sub_403160(var_5c[0].d, var_48_1 + 1, 1)
        
        struct _EXCEPTION_REGISTRATION_RECORD** eax_17 = var_20
        
        if (arg2 + 0x210 != eax_17)
            sub_403590(arg2 + 0x210, eax_17, 0, 0xffffffff)
        
        ebx.b = 1
        break
    
    sub_417070(&var_20)
    result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
