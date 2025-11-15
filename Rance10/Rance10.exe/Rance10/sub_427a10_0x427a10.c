// 函数: sub_427a10
// 地址: 0x427a10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7298de
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_74 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
void* ebx

if (sub_42c740(arg3).b == 0)
    struct advengine::CToken::VTable* var_3c
    sub_42b9d0(arg3, &var_3c)
    var_8_1.b = 1
    int32_t var_38
    char var_34
    
    if (var_38 == 0xf)
        int32_t esi_1 = 1
        
        if (sub_42c740(arg3) == 0)
            char i
            
            do
                struct advengine::CToken::VTable* var_64
                struct advengine::CToken::VTable** eax_5 = sub_42b9d0(arg3, &var_64)
                var_8_1.b = 2
                int32_t eax_6 = eax_5[1]
                
                if (&var_34 != &eax_5[2])
                    sub_403590(&var_34, &eax_5[2], 0, 0xffffffff)
                
                int32_t var_1c_1 = eax_5[8]
                var_8_1.b = 1
                int32_t var_18_1 = eax_5[9]
                var_64 = &advengine::CToken::`vftable'
                int32_t var_48
                void* var_5c
                
                if (var_48 u>= 0x10)
                    sub_403160(var_5c, var_48 + 1, 1)
                
                if (eax_6 == 0xf)
                    esi_1 += 1
                else if (eax_6 == 0x10)
                    esi_1 -= 1
                
                if (esi_1 == 0)
                    break
                
                if (arg4 == 0)
                    goto label_427a70
                
                (*(*arg4 + 8))(&var_3c)
                i = sub_42c740(arg3)
            while (i == 0)
    else
        if (arg4 == 0)
        label_427a70:
            sub_6d090a()
            noreturn
        
        (*(*arg4 + 8))(&var_3c)
    
    var_3c = &advengine::CToken::`vftable'
    int32_t var_20
    
    if (var_20 u>= 0x10)
        sub_403160(var_34.d, var_20 + 1, 1)
    
    int32_t var_20_1 = 0xf
    ebx.b = 1
    int32_t var_24_1 = 0
    var_34 = 0
else
    ebx.b = 0

int32_t var_8_2 = 3
void arg_4

if (arg4 != 0)
    (*(*arg4 + 0x10))(arg4 != &arg_4)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
