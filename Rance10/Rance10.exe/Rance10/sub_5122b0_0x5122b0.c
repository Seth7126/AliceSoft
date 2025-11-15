// 函数: sub_5122b0
// 地址: 0x5122b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_738259
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_dc = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_cc = 0x28
char var_74[0x10]
int32_t var_60
void* var_5c
int32_t var_48
char var_44
int32_t var_30_2
char var_2c
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg3 != 0)
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    var_44 = 0
    sub_403490(&var_44, 0x766724, 0x17)
    int32_t var_8_1 = 0
    char* eax_4 = sub_409350(&var_cc, &var_44, &var_2c, &var_cc)
    var_8_1.b = 1
    var_8_1.b = 2
    sub_4055a0(arg2, sub_4175e0(eax_4, eax_4, &var_5c, "\r\n"), 0, 0xffffffff)
    
    if (var_48 u>= 0x10)
        sub_403160(var_5c, var_48 + 1, 1)
    
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c.d, var_18 + 1, 1)
    
    int32_t var_8_2 = 0xffffffff
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    
    if (var_30_1 u>= 0x10)
        sub_403160(var_44.d, var_30_1 + 1, 1)
    
    void* var_c0 = 6
    var_30_2 = 0xf
    int32_t var_34_2 = 0
    var_44 = 0
    sub_403490(&var_44, 0x76673c, 0x11)
    int32_t var_8_3 = 3
    char* eax_13 = sub_514b60(&var_c0, &var_44, &var_2c, &var_c0)
    var_8_3.b = 4
    var_8_3.b = 5
    sub_4055a0(arg2, sub_4175e0(eax_13, eax_13, &var_5c, "\r\n"), 0, 0xffffffff)
    
    if (var_48 u>= 0x10)
        sub_403160(var_5c, var_48 + 1, 1)
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    int32_t var_8_4 = 0xffffffff
    int32_t var_18_2 = 0xf
    int32_t var_1c_2 = 0
    var_2c = 0
    
    if (var_30_2 u>= 0x10)
        sub_403160(var_44.d, var_30_2 + 1, 1)
    
    if (arg1[9] != 0)
        var_30_2 = 0xf
        int32_t var_34_3 = 0
        var_44 = 0
        int32_t var_8_5 = 6
        int32_t* esi_1 = arg1[8]
        void* eax_21 = *esi_1
        var_c0 = eax_21
        char* var_c4
        char* eax_29
        
        if (eax_21 == esi_1)
            eax_29 = &var_44
        else
            do
                var_c4 = *(eax_21 + 0x10)
                int32_t var_18_3 = 0xf
                int32_t var_1c_3 = 0
                var_2c = 0
                sub_403490(&var_2c, "%d, ", 4)
                var_8_5.b = 7
                var_8_5.b = 8
                sub_4055a0(&var_44, sub_409350(&var_c4, &var_2c, &var_74, &var_c4), 0, 0xffffffff)
                
                if (var_60 u>= 0x10)
                    sub_403160(var_74[0].d, var_60 + 1, 1)
                
                var_8_5.b = 6
                var_60 = 0xf
                int32_t var_64_1 = 0
                var_74[0] = 0
                
                if (var_18_3 u>= 0x10)
                    sub_403160(var_2c.d, var_18_3 + 1, 1)
                
                sub_429080(&var_c0)
                eax_21 = var_c0
            while (eax_21 != esi_1)
            
            eax_29 = var_44.d
            
            if (var_30_2 u< 0x10)
                eax_29 = &var_44
        
        var_c4 = eax_29
        int32_t var_18_4 = 0xf
        int32_t var_1c_4 = 0
        var_2c = 0
        sub_403490(&var_2c, 0x766710, 0x11)
        var_8_5.b = 9
        void** eax_31 = sub_409240(&var_c4, &var_2c, &var_74, &var_c4)
        var_8_5.b = 0xa
        var_8_5.b = 0xb
        sub_4055a0(arg2, sub_4175e0(eax_31, eax_31, &var_5c, "\r\n"), 0, 0xffffffff)
        
        if (var_48 u>= 0x10)
            sub_403160(var_5c, var_48 + 1, 1)
        
        if (var_60 u>= 0x10)
            sub_403160(var_74[0].d, var_60 + 1, 1)
        
        var_60 = 0xf
        int32_t var_64_2 = 0
        var_74[0] = 0
        
        if (var_18_4 u>= 0x10)
            sub_403160(var_2c.d, var_18_4 + 1, 1)
        
        int32_t var_8_6 = 0xffffffff
        
        if (var_30_2 u>= 0x10)
            sub_403160(var_44.d, var_30_2 + 1, 1)
    
    int32_t var_18_5 = 0xf
    int32_t var_1c_5 = 0
    var_2c = 0
    int32_t var_8_7 = 0xc
    var_8_7.b = 0xd
    sub_4055a0(arg2, sub_4175e0(sub_403490(&var_2c, 0x7666f8, 0xe), &var_2c, &var_5c, "\r\n"), 0, 
        0xffffffff)
    
    if (var_48 u>= 0x10)
        sub_403160(var_5c, var_48 + 1, 1)
    
    int32_t var_8_8 = 0xffffffff
    
    if (var_18_5 u>= 0x10)
        sub_403160(var_2c.d, var_18_5 + 1, 1)
    
    result = sub_511190(arg1, arg2, arg3)

if (arg3 == 0 || result.b == 0)
    result.b = 0
else
    int32_t var_18_6 = 0xf
    int32_t var_1c_6 = 0
    var_2c = 0
    int32_t var_8_9 = 0xe
    var_8_9.b = 0xf
    sub_4055a0(arg2, sub_4175e0(sub_403490(&var_2c, 0x75d2e7, nullptr), &var_2c, &var_5c, "\r\n"), 
        0, 0xffffffff)
    
    if (var_48 u>= 0x10)
        sub_403160(var_5c, var_48 + 1, 1)
    
    int32_t var_8_10 = 0xffffffff
    
    if (var_18_6 u>= 0x10)
        sub_403160(var_2c.d, var_18_6 + 1, 1)
    
    int32_t* eax_54 = sub_4b6410(&var_44, &arg1[0xb])
    int32_t var_8_11 = 0x10
    int32_t* eax_55 = sub_41a330(eax_54.b, 0x766814, &var_2c, eax_54)
    var_8_11.b = 0x11
    void** eax_56 = sub_4176f0(eax_55.b, eax_55, &var_74, ""\r\n")
    var_8_11.b = 0x12
    var_8_11.b = 0x13
    sub_4055a0(arg2, sub_4175e0(eax_56, eax_56, &var_5c, "\r\n"), 0, 0xffffffff)
    
    if (var_48 u>= 0x10)
        sub_403160(var_5c, var_48 + 1, 1)
    
    if (var_60 u>= 0x10)
        sub_403160(var_74[0].d, var_60 + 1, 1)
    
    int32_t var_60_1 = 0xf
    int32_t var_64_3 = 0
    var_74[0] = 0
    
    if (var_18_6 u>= 0x10)
        sub_403160(var_2c.d, var_18_6 + 1, 1)
    
    int32_t var_8_12 = 0xffffffff
    int32_t var_18_7 = 0xf
    int32_t var_1c_7 = 0
    var_2c = 0
    
    if (var_30_2 u>= 0x10)
        sub_403160(var_44.d, var_30_2 + 1, 1)
    
    void* var_bc
    char* eax_67 = sub_4b6410(&var_bc, &arg1[0x11])
    int32_t var_8_13 = 0x14
    char* eax_68 = sub_41a330(eax_67.b, 0x766800, &var_5c, eax_67)
    var_8_13.b = 0x15
    char var_8c[0x10]
    char* eax_69 = sub_4176f0(eax_68.b, eax_68, &var_8c, ""\r\n")
    var_8_13.b = 0x16
    var_8_13.b = 0x17
    void* var_a4
    sub_4055a0(arg2, sub_4175e0(eax_69, eax_69, &var_a4, "\r\n"), 0, 0xffffffff)
    int32_t var_90
    
    if (var_90 u>= 0x10)
        sub_403160(var_a4, var_90 + 1, 1)
    
    int32_t var_78
    
    if (var_78 u>= 0x10)
        sub_403160(var_8c[0].d, var_78 + 1, 1)
    
    int32_t var_78_1 = 0xf
    int32_t var_7c_1 = 0
    var_8c[0] = 0
    
    if (var_48 u>= 0x10)
        sub_403160(var_5c, var_48 + 1, 1)
    
    int32_t var_48_1 = 0xf
    int32_t var_4c_1 = 0
    var_5c.b = 0
    struct _EXCEPTION_REGISTRATION_RECORD** var_a8
    
    if (var_a8 u>= 0x10)
        sub_403160(var_bc, var_a8 + 1, 1)
    
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
