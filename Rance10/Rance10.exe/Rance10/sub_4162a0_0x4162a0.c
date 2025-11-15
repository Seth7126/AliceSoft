// 函数: sub_4162a0
// 地址: 0x4162a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728241
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_1b4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_190 = arg3
int32_t ebx = arg5
int32_t var_198 = ebx
int32_t var_1a4 = 0
int32_t i_2 = (arg2[1] - *arg2) s/ 0x7c
int32_t i_3 = i_2
char* result

if (i_2 s> 0)
    int32_t edi_1 = 0
    int32_t var_18c = 0
    void* var_44
    int32_t var_30
    
    if (i_2 s> 0)
        int32_t ebx_1 = 0
        int32_t i
        
        do
            void var_184
            sub_414740(&var_184, *arg2 + ebx_1)
            int32_t var_8_1 = 0
            void var_180
            int32_t var_148
            int32_t var_188 = var_148 + 1 + *(sub_419be0(&var_180, &var_44) + 0x10)
            
            if (var_30 u>= 0x10)
                sub_403160(var_44, var_30 + 1, 1)
            
            int32_t* eax_14 = &var_188
            
            if (edi_1 s>= var_188)
                eax_14 = &var_18c
            
            edi_1 = *eax_14
            var_18c = edi_1
            int32_t var_8_2 = 0xffffffff
            sub_40ad50(&var_184)
            ebx_1 += 0x7c
            i = i_2
            i_2 -= 1
        while (i != 1)
        i_2 = i_3
        ebx = var_198
    
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_403490(&var_2c, "{\n", 2)
    int32_t var_8_3 = 1
    
    if (i_2 s> 0)
        var_18c = ebx + 1
        int32_t ebx_2 = 0
        int32_t i_1
        
        do
            void var_108
            sub_414740(&var_108, *arg2 + ebx_2)
            var_8_3.b = 2
            sub_405500(&var_2c, ebx << 2, 0x20)
            void var_104
            char* eax_20 = sub_419be0(&var_104, &var_44)
            var_8_3.b = 3
            char var_74[0x10]
            char* eax_21 = sub_4176f0(eax_20.b, eax_20, &var_74, U" ")
            var_8_3.b = 4
            void* var_dc
            char var_5c
            sub_417750(eax_21, eax_21, &var_5c, &var_dc)
            int32_t var_60
            
            if (var_60 u>= 0x10)
                sub_403160(var_74[0].d, var_60 + 1, 1)
            
            var_60 = 0xf
            int32_t var_64_1 = 0
            var_74[0] = 0
            var_8_3.b = 7
            
            if (var_30 u>= 0x10)
                sub_403160(var_44, var_30 + 1, 1)
            
            var_30 = 0xf
            int32_t var_34_1 = 0
            var_44.b = 0
            sub_4055a0(&var_2c, &var_5c, 0, 0xffffffff)
            int32_t var_4c
            sub_405500(&var_2c, edi_1 - var_4c, 0x20)
            sub_407430(&var_2c, " : ", 3)
            var_8_3.b = 8
            void* var_8c
            sub_4055a0(&var_2c, sub_415e60(&var_108, &var_8c, arg4, var_18c), 0, 0xffffffff)
            var_8_3.b = 7
            int32_t var_78
            
            if (var_78 u>= 0x10)
                sub_403160(var_8c, var_78 + 1, 1)
            
            sub_407430(&var_2c, U"\n}", 1)
            int32_t var_48
            
            if (var_48 u>= 0x10)
                sub_403160(var_5c.d, var_48 + 1, 1)
            
            var_48 = 0xf
            var_4c = 0
            var_5c = 0
            var_8_3.b = 1
            sub_40ad50(&var_108)
            ebx_2 += 0x7c
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    if (var_198 s> 0)
        sub_405500(&var_2c, (var_198 << 2) + 0xfffffffc, 0x20)
    
    sub_407430(&var_2c, U"}", 1)
    *(arg3 + 0x14) = 0xf
    *(arg3 + 0x10) = 0
    *arg3 = 0
    sub_4056a0(arg3, &var_2c)
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    result = arg3
else
    sub_403360(arg3, "{ }")
    result = arg3

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
