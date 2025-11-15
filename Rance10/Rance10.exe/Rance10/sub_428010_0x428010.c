// 函数: sub_428010
// 地址: 0x428010
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?_Fput@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@ABA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AAVios_base@2@DPBDI@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_ec = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct advengine::CToken::VTable* var_54
int32_t esi = sub_42b9d0(arg2, &var_54)[1]
var_54 = &advengine::CToken::`vftable'
struct advengine::CToken::VTable** var_38
void* var_4c

if (var_38 u>= 0x10)
    sub_403160(var_4c, var_38 + 1, 1)
struct advengine::CToken::VTable** result

if (esi == 0xd)
    struct advengine::CToken::VTable* var_7c
    sub_42b9d0(arg2, &var_7c)
    int32_t var_8_1 = 0
    int32_t var_78
    void* var_74
    void* ebx
    
    if (var_78 == 4)
        struct advengine::CToken::VTable** var_18_1 = 0xf
        int32_t var_1c_1 = 0
        char var_2c = 0
        sub_403590(&var_2c, &var_74, 0, 0xffffffff)
        var_8_1.b = 1
        int32_t esi_1 = sub_42b9d0(arg2, &var_54)[1]
        sub_42b720(&var_54)
        
        if (esi_1 == 8)
            struct advengine::CToken::VTable* var_bc
            sub_42b9d0(arg2, &var_bc)
            var_8_1.b = 2
            int32_t var_b8
            
            if (var_b8 == 4)
                void* var_b4
                void var_94
                sub_4033b0(&var_94, &var_b4)
                var_8_1.b = 3
                int32_t esi_2 = sub_42b9d0(arg2, &var_54)[1]
                sub_42b720(&var_54)
                
                if (esi_2 == 0xe)
                    void var_dc
                    int32_t* eax_7 = sub_425e30(&var_dc, &var_94)
                    var_8_1.b = 4
                    var_8_1.b = 5
                    void var_d0
                    void** var_c4
                    sub_4299e0(arg1 + 0x2c, &var_c4, sub_425e30(&var_d0, &var_2c))
                    sub_425bb0(&var_c4[7], eax_7)
                    sub_4043e0(&var_d0)
                    sub_4043e0(&var_dc)
                    ebx.b = 1
                else
                    ebx.b = 0
                
                sub_403320(&var_94)
            else
                ebx.b = 0
            
            sub_42b720(&var_bc)
        else
            ebx.b = 0
        
        if (var_18_1 u>= 0x10)
            sub_403160(var_2c.d, var_18_1 + 1, 1)
        
        int32_t var_18_2 = 0xf
        int32_t var_1c_2 = 0
        var_2c = 0
    else
        ebx.b = 0
    
    var_7c = &advengine::CToken::`vftable'
    int32_t var_60
    
    if (var_60 u>= 0x10)
        sub_403160(var_74, var_60 + 1, 1)
    
    result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
