// 函数: sub_40f3d0
// 地址: 0x40f3d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727c0b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_98 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 4)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (ecx != 0)
    void var_90
    (*(*ecx + 0xc))(&var_90, arg2)
    int32_t var_8_1 = 0
    char var_18
    int32_t ebx
    int32_t var_8c
    
    if (var_18 == 0)
        ebx.b = 0
    else if (var_8c == 0xa || var_8c == 2 || var_8c == 0x12 || var_8c == 0x5c || var_8c == 0x5b
            || var_8c == 0x5d)
        ebx.b = sub_41a840(&var_90) != 0
    else if (sub_41a7b0(&var_90) != 0)
        ebx.b = sub_41a840(&var_90) != 0
    else if (var_8c == 0xb || var_8c == 3 || var_8c == 0x13)
        char* eax_5
        float xmm0_1
        eax_5, xmm0_1 = sub_41a970(&var_90)
        xmm0_1 - 0f
        eax_5:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
            | (xmm0_1 < 0f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (not(p_2))
            ebx.b = 0
        else
            ebx.b = 1
    else
        ebx.b = 1
    sub_40ad50(&var_90)
    result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
