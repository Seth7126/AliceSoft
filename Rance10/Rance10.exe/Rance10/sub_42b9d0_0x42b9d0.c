// 函数: sub_42b9d0
// 地址: 0x42b9d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729d88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_60 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = *(arg1 + 8)
int32_t var_4c = 0
*(arg1 + 4) = eax_3

while (true)
    if (*(arg1 + 0x10) u> eax_3)
        int32_t edi_1 = eax_3
        char eax_4 = sub_42c7b0(arg1)
        char eax_5
        
        if (eax_4 != 0)
            eax_5 = sub_42c8e0(arg1)
        
        if (eax_4 == 0 || eax_5 == 0)
            sub_42b770(arg2)
            break
        
        eax_3 = *(arg1 + 8)
        
        if (eax_3 != edi_1)
            continue
    
    int32_t var_48
    int32_t var_44
    sub_42baf0(arg1, &var_44, &var_48)
    struct advengine::CToken::VTable* var_40
    sub_42bb80(arg1, &var_40)
    int32_t var_8_1 = 0
    int32_t eax_6 = var_44
    int32_t eax_7 = var_48
    int32_t var_3c
    arg2[1] = var_3c
    *arg2 = &advengine::CToken::`vftable'
    arg2[7] = 0xf
    arg2[6] = 0
    arg2[2].b = 0
    void* var_38
    sub_403590(&arg2[2], &var_38, 0, 0xffffffff)
    arg2[8] = eax_6
    arg2[9] = eax_7
    var_40 = &advengine::CToken::`vftable'
    int32_t var_24
    
    if (var_24 u>= 0x10)
        sub_403160(var_38, var_24 + 1, 1)
    
    break

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
