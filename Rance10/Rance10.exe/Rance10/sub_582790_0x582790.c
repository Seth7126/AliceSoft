// 函数: sub_582790
// 地址: 0x582790
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73d469
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_d4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x214) = 0
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(arg1 + 0x14) != 0)
    char var_74
    int32_t* eax_3 = sub_405130(&var_74, arg1 + 4)
    int32_t var_8_1 = 0
    char var_5c
    char* eax_4 = sub_404f20(&var_5c, arg1 + 4)
    var_8_1.b = 1
    void* var_a4
    sub_4177a0(eax_4, eax_4, &var_a4, eax_3)
    int32_t var_48
    
    if (var_48 u>= 0x10)
        sub_403160(var_5c.d, var_48 + 1, 1)
    
    int32_t var_48_1 = 0xf
    int32_t var_4c_1 = 0
    var_5c = 0
    var_8_1.b = 4
    int32_t var_60
    int32_t eax_7 = var_60
    
    if (eax_7 u>= 0x10)
        eax_7 = sub_403160(var_74.d, eax_7 + 1, 1)
    
    int32_t var_60_1 = 0xf
    int32_t var_64_1 = 0
    var_74 = 0
    void* var_44
    int32_t* eax_9 = sub_4175e0(eax_7, &var_a4, &var_44, ".png")
    var_8_1.b = 5
    var_8_1.b = 4
    void* ebx
    ebx.b = sub_5d0440(*(arg1 + 0x24c), eax_9) == 0
    struct _EXCEPTION_REGISTRATION_RECORD** var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44, var_30 + 1, 1)
    
    if (ebx.b == 0)
        struct _EXCEPTION_REGISTRATION_RECORD** var_c0 = 1
        
        while (true)
            int32_t var_18_1 = 0xf
            int32_t var_1c_1 = 0
            char var_2c = 0
            sub_403490(&var_2c, "[%d]", 4)
            var_8_1.b = 6
            sub_409350(&var_c0, &var_2c, &var_44, &var_c0)
            var_8_1.b = 8
            
            if (var_18_1 u>= 0x10)
                sub_403160(var_2c.d, var_18_1 + 1, 1)
            
            int32_t var_18_2 = 0xf
            int32_t var_1c_2 = 0
            var_2c = 0
            void* var_bc
            int32_t* eax_16 = sub_4079d0(&var_44, &var_a4, &var_bc, &var_44)
            var_8_1.b = 9
            char var_8c[0x10]
            char* eax_17 = sub_4176f0(eax_16.b, eax_16, &var_8c, ".png")
            var_8_1.b = 0xa
            ebx.b = sub_5d0440(*(arg1 + 0x24c), eax_17) == 0
            int32_t var_78
            
            if (var_78 u>= 0x10)
                sub_403160(var_8c[0].d, var_78 + 1, 1)
            
            var_8_1.b = 8
            var_78 = 0xf
            int32_t var_7c_1 = 0
            var_8c[0] = 0
            int32_t var_a8
            
            if (var_a8 u>= 0x10)
                sub_403160(var_bc, var_a8 + 1, 1)
            
            if (ebx.b != 0)
                break
            
            var_8_1.b = 4
            
            if (var_30 u>= 0x10)
                sub_403160(var_44, var_30 + 1, 1)
            
            var_c0 += 1
        
        if (var_30 u>= 0x10)
            sub_403160(var_44, var_30 + 1, 1)
        
        ebx.b = 1
        *(arg1 + 0x214) = var_c0
    else
        *(arg1 + 0x214) = 0
        ebx.b = 0
    
    int32_t var_90
    
    if (var_90 u>= 0x10)
        sub_403160(var_a4, var_90 + 1, 1)
    
    result.b = ebx.b
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
