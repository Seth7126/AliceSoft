// 函数: sub_408250
// 地址: 0x408250
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b322b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_88
int32_t eax_2 = __security_cookie ^ &var_88
int32_t __saved_ebx
int32_t var_90 = __security_cookie ^ &__saved_ebx
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 4)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (ecx != 0)
    (*(*ecx + 0xc))(&var_88, arg2)
    int32_t var_4 = 0
    char var_18
    int32_t ebx
    int32_t var_84
    
    if (var_18 == 0)
        ebx.b = 0
    else if (var_84 == 0xa || var_84 == 2 || var_84 == 0x12 || var_84 == 0x2f || var_84 == 0x30
            || var_84 == 0x33)
        ebx.b = sub_421e40(&var_88) != 0
    else if (var_84 == 0xb || var_84 == 3 || var_84 == 0x13)
        int32_t eax_7
        float xmm0_1
        eax_7, xmm0_1 = sub_421f70(&var_88)
        xmm0_1 - 0f
        eax_7:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
            | (xmm0_1 < 0f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (not(p_2))
            ebx.b = 0
        else
            ebx.b = 1
    else
        ebx.b = 1
    sub_405be0(&var_88)
    result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_88)
return result
